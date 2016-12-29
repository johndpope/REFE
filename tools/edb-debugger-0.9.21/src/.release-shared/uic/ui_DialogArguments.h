/********************************************************************************
** Form generated from reading UI file 'DialogArguments.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGARGUMENTS_H
#define UI_DIALOGARGUMENTS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

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
            DialogArguments->setObjectName(QString::fromUtf8("DialogArguments"));
        DialogArguments->resize(454, 250);
        verticalLayout = new QVBoxLayout(DialogArguments);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget = new QListWidget(DialogArguments);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        listWidget->setFont(font);
        listWidget->setAlternatingRowColors(true);

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnAdd = new QToolButton(DialogArguments);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("list-add")));
        btnAdd->setIcon(icon);

        horizontalLayout->addWidget(btnAdd);

        btnDel = new QToolButton(DialogArguments);
        btnDel->setObjectName(QString::fromUtf8("btnDel"));
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("list-remove")));
        btnDel->setIcon(icon1);

        horizontalLayout->addWidget(btnDel);

        horizontalSpacer = new QSpacerItem(208, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnUp = new QToolButton(DialogArguments);
        btnUp->setObjectName(QString::fromUtf8("btnUp"));
        QIcon icon2(QIcon::fromTheme(QString::fromUtf8("go-up")));
        btnUp->setIcon(icon2);

        horizontalLayout->addWidget(btnUp);

        btnDown = new QToolButton(DialogArguments);
        btnDown->setObjectName(QString::fromUtf8("btnDown"));
        QIcon icon3(QIcon::fromTheme(QString::fromUtf8("go-down")));
        btnDown->setIcon(icon3);

        horizontalLayout->addWidget(btnDown);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(DialogArguments);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
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
        DialogArguments->setWindowTitle(QApplication::translate("DialogArguments", "Application Arguments", 0, QApplication::UnicodeUTF8));
        btnAdd->setText(QApplication::translate("DialogArguments", "+", 0, QApplication::UnicodeUTF8));
        btnDel->setText(QApplication::translate("DialogArguments", "-", 0, QApplication::UnicodeUTF8));
        btnUp->setText(QApplication::translate("DialogArguments", "+", 0, QApplication::UnicodeUTF8));
        btnDown->setText(QApplication::translate("DialogArguments", "-", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogArguments: public Ui_DialogArguments {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGARGUMENTS_H
