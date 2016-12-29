/********************************************************************************
** Form generated from reading UI file 'OptionsPage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSPAGE_H
#define UI_OPTIONSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

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
            OptionsPage->setObjectName(QStringLiteral("OptionsPage"));
        OptionsPage->resize(443, 259);
        gridLayout = new QGridLayout(OptionsPage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(OptionsPage);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        instructionsBeforeIP = new QSpinBox(OptionsPage);
        instructionsBeforeIP->setObjectName(QStringLiteral("instructionsBeforeIP"));
        instructionsBeforeIP->setEnabled(false);

        gridLayout->addWidget(instructionsBeforeIP, 0, 1, 1, 1);

        label_2 = new QLabel(OptionsPage);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        instructionsAfterIP = new QSpinBox(OptionsPage);
        instructionsAfterIP->setObjectName(QStringLiteral("instructionsAfterIP"));
        instructionsAfterIP->setValue(6);

        gridLayout->addWidget(instructionsAfterIP, 1, 1, 1, 1);

        colorizeOutput = new QCheckBox(OptionsPage);
        colorizeOutput->setObjectName(QStringLiteral("colorizeOutput"));

        gridLayout->addWidget(colorizeOutput, 2, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 190, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);


        retranslateUi(OptionsPage);

        QMetaObject::connectSlotsByName(OptionsPage);
    } // setupUi

    void retranslateUi(QWidget *OptionsPage)
    {
        OptionsPage->setWindowTitle(QApplication::translate("DumpState::OptionsPage", "Dump State Plugin", 0));
        label->setText(QApplication::translate("DumpState::OptionsPage", "Instructions To Display Before Instruction Pointer:", 0));
        label_2->setText(QApplication::translate("DumpState::OptionsPage", "Instructions To Display After Instruction Pointer:", 0));
        colorizeOutput->setText(QApplication::translate("DumpState::OptionsPage", "Colorize Output", 0));
    } // retranslateUi

};

} // namespace DumpState

namespace DumpState {
namespace Ui {
    class OptionsPage: public Ui_OptionsPage {};
} // namespace Ui
} // namespace DumpState

#endif // UI_OPTIONSPAGE_H
