//--- Many Qt features require a header added,  see QtAssistant on the feature
//    to see what includes are required.
#include "gui_1.h"
#include "gui_2.h"
#include <QCloseEvent>
#include <QPainter>
#include <QDebug>
#include "/usr/include/sys/io.h"    // to get IO access to ports such as the parallel port.

/*================= Useful Features & How to Implement Them ===========

CHILD WINDOWS: the start window can cause a child window to be displayed,
and then go back to the the parent window.  This is useful for pop-up
windows such as about.

  * Create a new window.
    Right click on the project name in the project window.
    Select New->Qt GUI class, give it a name (eg gui_2),
    ensure QWidget is the gui type.
    Do a File->Save All to save files.
    Note the new code file gui_2.cpp, header file gui_2.h, and form
    file gui_2.ui.
  * Create the code to start the window,  see the gui_1 function
      void gui_1::on_pushButton_3_clicked()
    Note how a pointer to the parent is put in the gui_2 variable
    QWidget* parent_window ; in gui_2.h
  * grab the close event of gui_2 form,  see the function in this
    file called void gui_2::closeEvent(QCloseEvent *event)


DRAWING GRAPHICS:  Qt can do a lot of clever graphics stuff,
in QtAssistant look up QPainter to get an idea of what can be done.
The actual repainting is done via the routine paintEvent(QPaintEvent *).
This get called whenever Qt thinks the screen needs to be redrawn, for
example on window resize, or if you code calls this->update().

See the draw code below.

EVENTS: all graphical Qt items can generate or receive events,  for
example resize and change value.  The paint event above is one example.
Use QT Assistant to look at the GUI component,  and search on "event"
to see all the event you can hook into.


DEBUG INFORMATION: you can print to the terminal screen using
qDebug(), remember to include #include <QDebug> as well.
Text is sent to the terminal screen.


IO PORT ACCESS:  The IO ports on your PC can be accessed at about 1MHz
and this is the quickest way to get information into the PC.  Linux
allows your code to be executed every 1 ms.  Useful ports include the
legacy ports for parallel port and serial port.  Now alas these are
only available on old lap-tops and desk-tops.
IO access is blocked but can be enabled using some clever IO enablers.
To enable IO access for your program start as follows-
  lp_tty_start ./program_name parameters
Failure to do this will result in a segmentation fault as your code
tries to access banned memory.
See  void gui_2::on_pushButton_2_clicked() to see how to read and write
to these ports.
See http://linuxgazette.net/112/radcliffe.html for more details.

*/

//========= Constructor and Destructor ================================

gui_2::gui_2(QWidget *parent)
    : QWidget(parent)
{
	ui.setupUi(this); //draw form.
}

gui_2::~gui_2()
{
}

/*============== grab close event ====================================

 PURPOSE - grab hold of the close event.

    NOTE - many events can be hooked into to drive your own code.
           See EVENTS above for a discussion.
         - see includes above for required include file.
 */
void gui_2::closeEvent(QCloseEvent *event)
{ parent_window->show() ;
  event->accept() ; // can ignore to not close.
}
