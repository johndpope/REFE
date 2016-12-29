/********************************************************************************
** Form generated from reading UI file 'DialogFunctions.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGFUNCTIONS_H
#define UI_DIALOGFUNCTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableView>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>

namespace FunctionFinder {

class Ui_DialogFunctions
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lblRegions;
    QLineEdit *txtSearch;
    QLabel *label;
    QTableView *tableView;
    QLabel *lblResults;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnClose;
    QPushButton *btnHelp;
    QSpacerItem *spacerItem;
    QPushButton *btnGraph;
    QPushButton *btnFind;
    QProgressBar *progressBar;

    void setupUi(QDialog *DialogFunctions)
    {
        if (DialogFunctions->objectName().isEmpty())
            DialogFunctions->setObjectName(QString::fromUtf8("DialogFunctions"));
        DialogFunctions->resize(640, 520);
        verticalLayout = new QVBoxLayout(DialogFunctions);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lblRegions = new QLabel(DialogFunctions);
        lblRegions->setObjectName(QString::fromUtf8("lblRegions"));

        verticalLayout->addWidget(lblRegions);

        txtSearch = new QLineEdit(DialogFunctions);
        txtSearch->setObjectName(QString::fromUtf8("txtSearch"));

        verticalLayout->addWidget(txtSearch);

        label = new QLabel(DialogFunctions);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        tableView = new QTableView(DialogFunctions);
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
        tableView->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableView);

        lblResults = new QLabel(DialogFunctions);
        lblResults->setObjectName(QString::fromUtf8("lblResults"));

        verticalLayout->addWidget(lblResults);

        tableWidget = new QTableWidget(DialogFunctions);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setFont(font);
        tableWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setSortingEnabled(true);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnClose = new QPushButton(DialogFunctions);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("dialog-close")));
        btnClose->setIcon(icon);

        horizontalLayout->addWidget(btnClose);

        btnHelp = new QPushButton(DialogFunctions);
        btnHelp->setObjectName(QString::fromUtf8("btnHelp"));
        btnHelp->setEnabled(false);
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("help-browser")));
        btnHelp->setIcon(icon1);

        horizontalLayout->addWidget(btnHelp);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacerItem);

        btnGraph = new QPushButton(DialogFunctions);
        btnGraph->setObjectName(QString::fromUtf8("btnGraph"));

        horizontalLayout->addWidget(btnGraph);

        btnFind = new QPushButton(DialogFunctions);
        btnFind->setObjectName(QString::fromUtf8("btnFind"));
        QIcon icon2(QIcon::fromTheme(QString::fromUtf8("edit-find")));
        btnFind->setIcon(icon2);
        btnFind->setDefault(true);

        horizontalLayout->addWidget(btnFind);


        verticalLayout->addLayout(horizontalLayout);

        progressBar = new QProgressBar(DialogFunctions);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);
        progressBar->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(progressBar);

        QWidget::setTabOrder(tableView, tableWidget);
        QWidget::setTabOrder(tableWidget, btnClose);
        QWidget::setTabOrder(btnClose, btnHelp);
        QWidget::setTabOrder(btnHelp, btnFind);
        QWidget::setTabOrder(btnFind, txtSearch);

        retranslateUi(DialogFunctions);
        QObject::connect(btnClose, SIGNAL(clicked()), DialogFunctions, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogFunctions);
    } // setupUi

    void retranslateUi(QDialog *DialogFunctions)
    {
        DialogFunctions->setWindowTitle(QApplication::translate("FunctionFinder::DialogFunctions", "Function Finder", 0, QApplication::UnicodeUTF8));
        lblRegions->setText(QApplication::translate("FunctionFinder::DialogFunctions", "Regions To Search:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FunctionFinder::DialogFunctions", "Filter", 0, QApplication::UnicodeUTF8));
        lblResults->setText(QApplication::translate("FunctionFinder::DialogFunctions", "Results:", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("FunctionFinder::DialogFunctions", "Start Address", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("FunctionFinder::DialogFunctions", "End Address", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("FunctionFinder::DialogFunctions", "Size", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("FunctionFinder::DialogFunctions", "Score", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("FunctionFinder::DialogFunctions", "Type", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("FunctionFinder::DialogFunctions", "&Close", 0, QApplication::UnicodeUTF8));
        btnHelp->setText(QApplication::translate("FunctionFinder::DialogFunctions", "&Help", 0, QApplication::UnicodeUTF8));
        btnGraph->setText(QApplication::translate("FunctionFinder::DialogFunctions", "Graph Selected Function", 0, QApplication::UnicodeUTF8));
        btnFind->setText(QApplication::translate("FunctionFinder::DialogFunctions", "&Find", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace FunctionFinder

namespace FunctionFinder {
namespace Ui {
    class DialogFunctions: public Ui_DialogFunctions {};
} // namespace Ui
} // namespace FunctionFinder

#endif // UI_DIALOGFUNCTIONS_H
