/********************************************************************************
** Form generated from reading UI file 'DialogAssembler.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGASSEMBLER_H
#define UI_DIALOGASSEMBLER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

namespace Assembler {

class Ui_DialogAssembler
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *address;
    QComboBox *assembly;
    QCheckBox *keepSize;
    QCheckBox *fillWithNOPs;
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *DialogAssembler)
    {
        if (DialogAssembler->objectName().isEmpty())
            DialogAssembler->setObjectName(QString::fromUtf8("DialogAssembler"));
        DialogAssembler->resize(423, 108);
        gridLayout = new QGridLayout(DialogAssembler);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        address = new QLabel(DialogAssembler);
        address->setObjectName(QString::fromUtf8("address"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(address->sizePolicy().hasHeightForWidth());
        address->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(address);

        assembly = new QComboBox(DialogAssembler);
        assembly->setObjectName(QString::fromUtf8("assembly"));
        assembly->setEditable(true);

        horizontalLayout->addWidget(assembly);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 2);

        keepSize = new QCheckBox(DialogAssembler);
        keepSize->setObjectName(QString::fromUtf8("keepSize"));
        keepSize->setEnabled(true);
        keepSize->setChecked(true);

        gridLayout->addWidget(keepSize, 2, 0, 1, 1);

        fillWithNOPs = new QCheckBox(DialogAssembler);
        fillWithNOPs->setObjectName(QString::fromUtf8("fillWithNOPs"));
        fillWithNOPs->setChecked(true);

        gridLayout->addWidget(fillWithNOPs, 3, 0, 1, 1);

        buttonBox = new QDialogButtonBox(DialogAssembler);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 1, 1, 1);

        label = new QLabel(DialogAssembler);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 2);


        retranslateUi(DialogAssembler);
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogAssembler, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogAssembler);
    } // setupUi

    void retranslateUi(QDialog *DialogAssembler)
    {
        DialogAssembler->setWindowTitle(QApplication::translate("Assembler::DialogAssembler", "Assembler", 0, QApplication::UnicodeUTF8));
        address->setText(QApplication::translate("Assembler::DialogAssembler", "00000000", 0, QApplication::UnicodeUTF8));
        keepSize->setText(QApplication::translate("Assembler::DialogAssembler", "&Keep Size", 0, QApplication::UnicodeUTF8));
        fillWithNOPs->setText(QApplication::translate("Assembler::DialogAssembler", "Fill rest with &NOPs", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Assembler::DialogAssembler", "Assembler: ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace Assembler

namespace Assembler {
namespace Ui {
    class DialogAssembler: public Ui_DialogAssembler {};
} // namespace Ui
} // namespace Assembler

#endif // UI_DIALOGASSEMBLER_H
