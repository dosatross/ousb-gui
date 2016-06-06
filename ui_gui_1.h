/********************************************************************************
** Form generated from reading UI file 'gui_1.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_1_H
#define UI_GUI_1_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDial>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gui_1Class
{
public:
    QAction *actionSave;
    QAction *actionQuit;
    QAction *actionAbout;
    QWidget *centralwidget;
    QGridLayout *gridLayout_16;
    QLCDNumber *lcdNumber;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QSlider *switch0;
    QSlider *switch7;
    QSlider *switch6;
    QSlider *switch5;
    QSlider *switch1;
    QSlider *switch4;
    QSlider *switch2;
    QSlider *switch3;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLCDNumber *switchNum;
    QPushButton *sendToLed;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QLCDNumber *ledNum;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QPushButton *led7;
    QPushButton *led6;
    QPushButton *led5;
    QPushButton *led4;
    QPushButton *led3;
    QPushButton *led2;
    QPushButton *led0;
    QPushButton *led1;
    QWidget *tab_3;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_7;
    QDial *ldrDial;
    QLCDNumber *ldrNum;
    QProgressBar *ldrBar;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_6;
    QDial *potDial;
    QLCDNumber *potNum;
    QProgressBar *potBar;
    QWidget *tab_4;
    QGridLayout *gridLayout_8;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_9;
    QLCDNumber *pa0Num;
    QProgressBar *pa0Bar;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_10;
    QLCDNumber *pa1Num;
    QProgressBar *pa1Bar;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_11;
    QLCDNumber *pa2Num;
    QProgressBar *pa2Bar;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_14;
    QProgressBar *pa3Bar;
    QLCDNumber *pa3Num;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout_13;
    QProgressBar *pa4Bar;
    QLCDNumber *pa4Num;
    QGroupBox *groupBox_10;
    QGridLayout *gridLayout_12;
    QProgressBar *pa7Bar;
    QLCDNumber *pa7Num;
    QWidget *tab_5;
    QGridLayout *gridLayout_15;
    QTextBrowser *textBrowser;
    QLabel *label_13;
    QLabel *label_12;
    QLabel *label_14;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *gui_1Class)
    {
        if (gui_1Class->objectName().isEmpty())
            gui_1Class->setObjectName(QString::fromUtf8("gui_1Class"));
        gui_1Class->resize(810, 482);
        actionSave = new QAction(gui_1Class);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionQuit = new QAction(gui_1Class);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionAbout = new QAction(gui_1Class);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralwidget = new QWidget(gui_1Class);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_16 = new QGridLayout(centralwidget);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setMinimumSize(QSize(64, 23));
        lcdNumber->setMaximumSize(QSize(64, 23));

        gridLayout_16->addWidget(lcdNumber, 0, 0, 1, 1);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        switch0 = new QSlider(groupBox);
        switch0->setObjectName(QString::fromUtf8("switch0"));
        switch0->setMaximum(1);
        switch0->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(switch0, 1, 0, 1, 1);

        switch7 = new QSlider(groupBox);
        switch7->setObjectName(QString::fromUtf8("switch7"));
        switch7->setMaximum(1);
        switch7->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(switch7, 1, 7, 1, 1);

        switch6 = new QSlider(groupBox);
        switch6->setObjectName(QString::fromUtf8("switch6"));
        switch6->setMaximum(1);
        switch6->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(switch6, 1, 6, 1, 1);

        switch5 = new QSlider(groupBox);
        switch5->setObjectName(QString::fromUtf8("switch5"));
        switch5->setMaximum(1);
        switch5->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(switch5, 1, 5, 1, 1);

        switch1 = new QSlider(groupBox);
        switch1->setObjectName(QString::fromUtf8("switch1"));
        switch1->setMaximum(1);
        switch1->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(switch1, 1, 1, 1, 1);

        switch4 = new QSlider(groupBox);
        switch4->setObjectName(QString::fromUtf8("switch4"));
        switch4->setMaximum(1);
        switch4->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(switch4, 1, 4, 1, 1);

        switch2 = new QSlider(groupBox);
        switch2->setObjectName(QString::fromUtf8("switch2"));
        switch2->setMaximum(1);
        switch2->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(switch2, 1, 2, 1, 1);

        switch3 = new QSlider(groupBox);
        switch3->setObjectName(QString::fromUtf8("switch3"));
        switch3->setMaximum(1);
        switch3->setOrientation(Qt::Vertical);

        gridLayout_2->addWidget(switch3, 1, 3, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 2, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 2, 2, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 2, 3, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 2, 4, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 2, 5, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 2, 6, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 2, 7, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(21, 16));
        label_10->setMaximumSize(QSize(21, 16));

        gridLayout_2->addWidget(label_10, 0, 9, 1, 1);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(31, 16));
        label_11->setMaximumSize(QSize(31, 16));

        gridLayout_2->addWidget(label_11, 2, 9, 1, 1);


        gridLayout->addWidget(groupBox, 1, 0, 1, 3);

        switchNum = new QLCDNumber(tab);
        switchNum->setObjectName(QString::fromUtf8("switchNum"));
        switchNum->setMinimumSize(QSize(64, 23));
        switchNum->setMaximumSize(QSize(64, 23));

        gridLayout->addWidget(switchNum, 0, 0, 1, 1);

        sendToLed = new QPushButton(tab);
        sendToLed->setObjectName(QString::fromUtf8("sendToLed"));
        sendToLed->setMinimumSize(QSize(80, 25));
        sendToLed->setMaximumSize(QSize(80, 25));

        gridLayout->addWidget(sendToLed, 0, 2, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        ledNum = new QLCDNumber(tab_2);
        ledNum->setObjectName(QString::fromUtf8("ledNum"));
        ledNum->setMinimumSize(QSize(64, 23));
        ledNum->setMaximumSize(QSize(64, 23));

        gridLayout_3->addWidget(ledNum, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        led7 = new QPushButton(groupBox_2);
        led7->setObjectName(QString::fromUtf8("led7"));

        gridLayout_4->addWidget(led7, 1, 7, 1, 1);

        led6 = new QPushButton(groupBox_2);
        led6->setObjectName(QString::fromUtf8("led6"));

        gridLayout_4->addWidget(led6, 1, 6, 1, 1);

        led5 = new QPushButton(groupBox_2);
        led5->setObjectName(QString::fromUtf8("led5"));

        gridLayout_4->addWidget(led5, 1, 5, 1, 1);

        led4 = new QPushButton(groupBox_2);
        led4->setObjectName(QString::fromUtf8("led4"));

        gridLayout_4->addWidget(led4, 1, 4, 1, 1);

        led3 = new QPushButton(groupBox_2);
        led3->setObjectName(QString::fromUtf8("led3"));

        gridLayout_4->addWidget(led3, 1, 3, 1, 1);

        led2 = new QPushButton(groupBox_2);
        led2->setObjectName(QString::fromUtf8("led2"));

        gridLayout_4->addWidget(led2, 1, 2, 1, 1);

        led0 = new QPushButton(groupBox_2);
        led0->setObjectName(QString::fromUtf8("led0"));

        gridLayout_4->addWidget(led0, 1, 0, 1, 1);

        led1 = new QPushButton(groupBox_2);
        led1->setObjectName(QString::fromUtf8("led1"));

        gridLayout_4->addWidget(led1, 1, 1, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 1, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_5 = new QGridLayout(tab_3);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        groupBox_3 = new QGroupBox(tab_3);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_7 = new QGridLayout(groupBox_3);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        ldrDial = new QDial(groupBox_3);
        ldrDial->setObjectName(QString::fromUtf8("ldrDial"));

        gridLayout_7->addWidget(ldrDial, 0, 0, 2, 1);

        ldrNum = new QLCDNumber(groupBox_3);
        ldrNum->setObjectName(QString::fromUtf8("ldrNum"));
        ldrNum->setMinimumSize(QSize(64, 23));
        ldrNum->setMaximumSize(QSize(64, 23));

        gridLayout_7->addWidget(ldrNum, 0, 1, 1, 1);

        ldrBar = new QProgressBar(groupBox_3);
        ldrBar->setObjectName(QString::fromUtf8("ldrBar"));
        ldrBar->setValue(24);
        ldrBar->setTextVisible(false);

        gridLayout_7->addWidget(ldrBar, 1, 1, 1, 1);


        gridLayout_5->addWidget(groupBox_3, 1, 0, 1, 1);

        groupBox_4 = new QGroupBox(tab_3);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_6 = new QGridLayout(groupBox_4);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        potDial = new QDial(groupBox_4);
        potDial->setObjectName(QString::fromUtf8("potDial"));

        gridLayout_6->addWidget(potDial, 0, 0, 2, 1);

        potNum = new QLCDNumber(groupBox_4);
        potNum->setObjectName(QString::fromUtf8("potNum"));
        potNum->setMinimumSize(QSize(64, 23));
        potNum->setMaximumSize(QSize(64, 23));

        gridLayout_6->addWidget(potNum, 0, 1, 1, 1);

        potBar = new QProgressBar(groupBox_4);
        potBar->setObjectName(QString::fromUtf8("potBar"));
        potBar->setValue(24);
        potBar->setTextVisible(false);

        gridLayout_6->addWidget(potBar, 1, 1, 1, 1);


        gridLayout_5->addWidget(groupBox_4, 1, 1, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_8 = new QGridLayout(tab_4);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        groupBox_5 = new QGroupBox(tab_4);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_9 = new QGridLayout(groupBox_5);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        pa0Num = new QLCDNumber(groupBox_5);
        pa0Num->setObjectName(QString::fromUtf8("pa0Num"));
        pa0Num->setMinimumSize(QSize(64, 23));
        pa0Num->setMaximumSize(QSize(64, 23));

        gridLayout_9->addWidget(pa0Num, 0, 0, 1, 1);

        pa0Bar = new QProgressBar(groupBox_5);
        pa0Bar->setObjectName(QString::fromUtf8("pa0Bar"));
        pa0Bar->setValue(24);
        pa0Bar->setTextVisible(false);

        gridLayout_9->addWidget(pa0Bar, 1, 0, 1, 1);


        gridLayout_8->addWidget(groupBox_5, 0, 0, 1, 1);

        groupBox_6 = new QGroupBox(tab_4);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout_10 = new QGridLayout(groupBox_6);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        pa1Num = new QLCDNumber(groupBox_6);
        pa1Num->setObjectName(QString::fromUtf8("pa1Num"));
        pa1Num->setMinimumSize(QSize(64, 23));
        pa1Num->setMaximumSize(QSize(64, 23));

        gridLayout_10->addWidget(pa1Num, 0, 0, 1, 1);

        pa1Bar = new QProgressBar(groupBox_6);
        pa1Bar->setObjectName(QString::fromUtf8("pa1Bar"));
        pa1Bar->setValue(24);
        pa1Bar->setTextVisible(false);

        gridLayout_10->addWidget(pa1Bar, 1, 0, 1, 1);


        gridLayout_8->addWidget(groupBox_6, 0, 1, 1, 1);

        groupBox_7 = new QGroupBox(tab_4);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        gridLayout_11 = new QGridLayout(groupBox_7);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        pa2Num = new QLCDNumber(groupBox_7);
        pa2Num->setObjectName(QString::fromUtf8("pa2Num"));
        pa2Num->setMinimumSize(QSize(64, 23));
        pa2Num->setMaximumSize(QSize(64, 23));

        gridLayout_11->addWidget(pa2Num, 0, 0, 1, 1);

        pa2Bar = new QProgressBar(groupBox_7);
        pa2Bar->setObjectName(QString::fromUtf8("pa2Bar"));
        pa2Bar->setValue(24);
        pa2Bar->setTextVisible(false);

        gridLayout_11->addWidget(pa2Bar, 1, 0, 1, 1);


        gridLayout_8->addWidget(groupBox_7, 0, 2, 1, 1);

        groupBox_8 = new QGroupBox(tab_4);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        gridLayout_14 = new QGridLayout(groupBox_8);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        pa3Bar = new QProgressBar(groupBox_8);
        pa3Bar->setObjectName(QString::fromUtf8("pa3Bar"));
        pa3Bar->setValue(24);
        pa3Bar->setTextVisible(false);

        gridLayout_14->addWidget(pa3Bar, 1, 0, 2, 2);

        pa3Num = new QLCDNumber(groupBox_8);
        pa3Num->setObjectName(QString::fromUtf8("pa3Num"));
        pa3Num->setMinimumSize(QSize(64, 23));
        pa3Num->setMaximumSize(QSize(64, 23));

        gridLayout_14->addWidget(pa3Num, 0, 0, 1, 1);


        gridLayout_8->addWidget(groupBox_8, 1, 0, 1, 1);

        groupBox_9 = new QGroupBox(tab_4);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        gridLayout_13 = new QGridLayout(groupBox_9);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        pa4Bar = new QProgressBar(groupBox_9);
        pa4Bar->setObjectName(QString::fromUtf8("pa4Bar"));
        pa4Bar->setValue(24);
        pa4Bar->setTextVisible(false);

        gridLayout_13->addWidget(pa4Bar, 1, 0, 1, 1);

        pa4Num = new QLCDNumber(groupBox_9);
        pa4Num->setObjectName(QString::fromUtf8("pa4Num"));
        pa4Num->setMinimumSize(QSize(64, 23));
        pa4Num->setMaximumSize(QSize(64, 23));

        gridLayout_13->addWidget(pa4Num, 0, 0, 1, 1);


        gridLayout_8->addWidget(groupBox_9, 1, 1, 1, 1);

        groupBox_10 = new QGroupBox(tab_4);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        gridLayout_12 = new QGridLayout(groupBox_10);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        pa7Bar = new QProgressBar(groupBox_10);
        pa7Bar->setObjectName(QString::fromUtf8("pa7Bar"));
        pa7Bar->setValue(24);
        pa7Bar->setTextVisible(false);

        gridLayout_12->addWidget(pa7Bar, 1, 0, 1, 1);

        pa7Num = new QLCDNumber(groupBox_10);
        pa7Num->setObjectName(QString::fromUtf8("pa7Num"));
        pa7Num->setMinimumSize(QSize(64, 23));
        pa7Num->setMaximumSize(QSize(64, 23));

        gridLayout_12->addWidget(pa7Num, 0, 0, 1, 1);


        gridLayout_8->addWidget(groupBox_10, 1, 2, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        gridLayout_15 = new QGridLayout(tab_5);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        textBrowser = new QTextBrowser(tab_5);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        gridLayout_15->addWidget(textBrowser, 0, 1, 1, 1);

        label_13 = new QLabel(tab_5);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMinimumSize(QSize(16, 16));
        label_13->setMaximumSize(QSize(16, 16));

        gridLayout_15->addWidget(label_13, 5, 1, 1, 1);

        label_12 = new QLabel(tab_5);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMinimumSize(QSize(31, 16));
        label_12->setMaximumSize(QSize(31, 16));

        gridLayout_15->addWidget(label_12, 5, 2, 1, 1);

        label_14 = new QLabel(tab_5);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMinimumSize(QSize(31, 16));
        label_14->setMaximumSize(QSize(31, 16));

        gridLayout_15->addWidget(label_14, 0, 0, 1, 1);

        tabWidget->addTab(tab_5, QString());

        gridLayout_16->addWidget(tabWidget, 1, 0, 1, 3);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(221, 31));
        label->setMaximumSize(QSize(221, 31));

        gridLayout_16->addWidget(label, 0, 1, 1, 1);

        gui_1Class->setCentralWidget(centralwidget);
        menubar = new QMenuBar(gui_1Class);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 810, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        gui_1Class->setMenuBar(menubar);
        statusbar = new QStatusBar(gui_1Class);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        gui_1Class->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addSeparator();
        menuFile->addSeparator();
        menuFile->addAction(actionAbout);

        retranslateUi(gui_1Class);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(gui_1Class);
    } // setupUi

    void retranslateUi(QMainWindow *gui_1Class)
    {
        gui_1Class->setWindowTitle(QApplication::translate("gui_1Class", "OUSB Control", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("gui_1Class", "Save", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("gui_1Class", "Quit", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("gui_1Class", "About", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        label_2->setText(QApplication::translate("gui_1Class", "0", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("gui_1Class", "1", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("gui_1Class", "2", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("gui_1Class", "3", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("gui_1Class", "4", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("gui_1Class", "5", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("gui_1Class", "6", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("gui_1Class", "7", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("gui_1Class", "ON", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("gui_1Class", "OFF", 0, QApplication::UnicodeUTF8));
        sendToLed->setText(QApplication::translate("gui_1Class", "Send To LED", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("gui_1Class", "Switches", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QString());
        led7->setText(QApplication::translate("gui_1Class", "7", 0, QApplication::UnicodeUTF8));
        led6->setText(QApplication::translate("gui_1Class", "6", 0, QApplication::UnicodeUTF8));
        led5->setText(QApplication::translate("gui_1Class", "5", 0, QApplication::UnicodeUTF8));
        led4->setText(QApplication::translate("gui_1Class", "4", 0, QApplication::UnicodeUTF8));
        led3->setText(QApplication::translate("gui_1Class", "3", 0, QApplication::UnicodeUTF8));
        led2->setText(QApplication::translate("gui_1Class", "2", 0, QApplication::UnicodeUTF8));
        led0->setText(QApplication::translate("gui_1Class", "0", 0, QApplication::UnicodeUTF8));
        led1->setText(QApplication::translate("gui_1Class", "1", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("gui_1Class", "LEDs", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("gui_1Class", "LDR", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("gui_1Class", "Pot", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("gui_1Class", "LDR And Pot", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("gui_1Class", "PA0", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("gui_1Class", "PA1", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("gui_1Class", "PA2", 0, QApplication::UnicodeUTF8));
        groupBox_8->setTitle(QApplication::translate("gui_1Class", "PA3", 0, QApplication::UnicodeUTF8));
        groupBox_9->setTitle(QApplication::translate("gui_1Class", "PA4", 0, QApplication::UnicodeUTF8));
        groupBox_10->setTitle(QApplication::translate("gui_1Class", "PA7", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("gui_1Class", "Spare Ports", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("gui_1Class", "0", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("gui_1Class", "1023", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("gui_1Class", "Time", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("gui_1Class", "Pot Chart", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("gui_1Class", "Student Name: Hayden Warmington\n"
"Student Number: S3486075", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("gui_1Class", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class gui_1Class: public Ui_gui_1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_1_H
