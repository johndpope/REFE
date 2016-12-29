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
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

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
            OptionsPage->setObjectName(QString::fromUtf8("OptionsPage"));
        OptionsPage->resize(334, 323);
        verticalLayout = new QVBoxLayout(OptionsPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        checkBox = new QCheckBox(OptionsPage);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout->addWidget(checkBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_7 = new QLabel(OptionsPage);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout->addWidget(label_7);

        txtDebugDir = new QLineEdit(OptionsPage);
        txtDebugDir->setObjectName(QString::fromUtf8("txtDebugDir"));

        horizontalLayout->addWidget(txtDebugDir);

        btnDebugDir = new QToolButton(OptionsPage);
        btnDebugDir->setObjectName(QString::fromUtf8("btnDebugDir"));

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
        OptionsPage->setWindowTitle(QApplication::translate("BinaryInfo::OptionsPage", "BinaryInfo Plugin", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("BinaryInfo::OptionsPage", "Demangle auto-generated symbols", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("BinaryInfo::OptionsPage", "Debug Info Directory", 0, QApplication::UnicodeUTF8));
        btnDebugDir->setText(QApplication::translate("BinaryInfo::OptionsPage", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace BinaryInfo

namespace BinaryInfo {
namespace Ui {
    class OptionsPage: public Ui_OptionsPage {};
} // namespace Ui
} // namespace BinaryInfo

#endif // UI_OPTIONSPAGE_H
