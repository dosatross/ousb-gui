#ifndef GUI_1_H
#define GUI_1_H

#include <QtGui/QMainWindow>
#include "ui_gui_1.h"

class gui_1 : public QMainWindow
{
    Q_OBJECT

public:
    gui_1(QWidget *parent = 0);
    ~gui_1();

private:
    Ui::gui_1Class ui;
    QTimer *timer ;

public slots:
 void on_actionAbout_triggered() ;
 void timer_tick() ;
 void on_led0_clicked();
 void on_led1_clicked();
 void on_led2_clicked();
 void on_led3_clicked();
 void on_led4_clicked();
 void on_led5_clicked();
 void on_led6_clicked();
 void on_led7_clicked();
 void on_sendToLed_clicked();
};

#endif // GUI_1_H
