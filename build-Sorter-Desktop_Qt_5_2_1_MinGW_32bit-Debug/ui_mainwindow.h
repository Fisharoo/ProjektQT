/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOtworz;
    QAction *actionNowy;
    QAction *actionZamknij;
    QAction *actionO_autorach;
    QAction *actionO_algorytmach;
    QWidget *centralWidget;
    QGridLayout *gridLayout_4;
    QTextBrowser *Sorted;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QPlainTextEdit *toSort;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLCDNumber *quickLCD;
    QPushButton *buttonQuick;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLCDNumber *bubbleLCD;
    QPushButton *buttonBubble;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QLCDNumber *shellLCD;
    QPushButton *buttonShell;
    QSpacerItem *verticalSpacer_3;
    QMenuBar *menuBar;
    QMenu *menu_Menu;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(797, 533);
        actionOtworz = new QAction(MainWindow);
        actionOtworz->setObjectName(QStringLiteral("actionOtworz"));
        QIcon icon;
        icon.addFile(QStringLiteral("E:/Studia/Semestr VI/qt programowanie/pw_lab5_ikony/lab1/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOtworz->setIcon(icon);
        actionNowy = new QAction(MainWindow);
        actionNowy->setObjectName(QStringLiteral("actionNowy"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("E:/Studia/Semestr VI/qt programowanie/pw_lab5_ikony/lab1/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNowy->setIcon(icon1);
        actionZamknij = new QAction(MainWindow);
        actionZamknij->setObjectName(QStringLiteral("actionZamknij"));
        actionO_autorach = new QAction(MainWindow);
        actionO_autorach->setObjectName(QStringLiteral("actionO_autorach"));
        actionO_algorytmach = new QAction(MainWindow);
        actionO_algorytmach->setObjectName(QStringLiteral("actionO_algorytmach"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_4 = new QGridLayout(centralWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        Sorted = new QTextBrowser(centralWidget);
        Sorted->setObjectName(QStringLiteral("Sorted"));

        gridLayout_4->addWidget(Sorted, 1, 1, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_4->addWidget(label_2, 0, 1, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFrameShape(QFrame::NoFrame);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_3, 0, 2, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        toSort = new QPlainTextEdit(centralWidget);
        toSort->setObjectName(QStringLiteral("toSort"));

        gridLayout_4->addWidget(toSort, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setAlignment(Qt::AlignCenter);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        quickLCD = new QLCDNumber(groupBox);
        quickLCD->setObjectName(QStringLiteral("quickLCD"));
        quickLCD->setSmallDecimalPoint(false);
        quickLCD->setDigitCount(12);
        quickLCD->setMode(QLCDNumber::Dec);

        gridLayout->addWidget(quickLCD, 0, 0, 1, 1);

        buttonQuick = new QPushButton(groupBox);
        buttonQuick->setObjectName(QStringLiteral("buttonQuick"));

        gridLayout->addWidget(buttonQuick, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setAlignment(Qt::AlignCenter);
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        bubbleLCD = new QLCDNumber(groupBox_2);
        bubbleLCD->setObjectName(QStringLiteral("bubbleLCD"));
        bubbleLCD->setDigitCount(12);

        gridLayout_2->addWidget(bubbleLCD, 1, 0, 1, 1);

        buttonBubble = new QPushButton(groupBox_2);
        buttonBubble->setObjectName(QStringLiteral("buttonBubble"));

        gridLayout_2->addWidget(buttonBubble, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(verticalSpacer_2, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setAlignment(Qt::AlignCenter);
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        shellLCD = new QLCDNumber(groupBox_3);
        shellLCD->setObjectName(QStringLiteral("shellLCD"));
        shellLCD->setFrameShadow(QFrame::Raised);
        shellLCD->setLineWidth(1);
        shellLCD->setDigitCount(12);

        gridLayout_3->addWidget(shellLCD, 1, 0, 1, 1);

        buttonShell = new QPushButton(groupBox_3);
        buttonShell->setObjectName(QStringLiteral("buttonShell"));

        gridLayout_3->addWidget(buttonShell, 2, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_3->addItem(verticalSpacer_3, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_3);


        gridLayout_4->addLayout(verticalLayout, 1, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 797, 26));
        menu_Menu = new QMenu(menuBar);
        menu_Menu->setObjectName(QStringLiteral("menu_Menu"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_Menu->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menu_Menu->addAction(actionNowy);
        menu_Menu->addAction(actionOtworz);
        menu_Menu->addAction(actionZamknij);
        menuHelp->addAction(actionO_autorach);
        menuHelp->addAction(actionO_algorytmach);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionOtworz->setText(QApplication::translate("MainWindow", "Otw\303\263rz", 0));
        actionOtworz->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        actionNowy->setText(QApplication::translate("MainWindow", "Nowy", 0));
        actionNowy->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
        actionZamknij->setText(QApplication::translate("MainWindow", "Zamknij", 0));
        actionZamknij->setShortcut(QApplication::translate("MainWindow", "Shift+Esc", 0));
        actionO_autorach->setText(QApplication::translate("MainWindow", "O autorach", 0));
        actionO_algorytmach->setText(QApplication::translate("MainWindow", "O algorytmach", 0));
        label_2->setText(QApplication::translate("MainWindow", "Posortowany ci\304\205g", 0));
        label_3->setText(QApplication::translate("MainWindow", "Opcje", 0));
        label->setText(QApplication::translate("MainWindow", "Ci\304\205g do sortowania", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "QuickSort", 0));
        buttonQuick->setText(QApplication::translate("MainWindow", "Rozpocznij", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "B\304\205belkowe", 0));
        buttonBubble->setText(QApplication::translate("MainWindow", "Rozpocznij", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Shell", 0));
        buttonShell->setText(QApplication::translate("MainWindow", "Rozpocznij", 0));
        menu_Menu->setTitle(QApplication::translate("MainWindow", "&Menu", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "&Pomoc", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
