/********************************************************************************
** Form generated from reading UI file 'DialogBinaryString.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGBINARYSTRING_H
#define UI_DIALOGBINARYSTRING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include "BinaryString.h"

namespace BinarySearcher {

class Ui_DialogBinaryString
{
public:
    QGridLayout *gridLayout;
    BinaryString *binaryString;
    QListWidget *listWidget;
    QCheckBox *chkSkipNoAccess;
    QCheckBox *chkCaseSensitive;
    QCheckBox *chkAlignment;
    QComboBox *cmbAlignment;
    QHBoxLayout *hboxLayout;
    QPushButton *btnClose;
    QPushButton *btnHelp;
    QSpacerItem *spacerItem;
    QPushButton *btnFind;
    QProgressBar *progressBar;

    void setupUi(QDialog *DialogBinaryString)
    {
        if (DialogBinaryString->objectName().isEmpty())
            DialogBinaryString->setObjectName(QStringLiteral("DialogBinaryString"));
        DialogBinaryString->resize(483, 376);
        gridLayout = new QGridLayout(DialogBinaryString);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        binaryString = new BinaryString(DialogBinaryString);
        binaryString->setObjectName(QStringLiteral("binaryString"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(binaryString->sizePolicy().hasHeightForWidth());
        binaryString->setSizePolicy(sizePolicy);

        gridLayout->addWidget(binaryString, 0, 0, 1, 2);

        listWidget = new QListWidget(DialogBinaryString);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        QFont font;
        font.setFamily(QStringLiteral("Monospace"));
        listWidget->setFont(font);
        listWidget->setAlternatingRowColors(true);

        gridLayout->addWidget(listWidget, 1, 0, 1, 2);

        chkSkipNoAccess = new QCheckBox(DialogBinaryString);
        chkSkipNoAccess->setObjectName(QStringLiteral("chkSkipNoAccess"));

        gridLayout->addWidget(chkSkipNoAccess, 2, 0, 1, 2);

        chkCaseSensitive = new QCheckBox(DialogBinaryString);
        chkCaseSensitive->setObjectName(QStringLiteral("chkCaseSensitive"));
        chkCaseSensitive->setEnabled(false);
        chkCaseSensitive->setChecked(true);

        gridLayout->addWidget(chkCaseSensitive, 3, 0, 1, 2);

        chkAlignment = new QCheckBox(DialogBinaryString);
        chkAlignment->setObjectName(QStringLiteral("chkAlignment"));

        gridLayout->addWidget(chkAlignment, 4, 0, 1, 1);

        cmbAlignment = new QComboBox(DialogBinaryString);
        cmbAlignment->setObjectName(QStringLiteral("cmbAlignment"));

        gridLayout->addWidget(cmbAlignment, 4, 1, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        btnClose = new QPushButton(DialogBinaryString);
        btnClose->setObjectName(QStringLiteral("btnClose"));
        QIcon icon(QIcon::fromTheme(QStringLiteral("dialog-close")));
        btnClose->setIcon(icon);

        hboxLayout->addWidget(btnClose);

        btnHelp = new QPushButton(DialogBinaryString);
        btnHelp->setObjectName(QStringLiteral("btnHelp"));
        btnHelp->setEnabled(false);
        QIcon icon1(QIcon::fromTheme(QStringLiteral("help-browser")));
        btnHelp->setIcon(icon1);

        hboxLayout->addWidget(btnHelp);

        spacerItem = new QSpacerItem(99, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        btnFind = new QPushButton(DialogBinaryString);
        btnFind->setObjectName(QStringLiteral("btnFind"));
        QIcon icon2(QIcon::fromTheme(QStringLiteral("edit-find")));
        btnFind->setIcon(icon2);

        hboxLayout->addWidget(btnFind);


        gridLayout->addLayout(hboxLayout, 5, 0, 1, 2);

        progressBar = new QProgressBar(DialogBinaryString);
        progressBar->setObjectName(QStringLiteral("progressBar"));

        gridLayout->addWidget(progressBar, 6, 0, 1, 2);

        QWidget::setTabOrder(listWidget, chkSkipNoAccess);
        QWidget::setTabOrder(chkSkipNoAccess, chkCaseSensitive);
        QWidget::setTabOrder(chkCaseSensitive, chkAlignment);
        QWidget::setTabOrder(chkAlignment, cmbAlignment);
        QWidget::setTabOrder(cmbAlignment, btnClose);
        QWidget::setTabOrder(btnClose, btnHelp);
        QWidget::setTabOrder(btnHelp, btnFind);

        retranslateUi(DialogBinaryString);
        QObject::connect(btnClose, SIGNAL(clicked()), DialogBinaryString, SLOT(reject()));

        cmbAlignment->setCurrentIndex(1);
        btnFind->setDefault(true);


        QMetaObject::connectSlotsByName(DialogBinaryString);
    } // setupUi

    void retranslateUi(QDialog *DialogBinaryString)
    {
        DialogBinaryString->setWindowTitle(QApplication::translate("BinarySearcher::DialogBinaryString", "Binary String", 0));
        chkSkipNoAccess->setText(QApplication::translate("BinarySearcher::DialogBinaryString", "Skip Regions With No Access Rights", 0));
        chkCaseSensitive->setText(QApplication::translate("BinarySearcher::DialogBinaryString", "Case Sensitive", 0));
        chkAlignment->setText(QApplication::translate("BinarySearcher::DialogBinaryString", "Show Results With This Address Alignment", 0));
        cmbAlignment->clear();
        cmbAlignment->insertItems(0, QStringList()
         << QApplication::translate("BinarySearcher::DialogBinaryString", "2 Byte Alignment", 0)
         << QApplication::translate("BinarySearcher::DialogBinaryString", "4 Byte Alignment", 0)
         << QApplication::translate("BinarySearcher::DialogBinaryString", "8 Byte Alignment", 0)
        );
        btnClose->setText(QApplication::translate("BinarySearcher::DialogBinaryString", "&Close", 0));
        btnHelp->setText(QApplication::translate("BinarySearcher::DialogBinaryString", "&Help", 0));
        btnFind->setText(QApplication::translate("BinarySearcher::DialogBinaryString", "&Find", 0));
    } // retranslateUi

};

} // namespace BinarySearcher

namespace BinarySearcher {
namespace Ui {
    class DialogBinaryString: public Ui_DialogBinaryString {};
} // namespace Ui
} // namespace BinarySearcher

#endif // UI_DIALOGBINARYSTRING_H
