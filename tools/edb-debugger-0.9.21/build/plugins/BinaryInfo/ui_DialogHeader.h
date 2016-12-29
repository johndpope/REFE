/********************************************************************************
** Form generated from reading UI file 'DialogHeader.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGHEADER_H
#define UI_DIALOGHEADER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

namespace BinaryInfo {

class Ui_DialogHeader
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *txtSearch;
    QLabel *label_3;
    QTableView *tableView;
    QLabel *label_2;
    QTreeWidget *treeWidget;
    QHBoxLayout *hboxLayout;
    QPushButton *btnClose;
    QPushButton *btnHelp;
    QSpacerItem *spacerItem;
    QPushButton *btnExplore;

    void setupUi(QDialog *DialogHeader)
    {
        if (DialogHeader->objectName().isEmpty())
            DialogHeader->setObjectName(QStringLiteral("DialogHeader"));
        DialogHeader->resize(691, 590);
        verticalLayout = new QVBoxLayout(DialogHeader);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(DialogHeader);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        txtSearch = new QLineEdit(DialogHeader);
        txtSearch->setObjectName(QStringLiteral("txtSearch"));

        verticalLayout->addWidget(txtSearch);

        label_3 = new QLabel(DialogHeader);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        tableView = new QTableView(DialogHeader);
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

        verticalLayout->addWidget(tableView);

        label_2 = new QLabel(DialogHeader);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        treeWidget = new QTreeWidget(DialogHeader);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));

        verticalLayout->addWidget(treeWidget);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        btnClose = new QPushButton(DialogHeader);
        btnClose->setObjectName(QStringLiteral("btnClose"));
        QIcon icon(QIcon::fromTheme(QStringLiteral("dialog-close")));
        btnClose->setIcon(icon);

        hboxLayout->addWidget(btnClose);

        btnHelp = new QPushButton(DialogHeader);
        btnHelp->setObjectName(QStringLiteral("btnHelp"));
        btnHelp->setEnabled(false);
        QIcon icon1(QIcon::fromTheme(QStringLiteral("help-browser")));
        btnHelp->setIcon(icon1);

        hboxLayout->addWidget(btnHelp);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        btnExplore = new QPushButton(DialogHeader);
        btnExplore->setObjectName(QStringLiteral("btnExplore"));

        hboxLayout->addWidget(btnExplore);


        verticalLayout->addLayout(hboxLayout);

        QWidget::setTabOrder(txtSearch, tableView);
        QWidget::setTabOrder(tableView, btnClose);
        QWidget::setTabOrder(btnClose, btnHelp);
        QWidget::setTabOrder(btnHelp, btnExplore);

        retranslateUi(DialogHeader);
        QObject::connect(btnClose, SIGNAL(clicked()), DialogHeader, SLOT(reject()));

        btnExplore->setDefault(true);


        QMetaObject::connectSlotsByName(DialogHeader);
    } // setupUi

    void retranslateUi(QDialog *DialogHeader)
    {
        DialogHeader->setWindowTitle(QApplication::translate("BinaryInfo::DialogHeader", "Header Explorer", 0));
        label->setText(QApplication::translate("BinaryInfo::DialogHeader", "Regions To Search:", 0));
        label_3->setText(QApplication::translate("BinaryInfo::DialogHeader", "Filter", 0));
        label_2->setText(QApplication::translate("BinaryInfo::DialogHeader", "Results:", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("BinaryInfo::DialogHeader", "Value", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("BinaryInfo::DialogHeader", "Header", 0));
        btnClose->setText(QApplication::translate("BinaryInfo::DialogHeader", "&Close", 0));
        btnHelp->setText(QApplication::translate("BinaryInfo::DialogHeader", "&Help", 0));
        btnExplore->setText(QApplication::translate("BinaryInfo::DialogHeader", "Explore Header", 0));
    } // retranslateUi

};

} // namespace BinaryInfo

namespace BinaryInfo {
namespace Ui {
    class DialogHeader: public Ui_DialogHeader {};
} // namespace Ui
} // namespace BinaryInfo

#endif // UI_DIALOGHEADER_H
