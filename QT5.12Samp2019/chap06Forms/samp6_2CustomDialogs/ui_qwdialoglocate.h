/********************************************************************************
** Form generated from reading UI file 'qwdialoglocate.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWDIALOGLOCATE_H
#define UI_QWDIALOGLOCATE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QWDialogLocate
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *spinBoxColumn;
    QCheckBox *chkBoxColumn;
    QLabel *label_2;
    QSpinBox *spinBoxRow;
    QCheckBox *chkBoxRow;
    QLabel *label_3;
    QLineEdit *edtCaption;
    QVBoxLayout *verticalLayout;
    QPushButton *btnSetText;
    QPushButton *btnClose;

    void setupUi(QDialog *QWDialogLocate)
    {
        if (QWDialogLocate->objectName().isEmpty())
            QWDialogLocate->setObjectName(QString::fromUtf8("QWDialogLocate"));
        QWDialogLocate->resize(332, 142);
        QFont font;
        font.setPointSize(10);
        QWDialogLocate->setFont(font);
        horizontalLayout = new QHBoxLayout(QWDialogLocate);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(QWDialogLocate);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinBoxColumn = new QSpinBox(groupBox);
        spinBoxColumn->setObjectName(QString::fromUtf8("spinBoxColumn"));
        spinBoxColumn->setMinimum(0);

        gridLayout->addWidget(spinBoxColumn, 0, 1, 1, 1);

        chkBoxColumn = new QCheckBox(groupBox);
        chkBoxColumn->setObjectName(QString::fromUtf8("chkBoxColumn"));

        gridLayout->addWidget(chkBoxColumn, 0, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spinBoxRow = new QSpinBox(groupBox);
        spinBoxRow->setObjectName(QString::fromUtf8("spinBoxRow"));

        gridLayout->addWidget(spinBoxRow, 1, 1, 1, 1);

        chkBoxRow = new QCheckBox(groupBox);
        chkBoxRow->setObjectName(QString::fromUtf8("chkBoxRow"));

        gridLayout->addWidget(chkBoxRow, 1, 2, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        edtCaption = new QLineEdit(groupBox);
        edtCaption->setObjectName(QString::fromUtf8("edtCaption"));

        gridLayout->addWidget(edtCaption, 2, 1, 1, 2);


        horizontalLayout->addWidget(groupBox);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btnSetText = new QPushButton(QWDialogLocate);
        btnSetText->setObjectName(QString::fromUtf8("btnSetText"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/506.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnSetText->setIcon(icon);

        verticalLayout->addWidget(btnSetText);

        btnClose = new QPushButton(QWDialogLocate);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnClose->setIcon(icon1);

        verticalLayout->addWidget(btnClose);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(QWDialogLocate);
        QObject::connect(btnClose, SIGNAL(clicked()), QWDialogLocate, SLOT(close()));

        QMetaObject::connectSlotsByName(QWDialogLocate);
    } // setupUi

    void retranslateUi(QDialog *QWDialogLocate)
    {
        QWDialogLocate->setWindowTitle(QApplication::translate("QWDialogLocate", "\345\215\225\345\205\203\346\240\274\345\256\232\344\275\215\344\270\216\346\226\207\345\255\227\350\256\276\347\275\256", nullptr));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("QWDialogLocate", "\345\210\227  \345\217\267", nullptr));
        chkBoxColumn->setText(QApplication::translate("QWDialogLocate", "\345\210\227\345\242\236", nullptr));
        label_2->setText(QApplication::translate("QWDialogLocate", "\350\241\214  \345\217\267", nullptr));
        chkBoxRow->setText(QApplication::translate("QWDialogLocate", "\350\241\214\345\242\236", nullptr));
        label_3->setText(QApplication::translate("QWDialogLocate", "\350\256\276\345\256\232\346\226\207\345\255\227", nullptr));
        btnSetText->setText(QApplication::translate("QWDialogLocate", "\350\256\276\345\256\232\346\226\207\345\255\227", nullptr));
        btnClose->setText(QApplication::translate("QWDialogLocate", "\345\205\263  \351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QWDialogLocate: public Ui_QWDialogLocate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWDIALOGLOCATE_H
