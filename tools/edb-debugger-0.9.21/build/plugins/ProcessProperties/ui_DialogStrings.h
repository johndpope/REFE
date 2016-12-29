/********************************************************************************
** Form generated from reading UI file 'DialogStrings.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSTRINGS_H
#define UI_DIALOGSTRINGS_H

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
#include <QtWidgets/QTableView>

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
            DialogStrings->setObjectName(QStringLiteral("DialogStrings"));
        DialogStrings->resize(737, 502);
        gridLayout = new QGridLayout(DialogStrings);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lblRegions = new QLabel(DialogStrings);
        lblRegions->setObjectName(QStringLiteral("lblRegions"));

        gridLayout->addWidget(lblRegions, 0, 0, 1, 2);

        label = new QLabel(DialogStrings);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        txtSearch = new QLineEdit(DialogStrings);
        txtSearch->setObjectName(QStringLiteral("txtSearch"));

        gridLayout->addWidget(txtSearch, 1, 1, 1, 1);

        tableView = new QTableView(DialogStrings);
        tableView->setObjectName(QStringLiteral("tableView"));
        QFont font;
        font.setFamily(QStringLiteral("Monospace"));
        tableView->setFont(font);
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setSortingEnabled(true);
        tableView->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(tableView, 2, 0, 1, 2);

        lblResults = new QLabel(DialogStrings);
        lblResults->setObjectName(QStringLiteral("lblResults"));

        gridLayout->addWidget(lblResults, 3, 0, 1, 1);

        listWidget = new QListWidget(DialogStrings);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setFont(font);
        listWidget->setAlternatingRowColors(true);

        gridLayout->addWidget(listWidget, 4, 0, 1, 2);

        search_unicode = new QCheckBox(DialogStrings);
        search_unicode->setObjectName(QStringLiteral("search_unicode"));

        gridLayout->addWidget(search_unicode, 5, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        btnClose = new QPushButton(DialogStrings);
        btnClose->setObjectName(QStringLiteral("btnClose"));
        QIcon icon(QIcon::fromTheme(QStringLiteral("dialog-close")));
        btnClose->setIcon(icon);

        hboxLayout->addWidget(btnClose);

        btnHelp = new QPushButton(DialogStrings);
        btnHelp->setObjectName(QStringLiteral("btnHelp"));
        btnHelp->setEnabled(false);
        QIcon icon1(QIcon::fromTheme(QStringLiteral("help-browser")));
        btnHelp->setIcon(icon1);

        hboxLayout->addWidget(btnHelp);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        btnFind = new QPushButton(DialogStrings);
        btnFind->setObjectName(QStringLiteral("btnFind"));
        QIcon icon2(QIcon::fromTheme(QStringLiteral("edit-find")));
        btnFind->setIcon(icon2);

        hboxLayout->addWidget(btnFind);


        gridLayout->addLayout(hboxLayout, 6, 0, 1, 2);

        progressBar = new QProgressBar(DialogStrings);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);
        progressBar->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(progressBar, 7, 0, 1, 2);


        retranslateUi(DialogStrings);
        QObject::connect(btnClose, SIGNAL(clicked()), DialogStrings, SLOT(reject()));

        btnFind->setDefault(true);


        QMetaObject::connectSlotsByName(DialogStrings);
    } // setupUi

    void retranslateUi(QDialog *DialogStrings)
    {
        DialogStrings->setWindowTitle(QApplication::translate("ProcessProperties::DialogStrings", "String Search", 0));
        lblRegions->setText(QApplication::translate("ProcessProperties::DialogStrings", "Regions To Search:", 0));
        label->setText(QApplication::translate("ProcessProperties::DialogStrings", "Filter", 0));
        lblResults->setText(QApplication::translate("ProcessProperties::DialogStrings", "Results:", 0));
        search_unicode->setText(QApplication::translate("ProcessProperties::DialogStrings", "Include UTF-16 Results", 0));
        btnClose->setText(QApplication::translate("ProcessProperties::DialogStrings", "&Close", 0));
        btnHelp->setText(QApplication::translate("ProcessProperties::DialogStrings", "&Help", 0));
        btnFind->setText(QApplication::translate("ProcessProperties::DialogStrings", "&Find", 0));
    } // retranslateUi

};

} // namespace ProcessProperties

namespace ProcessProperties {
namespace Ui {
    class DialogStrings: public Ui_DialogStrings {};
} // namespace Ui
} // namespace ProcessProperties

#endif // UI_DIALOGSTRINGS_H
