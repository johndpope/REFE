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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace BinaryInfo {

class Ui_OptionsPage
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QLineEdit *txtDebugDir;
    QToolButton *btnDebugDir;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *OptionsPage)
    {
        if (OptionsPage->objectName().isEmpty())
            OptionsPage->setObjectName(QStringLiteral("OptionsPage"));
        OptionsPage->resize(334, 323);
        verticalLayout = new QVBoxLayout(OptionsPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        checkBox = new QCheckBox(OptionsPage);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        verticalLayout->addWidget(checkBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_7 = new QLabel(OptionsPage);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout->addWidget(label_7);

        txtDebugDir = new QLineEdit(OptionsPage);
        txtDebugDir->setObjectName(QStringLiteral("txtDebugDir"));

        horizontalLayout->addWidget(txtDebugDir);

        btnDebugDir = new QToolButton(OptionsPage);
        btnDebugDir->setObjectName(QStringLiteral("btnDebugDir"));

        horizontalLayout->addWidget(btnDebugDir);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 262, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

#ifndef QT_NO_SHORTCUT
        label_7->setBuddy(txtDebugDir);
#endif // QT_NO_SHORTCUT

        retranslateUi(OptionsPage);

        QMetaObject::connectSlotsByName(OptionsPage);
    } // setupUi

    void retranslateUi(QWidget *OptionsPage)
    {
        OptionsPage->setWindowTitle(QApplication::translate("BinaryInfo::OptionsPage", "BinaryInfo Plugin", 0));
        checkBox->setText(QApplication::translate("BinaryInfo::OptionsPage", "Demangle auto-generated symbols", 0));
        label_7->setText(QApplication::translate("BinaryInfo::OptionsPage", "Debug Info Directory", 0));
        btnDebugDir->setText(QApplication::translate("BinaryInfo::OptionsPage", "...", 0));
    } // retranslateUi

};

} // namespace BinaryInfo

namespace BinaryInfo {
namespace Ui {
    class OptionsPage: public Ui_OptionsPage {};
} // namespace Ui
} // namespace BinaryInfo

#endif // UI_OPTIONSPAGE_H
