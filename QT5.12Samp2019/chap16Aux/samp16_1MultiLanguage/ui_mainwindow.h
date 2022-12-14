/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actTab_SetSize;
    QAction *actTab_SetHeader;
    QAction *actFile_Quit;
    QAction *actTab_Locate;
    QAction *actLang_CN;
    QAction *actLang_EN;
    QWidget *centralWidget;
    QTableView *tableView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(459, 337);
        actTab_SetSize = new QAction(MainWindow);
        actTab_SetSize->setObjectName(QString::fromUtf8("actTab_SetSize"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/230.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actTab_SetSize->setIcon(icon);
        actTab_SetHeader = new QAction(MainWindow);
        actTab_SetHeader->setObjectName(QString::fromUtf8("actTab_SetHeader"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/516.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actTab_SetHeader->setIcon(icon1);
        actFile_Quit = new QAction(MainWindow);
        actFile_Quit->setObjectName(QString::fromUtf8("actFile_Quit"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actFile_Quit->setIcon(icon2);
        actTab_Locate = new QAction(MainWindow);
        actTab_Locate->setObjectName(QString::fromUtf8("actTab_Locate"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/304.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actTab_Locate->setIcon(icon3);
        actLang_CN = new QAction(MainWindow);
        actLang_CN->setObjectName(QString::fromUtf8("actLang_CN"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/images/CN.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actLang_CN->setIcon(icon4);
        actLang_EN = new QAction(MainWindow);
        actLang_EN->setObjectName(QString::fromUtf8("actLang_EN"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/images/timg2.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actLang_EN->setIcon(icon5);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(50, 10, 351, 211));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 459, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actTab_SetSize);
        mainToolBar->addAction(actTab_SetHeader);
        mainToolBar->addAction(actTab_Locate);
        mainToolBar->addAction(actFile_Quit);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actLang_CN);
        mainToolBar->addAction(actLang_EN);

        retranslateUi(MainWindow);
        QObject::connect(actFile_Quit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\350\207\252\345\256\232\344\271\211\345\257\271\350\257\235\346\241\206\345\217\212\345\205\266\350\260\203\347\224\250", nullptr));
        actTab_SetSize->setText(QApplication::translate("MainWindow", "\350\241\250\346\240\274\345\244\247\345\260\217", nullptr));
#ifndef QT_NO_TOOLTIP
        actTab_SetSize->setToolTip(QApplication::translate("MainWindow", "\350\256\276\347\275\256\350\241\250\346\240\274\350\241\214\346\225\260\345\210\227\346\225\260", nullptr));
#endif // QT_NO_TOOLTIP
        actTab_SetHeader->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\350\241\250\345\244\264", nullptr));
#ifndef QT_NO_TOOLTIP
        actTab_SetHeader->setToolTip(QApplication::translate("MainWindow", "\350\256\276\347\275\256\350\241\250\345\244\264\346\240\207\351\242\230", nullptr));
#endif // QT_NO_TOOLTIP
        actFile_Quit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#ifndef QT_NO_TOOLTIP
        actFile_Quit->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272\346\234\254\350\275\257\344\273\266", nullptr));
#endif // QT_NO_TOOLTIP
        actTab_Locate->setText(QApplication::translate("MainWindow", "\345\256\232\344\275\215\345\215\225\345\205\203\346\240\274", nullptr));
#ifndef QT_NO_TOOLTIP
        actTab_Locate->setToolTip(QApplication::translate("MainWindow", "\345\256\232\344\275\215\345\210\260\346\237\220\344\270\252\345\215\225\345\205\203\346\240\274", nullptr));
#endif // QT_NO_TOOLTIP
        actLang_CN->setText(QApplication::translate("MainWindow", "\344\270\255\346\226\207", nullptr));
        actLang_EN->setText(QApplication::translate("MainWindow", "English", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
