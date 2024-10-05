/********************************************************************************
** Form generated from reading UI file 'mainvidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINVIDGET_H
#define UI_MAINVIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainVidget
{
public:
    QGroupBox *groupBox;
    QPushButton *gqmc;
    QLineEdit *ssk;
    QPushButton *ss;
    QListWidget *jieguo;
    QLabel *label;
    QTextBrowser *geci;
    QListWidget *jilu;
    QLabel *label_2;
    QLabel *label_3;
    QGroupBox *groupBox_2;
    QPushButton *syq;
    QPushButton *bf;
    QPushButton *xyq;
    QPushButton *dqxh;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *about;
    QPushButton *pf;
    QPushButton *gb;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QSlider *jindutiao;
    QLabel *stime;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QSlider *yinliang;
    QLabel *yinlaingzhi;

    void setupUi(QWidget *MainVidget)
    {
        if (MainVidget->objectName().isEmpty())
            MainVidget->setObjectName("MainVidget");
        MainVidget->resize(1020, 680);
        groupBox = new QGroupBox(MainVidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 50, 981, 71));
        gqmc = new QPushButton(groupBox);
        gqmc->setObjectName("gqmc");
        gqmc->setGeometry(QRect(40, 10, 151, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("\351\230\277\351\207\214\345\267\264\345\267\264\346\231\256\346\203\240\344\275\223 H")});
        font.setPointSize(12);
        font.setBold(false);
        gqmc->setFont(font);
        gqmc->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
"background-color:rgba(255,255,255,50);"));
        ssk = new QLineEdit(groupBox);
        ssk->setObjectName("ssk");
        ssk->setGeometry(QRect(200, 10, 591, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font1.setPointSize(18);
        ssk->setFont(font1);
        ss = new QPushButton(groupBox);
        ss->setObjectName("ss");
        ss->setGeometry(QRect(800, 10, 151, 51));
        ss->setFont(font);
        ss->setCursor(QCursor(Qt::PointingHandCursor));
        ss->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
"background-color:rgba(255,255,255,50);"));
        jieguo = new QListWidget(MainVidget);
        jieguo->setObjectName("jieguo");
        jieguo->setGeometry(QRect(30, 180, 256, 311));
        jieguo->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,60);\n"
""));
        label = new QLabel(MainVidget);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 140, 111, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\351\230\277\351\207\214\345\267\264\345\267\264\346\231\256\346\203\240\344\275\223 H")});
        font2.setPointSize(14);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
""));
        geci = new QTextBrowser(MainVidget);
        geci->setObjectName("geci");
        geci->setGeometry(QRect(300, 180, 421, 311));
        geci->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,60);\n"
""));
        jilu = new QListWidget(MainVidget);
        jilu->setObjectName("jilu");
        jilu->setGeometry(QRect(730, 180, 256, 311));
        jilu->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,60);\n"
""));
        label_2 = new QLabel(MainVidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(490, 140, 111, 31));
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
""));
        label_3 = new QLabel(MainVidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(820, 140, 111, 31));
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
""));
        groupBox_2 = new QGroupBox(MainVidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(20, 130, 981, 391));
        syq = new QPushButton(MainVidget);
        syq->setObjectName("syq");
        syq->setGeometry(QRect(311, 597, 100, 40));
        syq->setFont(font);
        syq->setCursor(QCursor(Qt::PointingHandCursor));
        syq->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
"background-color:rgba(255,255,255,50);"));
        syq->setIconSize(QSize(36, 30));
        bf = new QPushButton(MainVidget);
        bf->setObjectName("bf");
        bf->setGeometry(QRect(446, 597, 100, 40));
        bf->setFont(font);
        bf->setCursor(QCursor(Qt::PointingHandCursor));
        bf->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
"background-color:rgba(255,255,255,50);"));
        bf->setIconSize(QSize(36, 30));
        xyq = new QPushButton(MainVidget);
        xyq->setObjectName("xyq");
        xyq->setGeometry(QRect(582, 597, 100, 40));
        xyq->setFont(font);
        xyq->setCursor(QCursor(Qt::PointingHandCursor));
        xyq->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
"background-color:rgba(255,255,255,50);"));
        xyq->setIconSize(QSize(36, 30));
        dqxh = new QPushButton(MainVidget);
        dqxh->setObjectName("dqxh");
        dqxh->setGeometry(QRect(50, 600, 100, 40));
        dqxh->setFont(font);
        dqxh->setCursor(QCursor(Qt::PointingHandCursor));
        dqxh->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
"background-color:rgba(255,255,255,50);"));
        layoutWidget = new QWidget(MainVidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(850, 0, 160, 46));
        layoutWidget->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        about = new QPushButton(layoutWidget);
        about->setObjectName("about");
        about->setCursor(QCursor(Qt::PointingHandCursor));
        about->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-radius:0px;\n"
"background-repeat:no-repeat;\n"
"border:none;\n"
"background-position:center center;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgba(230,0,0,0,5);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color:rgba(95,95,95,100);\n"
"border-color:rgba(255,255,255,30);\n"
"border-style:inset;\n"
"color:rgba(0,0,0,100);\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/img/gy.png"), QSize(), QIcon::Normal, QIcon::Off);
        about->setIcon(icon);
        about->setIconSize(QSize(35, 35));

        horizontalLayout->addWidget(about);

        pf = new QPushButton(layoutWidget);
        pf->setObjectName("pf");
        pf->setCursor(QCursor(Qt::PointingHandCursor));
        pf->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-radius:0px;\n"
"background-repeat:no-repeat;\n"
"border:none;\n"
"background-position:center center;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgba(230,0,0,5);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgba(95,95,95,100);\n"
"border-color:rgba(255,255,255,30);\n"
"border-style:inset;\n"
"color:rgba(0,0,0,100);\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/img/pf.png"), QSize(), QIcon::Normal, QIcon::Off);
        pf->setIcon(icon1);
        pf->setIconSize(QSize(35, 35));

        horizontalLayout->addWidget(pf);

        gb = new QPushButton(layoutWidget);
        gb->setObjectName("gb");
        gb->setCursor(QCursor(Qt::PointingHandCursor));
        gb->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-radius:0px;\n"
"background-repeat:no-repeat;\n"
"border:none;\n"
"background-position:center center;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgba(230,0,0,5);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgba(95,95,95,100);\n"
"border-color:rgba(255,255,255,30);\n"
"border-style:inset;\n"
"color:rgba(0,0,0,100);\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/img/gb.png"), QSize(), QIcon::Normal, QIcon::Off);
        gb->setIcon(icon2);
        gb->setIconSize(QSize(35, 35));

        horizontalLayout->addWidget(gb);

        layoutWidget1 = new QWidget(MainVidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(50, 550, 931, 29));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        jindutiao = new QSlider(layoutWidget1);
        jindutiao->setObjectName("jindutiao");
        jindutiao->setCursor(QCursor(Qt::PointingHandCursor));
        jindutiao->setMaximum(100);
        jindutiao->setSingleStep(1);
        jindutiao->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout_2->addWidget(jindutiao);

        stime = new QLabel(layoutWidget1);
        stime->setObjectName("stime");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\351\230\277\351\207\214\345\267\264\345\267\264\346\231\256\346\203\240\344\275\223 H")});
        font3.setPointSize(12);
        stime->setFont(font3);
        stime->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
""));

        horizontalLayout_2->addWidget(stime);

        layoutWidget2 = new QWidget(MainVidget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(788, 600, 191, 29));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        yinliang = new QSlider(layoutWidget2);
        yinliang->setObjectName("yinliang");
        yinliang->setCursor(QCursor(Qt::PointingHandCursor));
        yinliang->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout_3->addWidget(yinliang);

        yinlaingzhi = new QLabel(layoutWidget2);
        yinlaingzhi->setObjectName("yinlaingzhi");
        yinlaingzhi->setFont(font3);
        yinlaingzhi->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255);\n"
""));

        horizontalLayout_3->addWidget(yinlaingzhi);

        layoutWidget2->raise();
        layoutWidget2->raise();
        layoutWidget2->raise();
        groupBox_2->raise();
        groupBox->raise();
        jieguo->raise();
        label->raise();
        geci->raise();
        jilu->raise();
        label_2->raise();
        label_3->raise();
        syq->raise();
        bf->raise();
        xyq->raise();
        dqxh->raise();

        retranslateUi(MainVidget);

        QMetaObject::connectSlotsByName(MainVidget);
    } // setupUi

    void retranslateUi(QWidget *MainVidget)
    {
        MainVidget->setWindowTitle(QCoreApplication::translate("MainVidget", "MainVidget", nullptr));
        groupBox->setTitle(QString());
        gqmc->setText(QCoreApplication::translate("MainVidget", "\346\220\234\347\264\242\346\255\214\346\233\262\345\220\215\347\247\260", nullptr));
        ssk->setText(QCoreApplication::translate("MainVidget", " \351\276\231\345\215\267\351\243\216", nullptr));
        ss->setText(QCoreApplication::translate("MainVidget", "\346\220\234\347\264\242", nullptr));
        label->setText(QCoreApplication::translate("MainVidget", "\346\220\234\347\264\242\347\273\223\346\236\234", nullptr));
        label_2->setText(QCoreApplication::translate("MainVidget", "\346\255\214\350\257\215", nullptr));
        label_3->setText(QCoreApplication::translate("MainVidget", "\345\220\254\346\255\214\350\256\260\345\275\225", nullptr));
        groupBox_2->setTitle(QString());
        syq->setText(QCoreApplication::translate("MainVidget", "\344\270\212\344\270\200\346\233\262", nullptr));
        bf->setText(QCoreApplication::translate("MainVidget", "\346\222\255\346\224\276", nullptr));
        xyq->setText(QCoreApplication::translate("MainVidget", "\344\270\213\344\270\200\346\233\262", nullptr));
#if QT_CONFIG(tooltip)
        dqxh->setToolTip(QCoreApplication::translate("MainVidget", "\345\276\252\347\216\257\346\222\255\346\224\276", nullptr));
#endif // QT_CONFIG(tooltip)
        dqxh->setText(QCoreApplication::translate("MainVidget", "\345\215\225\346\233\262\345\276\252\347\216\257", nullptr));
        layoutWidget->setStyleSheet(QCoreApplication::translate("MainVidget", "QPushButton\n"
"{\n"
"border-radius:0px;\n"
"background-repeat:no-repeat;\n"
"border:none;\n"
"background-position:center center;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgba(230,0,0,5);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgba(95,95,95,100);\n"
"border-color:rgba(255,255,255,30);\n"
"border-style:inset;\n"
"color:rgba(0,0,0,100);\n"
"}", nullptr));
        about->setText(QString());
        pf->setText(QString());
        gb->setText(QString());
        stime->setText(QCoreApplication::translate("MainVidget", "00:00", nullptr));
        yinlaingzhi->setText(QCoreApplication::translate("MainVidget", "000", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainVidget: public Ui_MainVidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINVIDGET_H
