/********************************************************************************
** Form generated from reading UI file 'DialogInputValue.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGINPUTVALUE_H
#define UI_DIALOGINPUTVALUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogInputValue
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *label;
    QLineEdit *hexInput;
    QLabel *label_2;
    QLineEdit *signedInput;
    QLabel *label_3;
    QLineEdit *unsignedInput;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogInputValue)
    {
        if (DialogInputValue->objectName().isEmpty())
            DialogInputValue->setObjectName(QStringLiteral("DialogInputValue"));
        DialogInputValue->resize(228, 198);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DialogInputValue->sizePolicy().hasHeightForWidth());
        DialogInputValue->setSizePolicy(sizePolicy);
        DialogInputValue->setModal(true);
        vboxLayout = new QVBoxLayout(DialogInputValue);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        label = new QLabel(DialogInputValue);
        label->setObjectName(QStringLiteral("label"));

        vboxLayout->addWidget(label);

        hexInput = new QLineEdit(DialogInputValue);
        hexInput->setObjectName(QStringLiteral("hexInput"));

        vboxLayout->addWidget(hexInput);

        label_2 = new QLabel(DialogInputValue);
        label_2->setObjectName(QStringLiteral("label_2"));

        vboxLayout->addWidget(label_2);

        signedInput = new QLineEdit(DialogInputValue);
        signedInput->setObjectName(QStringLiteral("signedInput"));

        vboxLayout->addWidget(signedInput);

        label_3 = new QLabel(DialogInputValue);
        label_3->setObjectName(QStringLiteral("label_3"));

        vboxLayout->addWidget(label_3);

        unsignedInput = new QLineEdit(DialogInputValue);
        unsignedInput->setObjectName(QStringLiteral("unsignedInput"));

        vboxLayout->addWidget(unsignedInput);

        buttonBox = new QDialogButtonBox(DialogInputValue);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(hexInput);
        label_2->setBuddy(signedInput);
        label_3->setBuddy(unsignedInput);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(hexInput, signedInput);
        QWidget::setTabOrder(signedInput, unsignedInput);

        retranslateUi(DialogInputValue);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogInputValue, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogInputValue, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogInputValue);
    } // setupUi

    void retranslateUi(QDialog *DialogInputValue)
    {
        DialogInputValue->setWindowTitle(QApplication::translate("DialogInputValue", "Input Value", 0));
        label->setText(QApplication::translate("DialogInputValue", "Hexdecimal", 0));
        label_2->setText(QApplication::translate("DialogInputValue", "Signed", 0));
        label_3->setText(QApplication::translate("DialogInputValue", "Unsigned", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogInputValue: public Ui_DialogInputValue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGINPUTVALUE_H
