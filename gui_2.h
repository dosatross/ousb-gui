#ifndef GUI_2_H
#define GUI_2_H

#include <QtGui/QWidget>
#include "ui_gui_2.h"

class gui_2 : public QWidget
{
    Q_OBJECT

public:
    gui_2(QWidget *parent = 0);
    ~gui_2();
    QWidget* parent_window ;

protected:
    void closeEvent(QCloseEvent *event);

private:
    Ui::gui_2Class ui;


public slots:

};

#endif // GUI_2_H
