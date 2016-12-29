/********************************************************************************
** Form generated from reading UI file 'DialogASCIIString.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGASCIISTRING_H
#define UI_DIALOGASCIISTRING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

namespace BinarySearcher {

class Ui_DialogASCIIString
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *txtASCII;
    QListWidget *listWidget;
    QCheckBox *chkCaseSensitive;
    QHBoxLayout *hboxLayout;
    QPushButton *btnClose;
    QPushButton *btnHelp;
    QSpacerItem *spacerItem;
    QPushButton *btnFind;
    QProgressBar *progressBar;

    void setupUi(QDialog *DialogASCIIString)
    {
        if (DialogASCIIString->objectName().isEmpty())
            DialogASCIIString->setObjectName(QStringLiteral("DialogASCIIString"));
        DialogASCIIString->resize(377, 293);
        gridLayout = new QGridLayout(DialogASCIIString);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(DialogASCIIString);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        txtASCII = new QLineEdit(DialogASCIIString);
        txtASCII->setObjectName(QStringLiteral("txtASCII"));

        gridLayout->addWidget(txtASCII, 0, 1, 1, 1);

        listWidget = new QListWidget(DialogASCIIString);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        QFont font;
        font.setFamily(QStringLiteral("Monospace"));
        listWidget->setFont(font);
        listWidget->setAlternatingRowColors(true);

        gridLayout->addWidget(listWidget, 1, 0, 1, 2);

        chkCaseSensitive = new QCheckBox(DialogASCIIString);
        chkCaseSensitive->setObjectName(QStringLiteral("chkCaseSensitive"));
        chkCaseSensitive->setEnabled(false);
        chkCaseSensitive->setChecked(true);

        gridLayout->addWidget(chkCaseSensitive, 2, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        btnClose = new QPushButton(DialogASCIIString);
        btnClose->setObjectName(QStringLiteral("btnClose"));
        QIcon icon(QIcon::fromTheme(QStringLiteral("dialog-close")));
        btnClose->setIcon(icon);

        hboxLayout->addWidget(btnClose);

        btnHelp = new QPushButton(DialogASCIIString);
        btnHelp->setObjectName(QStringLiteral("btnHelp"));
        btnHelp->setEnabled(false);
        QIcon icon1(QIcon::fromTheme(QStringLiteral("help-browser")));
        btnHelp->setIcon(icon1);

        hboxLayout->addWidget(btnHelp);

        spacerItem = new QSpacerItem(99, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        btnFind = new QPushButton(DialogASCIIString);
        btnFind->setObjectName(QStringLiteral("btnFind"));
        QIcon icon2(QIcon::fromTheme(QStringLiteral("edit-find")));
        btnFind->setIcon(icon2);

        hboxLayout->addWidget(btnFind);


        gridLayout->addLayout(hboxLayout, 3, 0, 1, 2);

        progressBar = new QProgressBar(DialogASCIIString);
        progressBar->setObjectName(QStringLiteral("progressBar"));

        gridLayout->addWidget(progressBar, 4, 0, 1, 2);


        retranslateUi(DialogASCIIString);
        QObject::connect(btnClose, SIGNAL(clicked()), DialogASCIIString, SLOT(close()));

        btnFind->setDefault(true);


        QMetaObject::connectSlotsByName(DialogASCIIString);
    } // setupUi

    void retranslateUi(QDialog *DialogASCIIString)
    {
        DialogASCIIString->setWindowTitle(QApplication::translate("BinarySearcher::DialogASCIIString", "Find ASCII String", 0));
        label->setText(QApplication::translate("BinarySearcher::DialogASCIIString", "ASCII String", 0));
        chkCaseSensitive->setText(QApplication::translate("BinarySearcher::DialogASCIIString", "Case Sensitive", 0));
        btnClose->setText(QApplication::translate("BinarySearcher::DialogASCIIString", "&Close", 0));
        btnHelp->setText(QApplication::translate("BinarySearcher::DialogASCIIString", "&Help", 0));
        btnFind->setText(QApplication::translate("BinarySearcher::DialogASCIIString", "&Find", 0));
    } // retranslateUi

};

} // namespace BinarySearcher

namespace BinarySearcher {
namespace Ui {
    class DialogASCIIString: public Ui_DialogASCIIString {};
} // namespace Ui
} // namespace BinarySearcher

#endif // UI_DIALOGASCIISTRING_H
