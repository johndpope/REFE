/********************************************************************************
** Form generated from reading UI file 'DialogHeader.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGHEADER_H
#define UI_DIALOGHEADER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableView>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>

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
            DialogHeader->setObjectName(QString::fromUtf8("DialogHeader"));
        DialogHeader->resize(691, 590);
        verticalLayout = new QVBoxLayout(DialogHeader);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(DialogHeader);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        txtSearch = new QLineEdit(DialogHeader);
        txtSearch->setObjectName(QString::fromUtf8("txtSearch"));

        verticalLayout->addWidget(txtSearch);

        label_3 = new QLabel(DialogHeader);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        tableView = new QTableView(DialogHeader);
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

        verticalLayout->addWidget(tableView);

        label_2 = new QLabel(DialogHeader);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        treeWidget = new QTreeWidget(DialogHeader);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        verticalLayout->addWidget(treeWidget);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        btnClose = new QPushButton(DialogHeader);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("dialog-close")));
        btnClose->setIcon(icon);

        hboxLayout->addWidget(btnClose);

        btnHelp = new QPushButton(DialogHeader);
        btnHelp->setObjectName(QString::fromUtf8("btnHelp"));
        btnHelp->setEnabled(false);
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("help-browser")));
        btnHelp->setIcon(icon1);

        hboxLayout->addWidget(btnHelp);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        btnExplore = new QPushButton(DialogHeader);
        btnExplore->setObjectName(QString::fromUtf8("btnExplore"));
        btnExplore->setDefault(true);

        hboxLayout->addWidget(btnExplore);


        verticalLayout->addLayout(hboxLayout);

        QWidget::setTabOrder(txtSearch, tableView);
        QWidget::setTabOrder(tableView, btnClose);
        QWidget::setTabOrder(btnClose, btnHelp);
        QWidget::setTabOrder(btnHelp, btnExplore);

        retranslateUi(DialogHeader);
        QObject::connect(btnClose, SIGNAL(clicked()), DialogHeader, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogHeader);
    } // setupUi

    void retranslateUi(QDialog *DialogHeader)
    {
        DialogHeader->setWindowTitle(QApplication::translate("BinaryInfo::DialogHeader", "Header Explorer", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("BinaryInfo::DialogHeader", "Regions To Search:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("BinaryInfo::DialogHeader", "Filter", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("BinaryInfo::DialogHeader", "Results:", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("BinaryInfo::DialogHeader", "Value", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("BinaryInfo::DialogHeader", "Header", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("BinaryInfo::DialogHeader", "&Close", 0, QApplication::UnicodeUTF8));
        btnHelp->setText(QApplication::translate("BinaryInfo::DialogHeader", "&Help", 0, QApplication::UnicodeUTF8));
        btnExplore->setText(QApplication::translate("BinaryInfo::DialogHeader", "Explore Header", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace BinaryInfo

namespace BinaryInfo {
namespace Ui {
    class DialogHeader: public Ui_DialogHeader {};
} // namespace Ui
} // namespace BinaryInfo

#endif // UI_DIALOGHEADER_H
