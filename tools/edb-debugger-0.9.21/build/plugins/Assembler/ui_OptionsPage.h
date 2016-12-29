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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace Assembler {

class Ui_OptionsPage
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *assemblerName;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *OptionsPage)
    {
        if (OptionsPage->objectName().isEmpty())
            OptionsPage->setObjectName(QStringLiteral("OptionsPage"));
        OptionsPage->resize(532, 232);
        verticalLayout = new QVBoxLayout(OptionsPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(OptionsPage);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        assemblerName = new QComboBox(OptionsPage);
        assemblerName->setObjectName(QStringLiteral("assemblerName"));
        assemblerName->setEditable(false);

        horizontalLayout->addWidget(assemblerName);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 191, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(OptionsPage);

        QMetaObject::connectSlotsByName(OptionsPage);
    } // setupUi

    void retranslateUi(QWidget *OptionsPage)
    {
        OptionsPage->setWindowTitle(QApplication::translate("Assembler::OptionsPage", "Assembly Plugin", 0));
        label->setText(QApplication::translate("Assembler::OptionsPage", "Assembler Helper Application", 0));
    } // retranslateUi

};

} // namespace Assembler

namespace Assembler {
namespace Ui {
    class OptionsPage: public Ui_OptionsPage {};
} // namespace Ui
} // namespace Assembler

#endif // UI_OPTIONSPAGE_H
