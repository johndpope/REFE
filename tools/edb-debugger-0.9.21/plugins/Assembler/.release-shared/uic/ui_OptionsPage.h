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
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

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
            OptionsPage->setObjectName(QString::fromUtf8("OptionsPage"));
        OptionsPage->resize(532, 232);
        verticalLayout = new QVBoxLayout(OptionsPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(OptionsPage);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        assemblerName = new QComboBox(OptionsPage);
        assemblerName->setObjectName(QString::fromUtf8("assemblerName"));
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
        OptionsPage->setWindowTitle(QApplication::translate("Assembler::OptionsPage", "Assembly Plugin", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Assembler::OptionsPage", "Assembler Helper Application", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace Assembler

namespace Assembler {
namespace Ui {
    class OptionsPage: public Ui_OptionsPage {};
} // namespace Ui
} // namespace Assembler

#endif // UI_OPTIONSPAGE_H
