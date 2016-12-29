/********************************************************************************
** Form generated from reading UI file 'OptionsPage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSPAGE_H
#define UI_OPTIONSPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

namespace DumpState {

class Ui_OptionsPage
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *instructionsBeforeIP;
    QLabel *label_2;
    QSpinBox *instructionsAfterIP;
    QCheckBox *colorizeOutput;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *OptionsPage)
    {
        if (OptionsPage->objectName().isEmpty())
            OptionsPage->setObjectName(QString::fromUtf8("OptionsPage"));
        OptionsPage->resize(443, 259);
        gridLayout = new QGridLayout(OptionsPage);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(OptionsPage);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        instructionsBeforeIP = new QSpinBox(OptionsPage);
        instructionsBeforeIP->setObjectName(QString::fromUtf8("instructionsBeforeIP"));
        instructionsBeforeIP->setEnabled(false);

        gridLayout->addWidget(instructionsBeforeIP, 0, 1, 1, 1);

        label_2 = new QLabel(OptionsPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        instructionsAfterIP = new QSpinBox(OptionsPage);
        instructionsAfterIP->setObjectName(QString::fromUtf8("instructionsAfterIP"));
        instructionsAfterIP->setValue(6);

        gridLayout->addWidget(instructionsAfterIP, 1, 1, 1, 1);

        colorizeOutput = new QCheckBox(OptionsPage);
        colorizeOutput->setObjectName(QString::fromUtf8("colorizeOutput"));

        gridLayout->addWidget(colorizeOutput, 2, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 190, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);


        retranslateUi(OptionsPage);

        QMetaObject::connectSlotsByName(OptionsPage);
    } // setupUi

    void retranslateUi(QWidget *OptionsPage)
    {
        OptionsPage->setWindowTitle(QApplication::translate("DumpState::OptionsPage", "Dump State Plugin", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DumpState::OptionsPage", "Instructions To Display Before Instruction Pointer:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DumpState::OptionsPage", "Instructions To Display After Instruction Pointer:", 0, QApplication::UnicodeUTF8));
        colorizeOutput->setText(QApplication::translate("DumpState::OptionsPage", "Colorize Output", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace DumpState

namespace DumpState {
namespace Ui {
    class OptionsPage: public Ui_OptionsPage {};
} // namespace Ui
} // namespace DumpState

#endif // UI_OPTIONSPAGE_H
