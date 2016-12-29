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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace CheckVersion {

class Ui_OptionsPage
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *OptionsPage)
    {
        if (OptionsPage->objectName().isEmpty())
            OptionsPage->setObjectName(QStringLiteral("OptionsPage"));
        OptionsPage->resize(400, 300);
        verticalLayout = new QVBoxLayout(OptionsPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        checkBox = new QCheckBox(OptionsPage);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        verticalLayout->addWidget(checkBox);

        verticalSpacer = new QSpacerItem(20, 262, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(OptionsPage);

        QMetaObject::connectSlotsByName(OptionsPage);
    } // setupUi

    void retranslateUi(QWidget *OptionsPage)
    {
        OptionsPage->setWindowTitle(QApplication::translate("CheckVersion::OptionsPage", "Check Version Plugin", 0));
        checkBox->setText(QApplication::translate("CheckVersion::OptionsPage", "Check for new version on startup", 0));
    } // retranslateUi

};

} // namespace CheckVersion

namespace CheckVersion {
namespace Ui {
    class OptionsPage: public Ui_OptionsPage {};
} // namespace Ui
} // namespace CheckVersion

#endif // UI_OPTIONSPAGE_H
