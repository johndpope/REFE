/********************************************************************************
** Form generated from reading UI file 'DialogInputBinaryString.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGINPUTBINARYSTRING_H
#define UI_DIALOGINPUTBINARYSTRING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include "BinaryString.h"

QT_BEGIN_NAMESPACE

class Ui_DialogInputBinaryString
{
public:
    QVBoxLayout *vboxLayout;
    BinaryString *binaryString;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogInputBinaryString)
    {
        if (DialogInputBinaryString->objectName().isEmpty())
            DialogInputBinaryString->setObjectName(QStringLiteral("DialogInputBinaryString"));
        DialogInputBinaryString->resize(243, 165);
        vboxLayout = new QVBoxLayout(DialogInputBinaryString);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        binaryString = new BinaryString(DialogInputBinaryString);
        binaryString->setObjectName(QStringLiteral("binaryString"));

        vboxLayout->addWidget(binaryString);

        buttonBox = new QDialogButtonBox(DialogInputBinaryString);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(DialogInputBinaryString);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogInputBinaryString, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogInputBinaryString, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogInputBinaryString);
    } // setupUi

    void retranslateUi(QDialog *DialogInputBinaryString)
    {
        DialogInputBinaryString->setWindowTitle(QApplication::translate("DialogInputBinaryString", "Input Binary String", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogInputBinaryString: public Ui_DialogInputBinaryString {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGINPUTBINARYSTRING_H
