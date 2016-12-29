/********************************************************************************
** Form generated from reading UI file 'DialogStrings.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSTRINGS_H
#define UI_DIALOGSTRINGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableView>

namespace ProcessProperties {

class Ui_DialogStrings
{
public:
    QGridLayout *gridLayout;
    QLabel *lblRegions;
    QLabel *label;
    QLineEdit *txtSearch;
    QTableView *tableView;
    QLabel *lblResults;
    QListWidget *listWidget;
    QCheckBox *search_unicode;
    QHBoxLayout *hboxLayout;
    QPushButton *btnClose;
    QPushButton *btnHelp;
    QSpacerItem *spacerItem;
    QPushButton *btnFind;
    QProgressBar *progressBar;

    void setupUi(QDialog *DialogStrings)
    {
        if (DialogStrings->objectName().isEmpty())
            DialogStrings->setObjectName(QString::fromUtf8("DialogStrings"));
        DialogStrings->resize(737, 502);
        gridLayout = new QGridLayout(DialogStrings);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lblRegions = new QLabel(DialogStrings);
        lblRegions->setObjectName(QString::fromUtf8("lblRegions"));

        gridLayout->addWidget(lblRegions, 0, 0, 1, 2);

        label = new QLabel(DialogStrings);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        txtSearch = new QLineEdit(DialogStrings);
        txtSearch->setObjectName(QString::fromUtf8("txtSearch"));

        gridLayout->addWidget(txtSearch, 1, 1, 1, 1);

        tableView = new QTableView(DialogStrings);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        tableView->setFont(font);
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setSortingEnabled(true);
        tableView->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(tableView, 2, 0, 1, 2);

        lblResults = new QLabel(DialogStrings);
        lblResults->setObjectName(QString::fromUtf8("lblResults"));

        gridLayout->addWidget(lblResults, 3, 0, 1, 1);

        listWidget = new QListWidget(DialogStrings);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setFont(font);
        listWidget->setAlternatingRowColors(true);

        gridLayout->addWidget(listWidget, 4, 0, 1, 2);

        search_unicode = new QCheckBox(DialogStrings);
        search_unicode->setObjectName(QString::fromUtf8("search_unicode"));

        gridLayout->addWidget(search_unicode, 5, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        btnClose = new QPushButton(DialogStrings);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("dialog-close")));
        btnClose->setIcon(icon);

        hboxLayout->addWidget(btnClose);

        btnHelp = new QPushButton(DialogStrings);
        btnHelp->setObjectName(QString::fromUtf8("btnHelp"));
        btnHelp->setEnabled(false);
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("help-browser")));
        btnHelp->setIcon(icon1);

        hboxLayout->addWidget(btnHelp);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        btnFind = new QPushButton(DialogStrings);
        btnFind->setObjectName(QString::fromUtf8("btnFind"));
        QIcon icon2(QIcon::fromTheme(QString::fromUtf8("edit-find")));
        btnFind->setIcon(icon2);
        btnFind->setDefault(true);

        hboxLayout->addWidget(btnFind);


        gridLayout->addLayout(hboxLayout, 6, 0, 1, 2);

        progressBar = new QProgressBar(DialogStrings);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);
        progressBar->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(progressBar, 7, 0, 1, 2);


        retranslateUi(DialogStrings);
        QObject::connect(btnClose, SIGNAL(clicked()), DialogStrings, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogStrings);
    } // setupUi

    void retranslateUi(QDialog *DialogStrings)
    {
        DialogStrings->setWindowTitle(QApplication::translate("ProcessProperties::DialogStrings", "String Search", 0, QApplication::UnicodeUTF8));
        lblRegions->setText(QApplication::translate("ProcessProperties::DialogStrings", "Regions To Search:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ProcessProperties::DialogStrings", "Filter", 0, QApplication::UnicodeUTF8));
        lblResults->setText(QApplication::translate("ProcessProperties::DialogStrings", "Results:", 0, QApplication::UnicodeUTF8));
        search_unicode->setText(QApplication::translate("ProcessProperties::DialogStrings", "Include UTF-16 Results", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("ProcessProperties::DialogStrings", "&Close", 0, QApplication::UnicodeUTF8));
        btnHelp->setText(QApplication::translate("ProcessProperties::DialogStrings", "&Help", 0, QApplication::UnicodeUTF8));
        btnFind->setText(QApplication::translate("ProcessProperties::DialogStrings", "&Find", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace ProcessProperties

namespace ProcessProperties {
namespace Ui {
    class DialogStrings: public Ui_DialogStrings {};
} // namespace Ui
} // namespace ProcessProperties

#endif // UI_DIALOGSTRINGS_H
