/********************************************************************************
** Form generated from reading UI file 'qwmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWMAINWINDOW_H
#define UI_QWMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QWMainWindow
{
public:
    QAction *actDoc_New;
    QAction *actQuit;
    QAction *actDoc_Open;
    QAction *actFont;
    QAction *actCut;
    QAction *actCopy;
    QAction *actPaste;
    QAction *actCloseALL;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QWMainWindow)
    {
        if (QWMainWindow->objectName().isEmpty())
            QWMainWindow->setObjectName(QString::fromUtf8("QWMainWindow"));
        QWMainWindow->resize(559, 347);
        actDoc_New = new QAction(QWMainWindow);
        actDoc_New->setObjectName(QString::fromUtf8("actDoc_New"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/100.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actDoc_New->setIcon(icon);
        actQuit = new QAction(QWMainWindow);
        actQuit->setObjectName(QString::fromUtf8("actQuit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon1);
        actDoc_Open = new QAction(QWMainWindow);
        actDoc_Open->setObjectName(QString::fromUtf8("actDoc_Open"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/122.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actDoc_Open->setIcon(icon2);
        actFont = new QAction(QWMainWindow);
        actFont->setObjectName(QString::fromUtf8("actFont"));
        actFont->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/506.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actFont->setIcon(icon3);
        actCut = new QAction(QWMainWindow);
        actCut->setObjectName(QString::fromUtf8("actCut"));
        actCut->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/images/200.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actCut->setIcon(icon4);
        actCopy = new QAction(QWMainWindow);
        actCopy->setObjectName(QString::fromUtf8("actCopy"));
        actCopy->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/images/202.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actCopy->setIcon(icon5);
        actPaste = new QAction(QWMainWindow);
        actPaste->setObjectName(QString::fromUtf8("actPaste"));
        actPaste->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/images/204.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actPaste->setIcon(icon6);
        actCloseALL = new QAction(QWMainWindow);
        actCloseALL->setObjectName(QString::fromUtf8("actCloseALL"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/images/128.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actCloseALL->setIcon(icon7);
        centralWidget = new QWidget(QWMainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(70, 20, 351, 211));
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(true);
        QWMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QWMainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 559, 23));
        QWMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QWMainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setAutoFillBackground(false);
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        QWMainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QWMainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QWMainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actDoc_New);
        mainToolBar->addAction(actDoc_Open);
        mainToolBar->addAction(actCloseALL);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actCut);
        mainToolBar->addAction(actCopy);
        mainToolBar->addAction(actPaste);
        mainToolBar->addAction(actFont);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);

        retranslateUi(QWMainWindow);
        QObject::connect(actQuit, SIGNAL(triggered()), QWMainWindow, SLOT(close()));

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(QWMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *QWMainWindow)
    {
        QWMainWindow->setWindowTitle(QApplication::translate("QWMainWindow", "\345\244\232\351\241\265\347\256\241\347\220\206\347\232\204\345\244\232\347\252\227\345\217\243\345\272\224\347\224\250", nullptr));
        actDoc_New->setText(QApplication::translate("QWMainWindow", "\346\226\260\345\273\272\346\226\207\346\241\243", nullptr));
#ifndef QT_NO_TOOLTIP
        actDoc_New->setToolTip(QApplication::translate("QWMainWindow", "\346\226\260\345\273\272\346\226\207\346\241\243\347\252\227\345\217\243", nullptr));
#endif // QT_NO_TOOLTIP
        actQuit->setText(QApplication::translate("QWMainWindow", "\351\200\200\345\207\272", nullptr));
#ifndef QT_NO_TOOLTIP
        actQuit->setToolTip(QApplication::translate("QWMainWindow", "\351\200\200\345\207\272\346\234\254\347\263\273\347\273\237", nullptr));
#endif // QT_NO_TOOLTIP
        actDoc_Open->setText(QApplication::translate("QWMainWindow", "\346\211\223\345\274\200\346\226\207\346\241\243", nullptr));
#ifndef QT_NO_TOOLTIP
        actDoc_Open->setToolTip(QApplication::translate("QWMainWindow", "\346\211\223\345\274\200\346\226\207\346\241\243", nullptr));
#endif // QT_NO_TOOLTIP
        actFont->setText(QApplication::translate("QWMainWindow", "\345\255\227\344\275\223\350\256\276\347\275\256", nullptr));
#ifndef QT_NO_TOOLTIP
        actFont->setToolTip(QApplication::translate("QWMainWindow", "\345\255\227\344\275\223\350\256\276\347\275\256", nullptr));
#endif // QT_NO_TOOLTIP
        actCut->setText(QApplication::translate("QWMainWindow", "\345\211\252\345\210\207", nullptr));
#ifndef QT_NO_TOOLTIP
        actCut->setToolTip(QApplication::translate("QWMainWindow", "\345\211\252\345\210\207", nullptr));
#endif // QT_NO_TOOLTIP
        actCopy->setText(QApplication::translate("QWMainWindow", "\345\244\215\345\210\266", nullptr));
#ifndef QT_NO_TOOLTIP
        actCopy->setToolTip(QApplication::translate("QWMainWindow", "\345\244\215\345\210\266", nullptr));
#endif // QT_NO_TOOLTIP
        actPaste->setText(QApplication::translate("QWMainWindow", "\347\262\230\350\264\264", nullptr));
#ifndef QT_NO_TOOLTIP
        actPaste->setToolTip(QApplication::translate("QWMainWindow", "\347\262\230\350\264\264", nullptr));
#endif // QT_NO_TOOLTIP
        actCloseALL->setText(QApplication::translate("QWMainWindow", "\345\205\263\351\227\255\345\205\250\351\203\250", nullptr));
#ifndef QT_NO_TOOLTIP
        actCloseALL->setToolTip(QApplication::translate("QWMainWindow", "\345\205\263\351\227\255\345\205\250\351\203\250\347\252\227\345\217\243", nullptr));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class QWMainWindow: public Ui_QWMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWMAINWINDOW_H
