/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *show_res;
    QPushButton *pushButton_seven;
    QPushButton *pushButton_eight;
    QPushButton *pushButton_nine;
    QPushButton *pushButton_four;
    QPushButton *pushButton_five;
    QPushButton *pushButton_one;
    QPushButton *pushButton_two;
    QPushButton *pushButton_six;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_del;
    QPushButton *pushButton_multi;
    QPushButton *pushButton_three;
    QPushButton *pushButton_zero;
    QPushButton *pushButton_point;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_div;
    QPushButton *pushButton_ac;
    QPushButton *pushButton_res;
    QPushButton *pushButton_tan;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_atan;
    QPushButton *pushButton_asin;
    QPushButton *pushButton_acos;
    QPushButton *pushButton_log;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_ln;
    QPushButton *pushButton_close_prnt;
    QPushButton *pushButton_mod;
    QPushButton *pushButton_open_prnt;
    QPushButton *pushButton_pow;
    QPushButton *pushButton_x;
    QPushButton *pushButton_graph;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QLabel *show_res_4;
    QLabel *show_res_5;
    QLabel *show_res_7;
    QLabel *show_res_8;
    QLineEdit *lineEdit_x;
    QLineEdit *lineEdit_x__min_graph;
    QLineEdit *lineEdit_y_min_graph;
    QLineEdit *lineEdit_y_max_graph;
    QLineEdit *lineEdit_x_max_graph;
    QLabel *show_res_6;
    QLabel *show_res_9;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(794, 380);
        QFont font;
        font.setFamilies({QString::fromUtf8("Terminal")});
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(28, 28, 28);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        show_res = new QLabel(centralwidget);
        show_res->setObjectName(QString::fromUtf8("show_res"));
        show_res->setGeometry(QRect(10, 10, 341, 61));
        QFont font1;
        font1.setPointSize(20);
        show_res->setFont(font1);
        show_res->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"  background-color : white;\n"
"  border-radius: 15px;\n"
"}"));
        pushButton_seven = new QPushButton(centralwidget);
        pushButton_seven->setObjectName(QString::fromUtf8("pushButton_seven"));
        pushButton_seven->setGeometry(QRect(10, 80, 61, 61));
        QFont font2;
        font2.setPointSize(16);
        pushButton_seven->setFont(font2);
        pushButton_seven->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    background-color: rgb(49, 60, 72);\n"
"    color: white;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #313c48, stop: 1 #293133);\n"
"    padding-left: 3px;\n"
"    padding-top: 3px;\n"
"    border: 1px solid darkgray;\n"
"}"));
        pushButton_eight = new QPushButton(centralwidget);
        pushButton_eight->setObjectName(QString::fromUtf8("pushButton_eight"));
        pushButton_eight->setGeometry(QRect(80, 80, 61, 61));
        pushButton_eight->setFont(font2);
        pushButton_eight->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    background-color: rgb(49, 60, 72);\n"
"    color: white;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #313c48, stop: 1 #293133);\n"
"    padding-left: 3px;\n"
"    padding-top: 3px;\n"
"    border: 1px solid darkgray;\n"
"}"));
        pushButton_nine = new QPushButton(centralwidget);
        pushButton_nine->setObjectName(QString::fromUtf8("pushButton_nine"));
        pushButton_nine->setGeometry(QRect(150, 80, 61, 61));
        pushButton_nine->setFont(font2);
        pushButton_nine->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    background-color: rgb(49, 60, 72);\n"
"    color: white;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #313c48, stop: 1 #293133);\n"
"    padding-left: 3px;\n"
"    padding-top: 3px;\n"
"    border: 1px solid darkgray;\n"
"}"));
        pushButton_four = new QPushButton(centralwidget);
        pushButton_four->setObjectName(QString::fromUtf8("pushButton_four"));
        pushButton_four->setGeometry(QRect(10, 150, 61, 61));
        pushButton_four->setFont(font2);
        pushButton_four->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    background-color: rgb(49, 60, 72);\n"
"    color: white;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #313c48, stop: 1 #293133);\n"
"    padding-left: 3px;\n"
"    padding-top: 3px;\n"
"    border: 1px solid darkgray;\n"
"}"));
        pushButton_five = new QPushButton(centralwidget);
        pushButton_five->setObjectName(QString::fromUtf8("pushButton_five"));
        pushButton_five->setGeometry(QRect(80, 150, 61, 61));
        pushButton_five->setFont(font2);
        pushButton_five->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    background-color: rgb(49, 60, 72);\n"
"    color: white;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #313c48, stop: 1 #293133);\n"
"    padding-left: 3px;\n"
"    padding-top: 3px;\n"
"    border: 1px solid darkgray;\n"
"}"));
        pushButton_one = new QPushButton(centralwidget);
        pushButton_one->setObjectName(QString::fromUtf8("pushButton_one"));
        pushButton_one->setGeometry(QRect(10, 220, 61, 61));
        pushButton_one->setFont(font2);
        pushButton_one->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    background-color: rgb(49, 60, 72);\n"
"    color: white;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"/* \320\241\321\202\320\270\320\273\321\214 \320\264\320\273\321\217 \320\272\320\275\320\276\320\277\320\272\320\270 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #313c48, stop: 1 #293133);\n"
"    /* \320\224\320\276\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\321\214\320\275\321\213\320\265 \321\201\321\202\320\270\320\273\320\270, \321\207\321\202\320\276\320\261\321\213 \321\201\320\276\320\267\320\264\320\260\321\202\321\214 \320\262\320\270\320\267\321\203\320\260\320\273\321\214\320\275\321\213\320\271 \321\215\321\204\321\204\320\265\320\272\321\202 \320\275\320\260\320\266\320\260\321\202\320\270\321\217 */\n"
"    padding-left: 3px;\n"
"    paddi"
                        "ng-top: 3px;\n"
"    border: 1px solid darkgray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #313c48, stop: 1 #293133);\n"
"}"));
        pushButton_two = new QPushButton(centralwidget);
        pushButton_two->setObjectName(QString::fromUtf8("pushButton_two"));
        pushButton_two->setGeometry(QRect(80, 220, 61, 61));
        pushButton_two->setFont(font2);
        pushButton_two->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    background-color: rgb(49, 60, 72);\n"
"    color: white;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #313c48, stop: 1 #293133);\n"
"    padding-left: 3px;\n"
"    padding-top: 3px;\n"
"    border: 1px solid darkgray;\n"
"}"));
        pushButton_six = new QPushButton(centralwidget);
        pushButton_six->setObjectName(QString::fromUtf8("pushButton_six"));
        pushButton_six->setGeometry(QRect(150, 150, 61, 61));
        pushButton_six->setFont(font2);
        pushButton_six->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    background-color: rgb(49, 60, 72);\n"
"    color: white;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #313c48, stop: 1 #293133);\n"
"    padding-left: 3px;\n"
"    padding-top: 3px;\n"
"    border: 1px solid darkgray;\n"
"}"));
        pushButton_plus = new QPushButton(centralwidget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        pushButton_plus->setGeometry(QRect(220, 220, 61, 61));
        pushButton_plus->setFont(font2);
        pushButton_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    background-color: rgb(49, 60, 72);\n"
"    color: white;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #313c48, stop: 1 #293133);\n"
"    padding-left: 3px;\n"
"    padding-top: 3px;\n"
"    border: 1px solid darkgray;\n"
"}"));
        pushButton_del = new QPushButton(centralwidget);
        pushButton_del->setObjectName(QString::fromUtf8("pushButton_del"));
        pushButton_del->setGeometry(QRect(290, 80, 61, 61));
        pushButton_del->setFont(font2);
        pushButton_del->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px; /* \320\227\320\260\320\264\320\260\320\271\321\202\320\265 \321\200\320\260\320\264\320\270\321\203\321\201 \320\267\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"    background-color: rgb(255, 151, 57);\n"
"    color: white;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF9739, stop: 1 #EA8000);\n"
"    padding-left: 3px;\n"
"    padding-top: 3px;\n"
"    border: 1px solid darkgray;\n"
"}"));
        pushButton_multi = new QPushButton(centralwidget);
        pushButton_multi->setObjectName(QString::fromUtf8("pushButton_multi"));
        pushButton_multi->setGeometry(QRect(220, 150, 61, 61));
        pushButton_multi->setFont(font2);
        pushButton_multi->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    background-color: rgb(49, 60, 72);\n"
"    color: white;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #313c48, stop: 1 #293133);\n"
"    padding-left: 3px;\n"
"    padding-top: 3px;\n"
"    border: 1px solid darkgray;\n"
"}"));
        pushButton_three = new QPushButton(centralwidget);
        pushButton_three->setObjectName(QString::fromUtf8("pushButton_three"));
        pushButton_three->setGeometry(QRect(150, 220, 61, 61));
        pushButton_three->setFont(font2);
        pushButton_three->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    background-color: rgb(49, 60, 72);\n"
"    color: white;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #313c48, stop: 1 #293133);\n"
"    padding-left: 3px;\n"
"    padding-top: 3px;\n"
"    border: 1px solid darkgray;\n"
"}"));
        pushButton_zero = new QPushButton(centralwidget);
        pushButton_zero->setObjectName(QString::fromUtf8("pushButton_zero"));
        pushButton_zero->setGeometry(QRect(80, 290, 61, 61));
        pushButton_zero->setFont(font2);
        pushButton_zero->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    background-color: rgb(49, 60, 72);\n"
"    color: white;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #313c48, stop: 1 #293133);\n"
"    padding-left: 3px;\n"
"    padding-top: 3px;\n"
"    border: 1px solid darkgray;\n"
"}"));
        pushButton_point = new QPushButton(centralwidget);
        pushButton_point->setObjectName(QString::fromUtf8("pushButton_point"));
        pushButton_point->setGeometry(QRect(10, 290, 61, 61));
        pushButton_point->setFont(font2);
        pushButton_point->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    background-color: rgb(49, 60, 72);\n"
"    color: white;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #313c48, stop: 1 #293133);\n"
"    padding-left: 3px;\n"
"    padding-top: 3px;\n"
"    border: 1px solid darkgray;\n"
"}"));
        pushButton_minus = new QPushButton(centralwidget);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        pushButton_minus->setGeometry(QRect(290, 220, 61, 61));
        pushButton_minus->setFont(font2);
        pushButton_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    background-color: rgb(49, 60, 72);\n"
"    color: white;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #313c48, stop: 1 #293133);\n"
"    padding-left: 3px;\n"
"    padding-top: 3px;\n"
"    border: 1px solid darkgray;\n"
"}"));
        pushButton_div = new QPushButton(centralwidget);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
        pushButton_div->setGeometry(QRect(290, 150, 61, 61));
        pushButton_div->setFont(font2);
        pushButton_div->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    background-color: rgb(49, 60, 72);\n"
"    color: white;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #313c48, stop: 1 #293133);\n"
"    padding-left: 3px;\n"
"    padding-top: 3px;\n"
"    border: 1px solid darkgray;\n"
"}"));
        pushButton_ac = new QPushButton(centralwidget);
        pushButton_ac->setObjectName(QString::fromUtf8("pushButton_ac"));
        pushButton_ac->setGeometry(QRect(220, 80, 61, 61));
        pushButton_ac->setFont(font2);
        pushButton_ac->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px; /* \320\227\320\260\320\264\320\260\320\271\321\202\320\265 \321\200\320\260\320\264\320\270\321\203\321\201 \320\267\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"    background-color: rgb(255, 151, 57);\n"
"    color: white;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF9739, stop: 1 #EA8000);\n"
"    padding-left: 3px;\n"
"    padding-top: 3px;\n"
"    border: 1px solid darkgray;\n"
"}"));
        pushButton_res = new QPushButton(centralwidget);
        pushButton_res->setObjectName(QString::fromUtf8("pushButton_res"));
        pushButton_res->setGeometry(QRect(220, 290, 131, 61));
        pushButton_res->setFont(font2);
        pushButton_res->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    background-color: rgb(49, 60, 72);\n"
"    color: white;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #313c48, stop: 1 #293133);\n"
"    padding-left: 3px;\n"
"    padding-top: 3px;\n"
"    border: 1px solid darkgray;\n"
"}"));
        pushButton_tan = new QPushButton(centralwidget);
        pushButton_tan->setObjectName(QString::fromUtf8("pushButton_tan"));
        pushButton_tan->setGeometry(QRect(510, 10, 61, 61));
        pushButton_tan->setFont(font2);
        pushButton_tan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    background-color: rgb(102, 102, 102);\n"
"    color: white;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #6e6e6e, stop: 1 #585858);\n"
"    padding-left: 3px;\n"
"    padding-top: 3px;\n"
"    border: 1px solid darkgray;\n"
"}"));
        pushButton_cos = new QPushButton(centralwidget);
        pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
        pushButton_cos->setGeometry(QRect(440, 10, 61, 61));
        pushButton_cos->setFont(font2);
        pushButton_cos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    background-color: rgb(102, 102, 102);\n"
"    color: white;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #6e6e6e, stop: 1 #585858);\n"
"    padding-left: 3px;\n"
"    padding-top: 3px;\n"
"    border: 1px solid darkgray;\n"
"}"));
        pushButton_sin = new QPushButton(centralwidget);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
        pushButton_sin->setGeometry(QRect(370, 10, 61, 61));
        pushButton_sin->setFont(font2);
        pushButton_sin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    background-color: rgb(102, 102, 102);\n"
"    color: white;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #6e6e6e, stop: 1 #585858);\n"
"    padding-left: 3px;\n"
"    padding-top: 3px;\n"
"    border: 1px solid darkgray;\n"
"}"));
        pushButton_atan = new QPushButton(centralwidget);
        pushButton_atan->setObjectName(QString::fromUtf8("pushButton_atan"));
        pushButton_atan->setGeometry(QRect(510, 80, 61, 61));
        pushButton_atan->setFont(font2);
        pushButton_atan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    background-color: rgb(102, 102, 102);\n"
"    color: white;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #6e6e6e, stop: 1 #585858);\n"
"    padding-left: 3px;\n"
"    padding-top: 3px;\n"
"    border: 1px solid darkgray;\n"
"}"));
        pushButton_asin = new QPushButton(centralwidget);
        pushButton_asin->setObjectName(QString::fromUtf8("pushButton_asin"));
        pushButton_asin->setGeometry(QRect(440, 80, 61, 61));
        pushButton_asin->setFont(font2);
        pushButton_asin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    background-color: rgb(102, 102, 102);\n"
"    color: white;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #6e6e6e, stop: 1 #585858);\n"
"    padding-left: 3px;\n"
"    padding-top: 3px;\n"
"    border: 1px solid darkgray;\n"
"}"));
        pushButton_acos = new QPushButton(centralwidget);
        pushButton_acos->setObjectName(QString::fromUtf8("pushButton_acos"));
        pushButton_acos->setGeometry(QRect(370, 80, 61, 61));
        pushButton_acos->setFont(font2);
        pushButton_acos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    background-color: rgb(102, 102, 102);\n"
"    color: white;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #6e6e6e, stop: 1 #585858);\n"
"    padding-left: 3px;\n"
"    padding-top: 3px;\n"
"    border: 1px solid darkgray;\n"
"}"));
        pushButton_log = new QPushButton(centralwidget);
        pushButton_log->setObjectName(QString::fromUtf8("pushButton_log"));
        pushButton_log->setGeometry(QRect(510, 150, 61, 61));
        pushButton_log->setFont(font2);
        pushButton_log->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    background-color: rgb(102, 102, 102);\n"
"    color: white;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #6e6e6e, stop: 1 #585858);\n"
"    padding-left: 3px;\n"
"    padding-top: 3px;\n"
"    border: 1px solid darkgray;\n"
"}"));
        pushButton_sqrt = new QPushButton(centralwidget);
        pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));
        pushButton_sqrt->setGeometry(QRect(370, 150, 61, 61));
        pushButton_sqrt->setFont(font2);
        pushButton_sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    background-color: rgb(102, 102, 102);\n"
"    color: white;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #6e6e6e, stop: 1 #585858);\n"
"    padding-left: 3px;\n"
"    padding-top: 3px;\n"
"    border: 1px solid darkgray;\n"
"}"));
        pushButton_ln = new QPushButton(centralwidget);
        pushButton_ln->setObjectName(QString::fromUtf8("pushButton_ln"));
        pushButton_ln->setGeometry(QRect(440, 150, 61, 61));
        pushButton_ln->setFont(font2);
        pushButton_ln->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    background-color: rgb(102, 102, 102);\n"
"    color: white;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #6e6e6e, stop: 1 #585858);\n"
"    padding-left: 3px;\n"
"    padding-top: 3px;\n"
"    border: 1px solid darkgray;\n"
"}"));
        pushButton_close_prnt = new QPushButton(centralwidget);
        pushButton_close_prnt->setObjectName(QString::fromUtf8("pushButton_close_prnt"));
        pushButton_close_prnt->setGeometry(QRect(510, 220, 61, 61));
        pushButton_close_prnt->setFont(font2);
        pushButton_close_prnt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    background-color: rgb(102, 102, 102);\n"
"    color: white;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #6e6e6e, stop: 1 #585858);\n"
"    padding-left: 3px;\n"
"    padding-top: 3px;\n"
"    border: 1px solid darkgray;\n"
"}"));
        pushButton_mod = new QPushButton(centralwidget);
        pushButton_mod->setObjectName(QString::fromUtf8("pushButton_mod"));
        pushButton_mod->setGeometry(QRect(370, 220, 61, 61));
        pushButton_mod->setFont(font2);
        pushButton_mod->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    background-color: rgb(102, 102, 102);\n"
"    color: white;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #6e6e6e, stop: 1 #585858);\n"
"    padding-left: 3px;\n"
"    padding-top: 3px;\n"
"    border: 1px solid darkgray;\n"
"}"));
        pushButton_open_prnt = new QPushButton(centralwidget);
        pushButton_open_prnt->setObjectName(QString::fromUtf8("pushButton_open_prnt"));
        pushButton_open_prnt->setGeometry(QRect(440, 220, 61, 61));
        pushButton_open_prnt->setFont(font2);
        pushButton_open_prnt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    background-color: rgb(102, 102, 102);\n"
"    color: white;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #6e6e6e, stop: 1 #585858);\n"
"    padding-left: 3px;\n"
"    padding-top: 3px;\n"
"    border: 1px solid darkgray;\n"
"}"));
        pushButton_pow = new QPushButton(centralwidget);
        pushButton_pow->setObjectName(QString::fromUtf8("pushButton_pow"));
        pushButton_pow->setGeometry(QRect(150, 290, 61, 61));
        pushButton_pow->setFont(font2);
        pushButton_pow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    background-color: rgb(49, 60, 72);\n"
"    color: white;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #313c48, stop: 1 #293133);\n"
"    padding-left: 3px;\n"
"    padding-top: 3px;\n"
"    border: 1px solid darkgray;\n"
"}"));
        pushButton_x = new QPushButton(centralwidget);
        pushButton_x->setObjectName(QString::fromUtf8("pushButton_x"));
        pushButton_x->setGeometry(QRect(510, 290, 61, 61));
        pushButton_x->setFont(font2);
        pushButton_x->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;\n"
"    background-color: rgb(102, 102, 102);\n"
"    color: white;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #6e6e6e, stop: 1 #585858);\n"
"    padding-left: 3px;\n"
"    padding-top: 3px;\n"
"    border: 1px solid darkgray;\n"
"}"));
        pushButton_graph = new QPushButton(centralwidget);
        pushButton_graph->setObjectName(QString::fromUtf8("pushButton_graph"));
        pushButton_graph->setGeometry(QRect(590, 80, 191, 61));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Terminal")});
        font3.setPointSize(13);
        pushButton_graph->setFont(font3);
        pushButton_graph->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(68, 148, 74);\n"
"    color: white;\n"
"    border: 1px solid grey;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #6e6e6e, stop: 1 #585858);\n"
"    padding-left: 3px;\n"
"    padding-top: 3px;\n"
"    border: 1px solid darkgray;\n"
"}"));
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(356, -10, 10, 371));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(575, -10, 10, 371));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 357, 801, 2));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(792, 0, 2, 371));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(centralwidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(-16, 1, 811, 2));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(centralwidget);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(0, 0, 2, 371));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);
        show_res_4 = new QLabel(centralwidget);
        show_res_4->setObjectName(QString::fromUtf8("show_res_4"));
        show_res_4->setGeometry(QRect(590, 150, 71, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Terminal")});
        font4.setPointSize(20);
        show_res_4->setFont(font4);
        show_res_4->setStyleSheet(QString::fromUtf8(" background-color : white;\n"
""));
        show_res_5 = new QLabel(centralwidget);
        show_res_5->setObjectName(QString::fromUtf8("show_res_5"));
        show_res_5->setGeometry(QRect(590, 204, 71, 41));
        show_res_5->setFont(font4);
        show_res_5->setStyleSheet(QString::fromUtf8(" background-color : white;\n"
""));
        show_res_7 = new QLabel(centralwidget);
        show_res_7->setObjectName(QString::fromUtf8("show_res_7"));
        show_res_7->setGeometry(QRect(590, 10, 191, 61));
        show_res_7->setFont(font4);
        show_res_7->setStyleSheet(QString::fromUtf8("\n"
"  background-color : white;\n"
""));
        show_res_8 = new QLabel(centralwidget);
        show_res_8->setObjectName(QString::fromUtf8("show_res_8"));
        show_res_8->setGeometry(QRect(370, 290, 61, 61));
        show_res_8->setFont(font4);
        show_res_8->setStyleSheet(QString::fromUtf8(" background-color : white;\n"
""));
        lineEdit_x = new QLineEdit(centralwidget);
        lineEdit_x->setObjectName(QString::fromUtf8("lineEdit_x"));
        lineEdit_x->setGeometry(QRect(440, 290, 61, 61));
        lineEdit_x->setFont(font2);
        lineEdit_x->setStyleSheet(QString::fromUtf8("  background-color : white;\n"
""));
        lineEdit_x__min_graph = new QLineEdit(centralwidget);
        lineEdit_x__min_graph->setObjectName(QString::fromUtf8("lineEdit_x__min_graph"));
        lineEdit_x__min_graph->setGeometry(QRect(670, 150, 111, 41));
        lineEdit_x__min_graph->setFont(font2);
        lineEdit_x__min_graph->setStyleSheet(QString::fromUtf8("  background-color : white;\n"
""));
        lineEdit_y_min_graph = new QLineEdit(centralwidget);
        lineEdit_y_min_graph->setObjectName(QString::fromUtf8("lineEdit_y_min_graph"));
        lineEdit_y_min_graph->setGeometry(QRect(670, 204, 111, 41));
        lineEdit_y_min_graph->setFont(font2);
        lineEdit_y_min_graph->setStyleSheet(QString::fromUtf8("  background-color : white;\n"
""));
        lineEdit_y_max_graph = new QLineEdit(centralwidget);
        lineEdit_y_max_graph->setObjectName(QString::fromUtf8("lineEdit_y_max_graph"));
        lineEdit_y_max_graph->setGeometry(QRect(670, 310, 111, 41));
        lineEdit_y_max_graph->setFont(font2);
        lineEdit_y_max_graph->setStyleSheet(QString::fromUtf8("  background-color : white;\n"
""));
        lineEdit_x_max_graph = new QLineEdit(centralwidget);
        lineEdit_x_max_graph->setObjectName(QString::fromUtf8("lineEdit_x_max_graph"));
        lineEdit_x_max_graph->setGeometry(QRect(670, 257, 111, 41));
        lineEdit_x_max_graph->setFont(font2);
        lineEdit_x_max_graph->setStyleSheet(QString::fromUtf8("  background-color : white;\n"
""));
        show_res_6 = new QLabel(centralwidget);
        show_res_6->setObjectName(QString::fromUtf8("show_res_6"));
        show_res_6->setGeometry(QRect(590, 257, 71, 41));
        show_res_6->setFont(font4);
        show_res_6->setStyleSheet(QString::fromUtf8(" background-color : white;\n"
""));
        show_res_9 = new QLabel(centralwidget);
        show_res_9->setObjectName(QString::fromUtf8("show_res_9"));
        show_res_9->setGeometry(QRect(590, 310, 71, 41));
        show_res_9->setFont(font4);
        show_res_9->setStyleSheet(QString::fromUtf8(" background-color : white;\n"
""));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        show_res->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_seven->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_eight->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_nine->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_four->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_five->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_one->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_two->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_six->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_del->setText(QCoreApplication::translate("MainWindow", "DEL", nullptr));
        pushButton_multi->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_three->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_zero->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_point->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_ac->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButton_res->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        pushButton_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        pushButton_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        pushButton_atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        pushButton_asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        pushButton_acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        pushButton_log->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        pushButton_sqrt->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        pushButton_ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        pushButton_close_prnt->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        pushButton_mod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        pushButton_open_prnt->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        pushButton_pow->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        pushButton_x->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        pushButton_graph->setText(QCoreApplication::translate("MainWindow", "GRAPH", nullptr));
        show_res_4->setText(QCoreApplication::translate("MainWindow", " Xmin", nullptr));
        show_res_5->setText(QCoreApplication::translate("MainWindow", " Ymin", nullptr));
        show_res_7->setText(QCoreApplication::translate("MainWindow", "  Plotting Window", nullptr));
        show_res_8->setText(QCoreApplication::translate("MainWindow", "  x =", nullptr));
        lineEdit_x->setPlaceholderText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lineEdit_x__min_graph->setPlaceholderText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lineEdit_y_min_graph->setPlaceholderText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lineEdit_y_max_graph->setPlaceholderText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lineEdit_x_max_graph->setPlaceholderText(QCoreApplication::translate("MainWindow", "0", nullptr));
        show_res_6->setText(QCoreApplication::translate("MainWindow", " Xmax", nullptr));
        show_res_9->setText(QCoreApplication::translate("MainWindow", " Ymax", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
