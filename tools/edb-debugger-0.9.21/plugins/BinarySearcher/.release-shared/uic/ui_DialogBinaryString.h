/********************************************************************************
** Form generated from reading UI file 'DialogBinaryString.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGBINARYSTRING_H
#define UI_DIALOGBINARYSTRING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
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
            DialogBinaryString->setObjectName(QString::fromUtf8("DialogBinaryString"));
        DialogBinaryString->resize(483, 376);
        gridLayout = new QGridLayout(DialogBinaryString);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        binaryString = new BinaryString(DialogBinaryString);
        binaryString->setObjectName(QString::fromUtf8("binaryString"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(binaryString->sizePolicy().hasHeightForWidth());
        binaryString->setSizePolicy(sizePolicy);

        gridLayout->addWidget(binaryString, 0, 0, 1, 2);

        listWidget = new QListWidget(DialogBinaryString);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        listWidget->setFont(font);
        listWidget->setAlternatingRowColors(true);

        gridLayout->addWidget(listWidget, 1, 0, 1, 2);

        chkSkipNoAccess = new QCheckBox(DialogBinaryString);
        chkSkipNoAccess->setObjectName(QString::fromUtf8("chkSkipNoAccess"));

        gridLayout->addWidget(chkSkipNoAccess, 2, 0, 1, 2);

        chkCaseSensitive = new QCheckBox(DialogBinaryString);
        chkCaseSensitive->setObjectName(QString::fromUtf8("chkCaseSensitive"));
        chkCaseSensitive->setEnabled(false);
        chkCaseSensitive->setChecked(true);

        gridLayout->addWidget(chkCaseSensitive, 3, 0, 1, 2);

        chkAlignment = new QCheckBox(DialogBinaryString);
        chkAlignment->setObjectName(QString::fromUtf8("chkAlignment"));

        gridLayout->addWidget(chkAlignment, 4, 0, 1, 1);

        cmbAlignment = new QComboBox(DialogBinaryString);
        cmbAlignment->setObjectName(QString::fromUtf8("cmbAlignment"));

        gridLayout->addWidget(cmbAlignment, 4, 1, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        btnClose = new QPushButton(DialogBinaryString);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("dialog-close")));
        btnClose->setIcon(icon);

        hboxLayout->addWidget(btnClose);

        btnHelp = new QPushButton(DialogBinaryString);
        btnHelp->setObjectName(QString::fromUtf8("btnHelp"));
        btnHelp->setEnabled(false);
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("help-browser")));
        btnHelp->setIcon(icon1);

        hboxLayout->addWidget(btnHelp);

        spacerItem = new QSpacerItem(99, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        btnFind = new QPushButton(DialogBinaryString);
        btnFind->setObjectName(QString::fromUtf8("btnFind"));
        QIcon icon2(QIcon::fromTheme(QString::fromUtf8("edit-find")));
        btnFind->setIcon(icon2);
        btnFind->setDefault(true);

        hboxLayout->addWidget(btnFind);


        gridLayout->addLayout(hboxLayout, 5, 0, 1, 2);

        progressBar = new QProgressBar(DialogBinaryString);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));

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


        QMetaObject::connectSlotsByName(DialogBinaryString);
    } // setupUi

    void retranslateUi(QDialog *DialogBinaryString)
    {
        DialogBinaryString->setWindowTitle(QApplication::translate("BinarySearcher::DialogBinaryString", "Binary String", 0, QApplication::UnicodeUTF8));
        chkSkipNoAccess->setText(QApplication::translate("BinarySearcher::DialogBinaryString", "Skip Regions With No Access Rights", 0, QApplication::UnicodeUTF8));
        chkCaseSensitive->setText(QApplication::translate("BinarySearcher::DialogBinaryString", "Case Sensitive", 0, QApplication::UnicodeUTF8));
        chkAlignment->setText(QApplication::translate("BinarySearcher::DialogBinaryString", "Show Results With This Address Alignment", 0, QApplication::UnicodeUTF8));
        cmbAlignment->clear();
        cmbAlignment->insertItems(0, QStringList()
         << QApplication::translate("BinarySearcher::DialogBinaryString", "2 Byte Alignment", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("BinarySearcher::DialogBinaryString", "4 Byte Alignment", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("BinarySearcher::DialogBinaryString", "8 Byte Alignment", 0, QApplication::UnicodeUTF8)
        );
        btnClose->setText(QApplication::translate("BinarySearcher::DialogBinaryString", "&Close", 0, QApplication::UnicodeUTF8));
        btnHelp->setText(QApplication::translate("BinarySearcher::DialogBinaryString", "&Help", 0, QApplication::UnicodeUTF8));
        btnFind->setText(QApplication::translate("BinarySearcher::DialogBinaryString", "&Find", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace BinarySearcher

namespace BinarySearcher {
namespace Ui {
    class DialogBinaryString: public Ui_DialogBinaryString {};
} // namespace Ui
} // namespace BinarySearcher

#endif // UI_DIALOGBINARYSTRING_H
