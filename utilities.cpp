/*
 * utilities.cpp
 *
 *  Created on: 26/09/2010
 *      Author: Dr. Pj Radcliffe
 */
#include <QProcess>
#include <QString>
#include <QStringList>
#include <QTime>
#include <QObject>

#include "utilities.h"

/*----- shell_cmd ----------------------------------------------------------

PURPOSE - call command line with timeout.

   NOTE - Full BASH shell is not available,  most special characters such as
          * and ? are not available, nor clever functions such as ;.
        - GUI is held up until shell finishes.
        - clean_up_output gets rid of all non-printable characters including
          line feeds.  White spaces are also simplified.

 OUTPUT - FALSE result=""    : command failed to start.
          FALSE result != "" : command ran but returned non-zero error code.
          TRUE               : command ran with no error code on return.
*/
bool shell_cmd(QByteArray *command_line, QByteArray *work_dir, QByteArray *result,
		       int ms_timeout, bool clean_up_output, QObject *parent)
{//--- start shell, abort if timeout.
   *result="" ;
   QProcess shell(parent) ;
   shell.setWorkingDirectory( *work_dir) ;
   shell.start(*command_line) ;
   if ( !shell.waitForFinished(ms_timeout))
      { return(FALSE) ;
      }

 //--- Get and clean up shell stdout.
   *result =  shell.readAllStandardOutput() ;
   if ( clean_up_output)
    { *result = result->simplified() ;
      int len = result->length() ;
      int j = 0 ;
      while ( j < len) // get rid of control characters.
        { if ( (*result)[j] < ' ')
            {  result->remove( j, 1);
               --len ;
               break ;
            }
          else j++ ;
        }
    }
 //--- return false if shell returns an error.
   if (shell.exitStatus())
    { if ( *result == "")
    	*result = " " ;
      return(FALSE) ;
    }

 //---- if got here command must be OK, get stdout.
   return(TRUE) ;

}
