/********************************************************************************
** Form generated from reading UI file 'DialogArguments.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGARGUMENTS_H
#define UI_DIALOGARGUMENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogArguments
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QToolButton *btnAdd;
    QToolButton *btnDel;
    QSpacerItem *horizontalSpacer;
    QToolButton *btnUp;
    QToolButton *btnDown;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogArguments)
    {
        if (DialogArguments->objectName().isEmpty())
            DialogArguments->setObjectName(QStringLiteral("DialogArguments"));
        DialogArguments->resize(454, 250);
        verticalLayout = new QVBoxLayout(DialogArguments);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listWidget = new QListWidget(DialogArguments);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        QFont font;
        font.setFamily(QStringLiteral("Monospace"));
        listWidget->setFont(font);
        listWidget->setAlternatingRowColors(true);

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnAdd = new QToolButton(DialogArguments);
        btnAdd->setObjectName(QStringLiteral("btnAdd"));
        QIcon icon(QIcon::fromTheme(QStringLiteral("list-add")));
        btnAdd->setIcon(icon);

        horizontalLayout->addWidget(btnAdd);

        btnDel = new QToolButton(DialogArguments);
        btnDel->setObjectName(QStringLiteral("btnDel"));
        QIcon icon1(QIcon::fromTheme(QStringLiteral("list-remove")));
        btnDel->setIcon(icon1);

        horizontalLayout->addWidget(btnDel);

        horizontalSpacer = new QSpacerItem(208, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnUp = new QToolButton(DialogArguments);
        btnUp->setObjectName(QStringLiteral("btnUp"));
        QIcon icon2(QIcon::fromTheme(QStringLiteral("go-up")));
        btnUp->setIcon(icon2);

        horizontalLayout->addWidget(btnUp);

        btnDown = new QToolButton(DialogArguments);
        btnDown->setObjectName(QStringLiteral("btnDown"));
        QIcon icon3(QIcon::fromTheme(QStringLiteral("go-down")));
        btnDown->setIcon(icon3);

        horizontalLayout->addWidget(btnDown);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(DialogArguments);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DialogArguments);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogArguments, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogArguments, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogArguments);
    } // setupUi

    void retranslateUi(QDialog *DialogArguments)
    {
        DialogArguments->setWindowTitle(QApplication::translate("DialogArguments", "Application Arguments", 0));
        btnAdd->setText(QApplication::translate("DialogArguments", "+", 0));
        btnDel->setText(QApplication::translate("DialogArguments", "-", 0));
        btnUp->setText(QApplication::translate("DialogArguments", "+", 0));
        btnDown->setText(QApplication::translate("DialogArguments", "-", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogArguments: public Ui_DialogArguments {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGARGUMENTS_H
