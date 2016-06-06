/*============ gui_1.cpp =============================================

  PURPOSE : this program shows you some of the basics of using Qt
            Designer.  Read the lecturer notes for details.

    HINTS : Don't try to use C++ strings,  use QbyteArray class instead
            as it can do much more. Look in Qt 4 Assistant for the class
            and find "::number" under static members,  and toInt.

            Copy and paste this project to create your own project,
            again see the lecture notes for details.
*/
#include <QtGui>

#include "gui_1.h"
#include "gui_2.h"
#include "utilities.h"


//====== Constructor & destructor ======================================

gui_1::gui_1(QWidget *parent)
    : QMainWindow(parent)
{  ui.setupUi(this);
 //--- Timer Control
   timer = new QTimer(this); // create timer.
   // Link timer tick to you own function timer_tick()
   connect(timer, SIGNAL(timeout()), this, SLOT(timer_tick()));
   timer->start(1000);       // start timer.
 //--- Use this to get a one shot timer event.
 //    Comment out the above 3 timer lines and un-comment the line below.
   //QTimer::singleShot(3000, this, SLOT(timer_tick()));
}

gui_1::~gui_1()
{
}

void gui_1::on_sendToLed_clicked()
{
	QByteArray command_line, work_dir("/"), result ;
	QByteArray portbString;
	command_line = "ousb -r io pinc" ;
	shell_cmd(&command_line, &work_dir, &result, 300, TRUE, this);
	command_line = "ousb -r io portb " ;
	command_line.append(result);
	shell_cmd(&command_line, &work_dir, &result, 300, TRUE, this);
}


//=============LEDs======================
void gui_1::on_led0_clicked()
{
	QByteArray command_line, work_dir("/"), result ;
	QByteArray portbString;
	command_line = "ousb -r io pinb" ;
	shell_cmd(&command_line, &work_dir, &result, 300, TRUE, this);
	int pinb = result.toInt();
	int led = 0;
	int portb;

	if((pinb&(1<<led))==1)
	{
		command_line = "ousb -r io portb ";
		portb = (pinb&(~(1<<led)));
		portbString.setNum(portb);
		command_line.append(portbString);
		shell_cmd(&command_line, &work_dir, &result, 300, TRUE, this);



	}
	else if((pinb&(1<<led))==0)
	{
		command_line = "ousb -r io portb ";
		portb = pinb|(1<<led);
		portbString.setNum(portb);
		command_line.append(portbString);
		shell_cmd(&command_line, &work_dir, &result, 300, TRUE, this);
	}
}

void gui_1::on_led1_clicked()
{
	QByteArray command_line, work_dir("/"), result ;
		QByteArray portbString;
		command_line = "ousb -r io pinb" ;
		shell_cmd(&command_line, &work_dir, &result, 300, TRUE, this);
		int pinb = result.toInt();
		int led = 1;
		int portb;

		if((pinb&(1<<led))==2)
		{
			command_line = "ousb -r io portb ";
			portb = pinb&(~(1<<led));
			portbString.setNum(portb);
			command_line.append(portbString);
			shell_cmd(&command_line, &work_dir, &result, 300, TRUE, this);



		}
		else if((pinb&(1<<led))==0)
		{
			command_line = "ousb -r io portb ";
			portb = pinb|(1<<led);
			portbString.setNum(portb);
			command_line.append(portbString);
			shell_cmd(&command_line, &work_dir, &result, 300, TRUE, this);
		}
}

void gui_1::on_led2_clicked()
{
	QByteArray command_line, work_dir("/"), result ;
		QByteArray portbString;
		command_line = "ousb -r io pinb" ;
		shell_cmd(&command_line, &work_dir, &result, 300, TRUE, this);
		int pinb = result.toInt();
		int led = 2;
		int portb;

		if((pinb&(1<<led))==4)
		{
			command_line = "ousb -r io portb ";
			portb = pinb&(~(1<<led));
			portbString.setNum(portb);
			command_line.append(portbString);
			shell_cmd(&command_line, &work_dir, &result, 300, TRUE, this);



		}
		else if((pinb&(1<<led))==0)
		{
			command_line = "ousb -r io portb ";
			portb = pinb|(1<<led);
			portbString.setNum(portb);
			command_line.append(portbString);
			shell_cmd(&command_line, &work_dir, &result, 300, TRUE, this);
		}
}

void gui_1::on_led3_clicked()
{
	QByteArray command_line, work_dir("/"), result ;
		QByteArray portbString;
		command_line = "ousb -r io pinb" ;
		shell_cmd(&command_line, &work_dir, &result, 300, TRUE, this);
		int pinb = result.toInt();
		int led = 3;
		int portb;

		if((pinb&(1<<led))==8)
		{
			command_line = "ousb -r io portb ";
			portb = pinb&(~(1<<led));
			portbString.setNum(portb);
			command_line.append(portbString);
			shell_cmd(&command_line, &work_dir, &result, 300, TRUE, this);



		}
		else if((pinb&(1<<led))==0)
		{
			command_line = "ousb -r io portb ";
			portb = pinb|(1<<led);
			portbString.setNum(portb);
			command_line.append(portbString);
			shell_cmd(&command_line, &work_dir, &result, 300, TRUE, this);
		}
}

void gui_1::on_led4_clicked()
{
	QByteArray command_line, work_dir("/"), result ;
		QByteArray portbString;
		command_line = "ousb -r io pinb" ;
		shell_cmd(&command_line, &work_dir, &result, 300, TRUE, this);
		int pinb = result.toInt();
		int led = 4;
		int portb;

		if((pinb&(1<<led))==16)
		{
			command_line = "ousb -r io portb ";
			portb = pinb&(~(1<<led));
			portbString.setNum(portb);
			command_line.append(portbString);
			shell_cmd(&command_line, &work_dir, &result, 300, TRUE, this);



		}
		else if((pinb&(1<<led))==0)
		{
			command_line = "ousb -r io portb ";
			portb = pinb|(1<<led);
			portbString.setNum(portb);
			command_line.append(portbString);
			shell_cmd(&command_line, &work_dir, &result, 300, TRUE, this);
		}
}


void gui_1::on_led5_clicked()
{
	QByteArray command_line, work_dir("/"), result ;
		QByteArray portbString;
		command_line = "ousb -r io pinb" ;
		shell_cmd(&command_line, &work_dir, &result, 300, TRUE, this);
		int pinb = result.toInt();
		int led = 5;
		int portb;

		if((pinb&(1<<led))==32)
		{
			command_line = "ousb -r io portb ";
			portb = pinb&(~(1<<led));
			portbString.setNum(portb);
			command_line.append(portbString);
			shell_cmd(&command_line, &work_dir, &result, 300, TRUE, this);



		}
		else if((pinb&(1<<led))==0)
		{
			command_line = "ousb -r io portb ";
			portb = pinb|(1<<led);
			portbString.setNum(portb);
			command_line.append(portbString);
			shell_cmd(&command_line, &work_dir, &result, 300, TRUE, this);
		}
}

void gui_1::on_led6_clicked()
{
	QByteArray command_line, work_dir("/"), result ;
		QByteArray portbString;
		command_line = "ousb -r io pinb" ;
		shell_cmd(&command_line, &work_dir, &result, 300, TRUE, this);
		int pinb = result.toInt();
		int led = 6;
		int portb;

		if((pinb&(1<<led))==64)
		{
			command_line = "ousb -r io portb ";
			portb = pinb&(~(1<<led));
			portbString.setNum(portb);
			command_line.append(portbString);
			shell_cmd(&command_line, &work_dir, &result, 300, TRUE, this);



		}
		else if((pinb&(1<<led))==0)
		{
			command_line = "ousb -r io portb ";
			portb = pinb|(1<<led);
			portbString.setNum(portb);
			command_line.append(portbString);
			shell_cmd(&command_line, &work_dir, &result, 300, TRUE, this);
		}
}

void gui_1::on_led7_clicked()
{
	QByteArray command_line, work_dir("/"), result ;
		QByteArray portbString;
		command_line = "ousb -r io pinb" ;
		shell_cmd(&command_line, &work_dir, &result, 300, TRUE, this);
		int pinb = result.toInt();
		int led = 7;
		int portb;

		if((pinb&(1<<led))==128)
		{
			command_line = "ousb -r io portb ";
			portb = pinb&(~(1<<led));
			portbString.setNum(portb);
			command_line.append(portbString);
			shell_cmd(&command_line, &work_dir, &result, 300, TRUE, this);



		}
		else if((pinb&(1<<led))==0)
		{
			command_line = "ousb -r io portb ";
			portb = pinb|(1<<led);
			portbString.setNum(portb);
			command_line.append(portbString);
			shell_cmd(&command_line, &work_dir, &result, 300, TRUE, this);
		}
}



//=========== Respond to menu event =====================================

void gui_1::on_actionAbout_triggered()
{ gui_2 *w = new gui_2 ;      // create gui_2 run time object.
w->parent_window = this ;   // give child address of parent window.
w->show();                  // show the child window.
}

/*============ Respond to Timer =======================================

See the constructor to see the timer getting started.
*/

void gui_1::timer_tick()
{ ui.lcdNumber->display( ui.lcdNumber->intValue() + 1) ;



//=============SWITCHES

QByteArray command_line, work_dir("/"), result ;
command_line = "ousb -r io pinc" ;
shell_cmd(&command_line, &work_dir, &result, 300, TRUE, this);
int pinc = result.toInt();

ui.switchNum->display( pinc) ;

//0
if((pinc&(1<<0))==1)
{
    ui.switch0->setValue(1);
    ui.switch0->setDisabled(true);
}
else if ((pinc&(1<<0))==0)
{
	ui.switch0->setValue(0);
	ui.switch0->setDisabled(true);
}

//1
if((pinc&(1<<1))==2)
{
    ui.switch1->setValue(1);
    ui.switch1->setDisabled(true);
}
else if ((pinc&(1<<1))==0)
{
	ui.switch1->setValue(0);
	ui.switch1->setDisabled(true);
}

//2
if((pinc&(1<<2))==4)
{
    ui.switch2->setValue(1);
    ui.switch2->setDisabled(true);
}
else if ((pinc&(1<<2))==0)
{
	ui.switch2->setValue(0);
	ui.switch2->setDisabled(true);
}

//
if((pinc&(1<<3))==8)
{
    ui.switch3->setValue(1);
    ui.switch3->setDisabled(true);
}
else if ((pinc&(1<<3))==0)
{
	ui.switch3->setValue(0);
	ui.switch3->setDisabled(true);
}

//
if((pinc&(1<<4))==16)
{
    ui.switch4->setValue(1);
    ui.switch4->setDisabled(true);
}
else if ((pinc&(1<<4))==0)
{
	ui.switch4->setValue(0);
	ui.switch4->setDisabled(true);
}

//
if((pinc&(1<<5))==32)
{
    ui.switch5->setValue(1);
    ui.switch5->setDisabled(true);
}
else if ((pinc&(1<<5))==0)
{
	ui.switch5->setValue(0);
	ui.switch5->setDisabled(true);
}

//
if((pinc&(1<<6))==64)
{
    ui.switch6->setValue(1);
    ui.switch6->setDisabled(true);
}
else if ((pinc&(1<<6))==0)
{
	ui.switch6->setValue(0);
	ui.switch6->setDisabled(true);
}


//
if((pinc&(1<<7))==128)
{
    ui.switch7->setValue(1);
    ui.switch7->setDisabled(true);
}
else if ((pinc&(1<<7))==0)
{
	ui.switch7->setValue(0);
	ui.switch7->setDisabled(true);
}







//=============LEDs
command_line = "ousb -r io pinb" ;
shell_cmd(&command_line, &work_dir, &result, 300, TRUE, this);
int pinb = result.toInt();


ui.ledNum->display( pinb) ;

QPalette palette;

//0
if((pinb&(1<<0))==1)
{
	palette.setColor(ui.led0->backgroundRole(), Qt::red);
	ui.led0->setPalette(palette);

}
else if ((pinb&(1<<0))==0)
{
	palette.setColor(ui.led0->backgroundRole(), Qt::white);
	ui.led0->setPalette(palette);
}

//1
if((pinb&(1<<1))==2)
{
	palette.setColor(ui.led1->backgroundRole(), Qt::red);
	ui.led1->setPalette(palette);

}
else if ((pinb&(1<<1))==0)
{
	palette.setColor(ui.led1->backgroundRole(), Qt::white);
	ui.led1->setPalette(palette);
}

//2
if((pinb&(1<<2))==4)
{
	palette.setColor(ui.led2->backgroundRole(), Qt::red);
	ui.led2->setPalette(palette);

}
else if ((pinb&(1<<2))==0)
{
	palette.setColor(ui.led2->backgroundRole(), Qt::white);
	ui.led2->setPalette(palette);
}

//3
if((pinb&(1<<3))==8)
{
	palette.setColor(ui.led3->backgroundRole(), Qt::red);
	ui.led3->setPalette(palette);

}
else if ((pinb&(1<<3))==0)
{
	palette.setColor(ui.led3->backgroundRole(), Qt::white);
	ui.led3->setPalette(palette);
}

//4
if((pinb&(1<<4))==16)
{
	palette.setColor(ui.led4->backgroundRole(), Qt::red);
	ui.led4->setPalette(palette);

}
else if ((pinb&(1<<4))==0)
{
	palette.setColor(ui.led4->backgroundRole(), Qt::white);
	ui.led4->setPalette(palette);
}

//5
if((pinb&(1<<5))==32)
{
	palette.setColor(ui.led5->backgroundRole(), Qt::red);
	ui.led5->setPalette(palette);

}
else if ((pinb&(1<<0))==0)
{
	palette.setColor(ui.led5->backgroundRole(), Qt::white);
	ui.led5->setPalette(palette);
}

//6
if((pinb&(1<<6))==64)
{
	palette.setColor(ui.led6->backgroundRole(), Qt::red);
	ui.led6->setPalette(palette);

}
else if ((pinb&(1<<6))==0)
{
	palette.setColor(ui.led6->backgroundRole(), Qt::white);
	ui.led6->setPalette(palette);
}

//7
if((pinb&(1<<7))==128)
{
	palette.setColor(ui.led7->backgroundRole(), Qt::red);
	ui.led7->setPalette(palette);

}
else if ((pinb&(1<<7))==0)
{
	palette.setColor(ui.led7->backgroundRole(), Qt::white);
	ui.led7->setPalette(palette);
}




//================LDR AND POT

command_line = "ousb -r adc 6" ;
shell_cmd(&command_line, &work_dir, &result, 300, TRUE, this);
int ldr = result.toInt();

ui.ldrNum->display( ldr) ;
ui.ldrDial->setRange(0,1023);
ui.ldrDial->setValue(ldr);
ui.ldrDial->setDisabled(true);
ui.ldrBar->setRange(0,1023);
ui.ldrBar->setValue(ldr);


command_line = "ousb -r adc 5" ;
shell_cmd(&command_line, &work_dir, &result, 300, TRUE, this);
int pot = result.toInt();

ui.potNum->display( pot) ;
ui.potDial->setRange(0,1023);
ui.potDial->setValue(pot);
ui.potDial->setDisabled(true);
ui.potBar->setRange(0,1023);
ui.potBar->setValue(pot);


//============SPARE PORTS

command_line = "ousb -r adc 0" ;
shell_cmd(&command_line, &work_dir, &result, 300, TRUE, this);
int pa0 = result.toInt();

ui.pa0Num->display( pa0) ;
ui.pa0Bar->setRange(0,1023);
ui.pa0Bar->setValue(pa0);


command_line = "ousb -r adc 1" ;
shell_cmd(&command_line, &work_dir, &result, 300, TRUE, this);
int pa1 = result.toInt();

ui.pa1Num->display( pa1) ;
ui.pa1Bar->setRange(0,1023);
ui.pa1Bar->setValue(pa1);

command_line = "ousb -r adc 2" ;
shell_cmd(&command_line, &work_dir, &result, 300, TRUE, this);
int pa2 = result.toInt();

ui.pa2Num->display( pa2) ;
ui.pa2Bar->setRange(0,1023);
ui.pa2Bar->setValue(pa2);


command_line = "ousb -r adc 3" ;
shell_cmd(&command_line, &work_dir, &result, 300, TRUE, this);
int pa3 = result.toInt();

ui.pa3Num->display( pa3) ;
ui.pa3Bar->setRange(0,1023);
ui.pa3Bar->setValue(pa3);

command_line = "ousb -r adc 4" ;
shell_cmd(&command_line, &work_dir, &result, 300, TRUE, this);
int pa4 = result.toInt();

ui.pa4Num->display( pa4) ;
ui.pa4Bar->setRange(0,1023);
ui.pa4Bar->setValue(pa4);


command_line = "ousb -r adc 7" ;
shell_cmd(&command_line, &work_dir, &result, 300, TRUE, this);
int pa7 = result.toInt();

ui.pa7Num->display( pa7) ;
ui.pa7Bar->setRange(0,1023);
ui.pa7Bar->setValue(pa7);



//==============POT CHART
if (pot>=0 && pot< 100)
{
	ui.textBrowser->append("");
}
else if (pot>=100 && pot< 200)
{
	ui.textBrowser->append("|");
}
else if (pot>=200 && pot< 300)
{
	ui.textBrowser->append("| |");
}
else if (pot>=300 && pot< 400)
{
	ui.textBrowser->append("| | |");
}
else if (pot>=400 && pot< 500)
{
	ui.textBrowser->append("| | | |");
}
else if (pot>=500 && pot< 600)
{
	ui.textBrowser->append("| | | | |");
}
else if (pot>=600 && pot< 700)
{
	ui.textBrowser->append("| | | | | |");
}
else if (pot>=700 && pot< 800)
{
	ui.textBrowser->append("| | | | | | |");
}
else if (pot>=800 && pot< 900)
{
	ui.textBrowser->append("| | | | | | | |");
}
else if (pot>=900)
{
	ui.textBrowser->append("| | | | | | | | |");
}





}



