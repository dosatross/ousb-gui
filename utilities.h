/*===============================================================================

PURPOSE - provide some useful routines for Qt4 GUI programs.

 */

#ifndef UTILITIES_H_
#define UTILITIES_H_

//====== Call a shell routine.
bool shell_cmd(QByteArray *command_line, QByteArray *work_dir, QByteArray *result,
		       int ms_timeout, bool clean_up_output, QObject *parent) ;


#endif /* UTILITIES_H_ */
