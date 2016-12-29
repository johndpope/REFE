/********************************************************************************
** Form generated from reading UI file 'DialogFunctions.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGFUNCTIONS_H
#define UI_DIALOGFUNCTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

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
            DialogFunctions->setObjectName(QStringLiteral("DialogFunctions"));
        DialogFunctions->resize(640, 520);
        verticalLayout = new QVBoxLayout(DialogFunctions);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lblRegions = new QLabel(DialogFunctions);
        lblRegions->setObjectName(QStringLiteral("lblRegions"));

        verticalLayout->addWidget(lblRegions);

        txtSearch = new QLineEdit(DialogFunctions);
        txtSearch->setObjectName(QStringLiteral("txtSearch"));

        verticalLayout->addWidget(txtSearch);

        label = new QLabel(DialogFunctions);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        tableView = new QTableView(DialogFunctions);
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
        tableView->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableView);

        lblResults = new QLabel(DialogFunctions);
        lblResults->setObjectName(QStringLiteral("lblResults"));

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
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
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
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnClose = new QPushButton(DialogFunctions);
        btnClose->setObjectName(QStringLiteral("btnClose"));
        QIcon icon(QIcon::fromTheme(QStringLiteral("dialog-close")));
        btnClose->setIcon(icon);

        horizontalLayout->addWidget(btnClose);

        btnHelp = new QPushButton(DialogFunctions);
        btnHelp->setObjectName(QStringLiteral("btnHelp"));
        btnHelp->setEnabled(false);
        QIcon icon1(QIcon::fromTheme(QStringLiteral("help-browser")));
        btnHelp->setIcon(icon1);

        horizontalLayout->addWidget(btnHelp);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacerItem);

        btnGraph = new QPushButton(DialogFunctions);
        btnGraph->setObjectName(QStringLiteral("btnGraph"));

        horizontalLayout->addWidget(btnGraph);

        btnFind = new QPushButton(DialogFunctions);
        btnFind->setObjectName(QStringLiteral("btnFind"));
        QIcon icon2(QIcon::fromTheme(QStringLiteral("edit-find")));
        btnFind->setIcon(icon2);

        horizontalLayout->addWidget(btnFind);


        verticalLayout->addLayout(horizontalLayout);

        progressBar = new QProgressBar(DialogFunctions);
        progressBar->setObjectName(QStringLiteral("progressBar"));
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

        btnFind->setDefault(true);


        QMetaObject::connectSlotsByName(DialogFunctions);
    } // setupUi

    void retranslateUi(QDialog *DialogFunctions)
    {
        DialogFunctions->setWindowTitle(QApplication::translate("FunctionFinder::DialogFunctions", "Function Finder", 0));
        lblRegions->setText(QApplication::translate("FunctionFinder::DialogFunctions", "Regions To Search:", 0));
        label->setText(QApplication::translate("FunctionFinder::DialogFunctions", "Filter", 0));
        lblResults->setText(QApplication::translate("FunctionFinder::DialogFunctions", "Results:", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("FunctionFinder::DialogFunctions", "Start Address", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("FunctionFinder::DialogFunctions", "End Address", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("FunctionFinder::DialogFunctions", "Size", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("FunctionFinder::DialogFunctions", "Score", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("FunctionFinder::DialogFunctions", "Type", 0));
        btnClose->setText(QApplication::translate("FunctionFinder::DialogFunctions", "&Close", 0));
        btnHelp->setText(QApplication::translate("FunctionFinder::DialogFunctions", "&Help", 0));
        btnGraph->setText(QApplication::translate("FunctionFinder::DialogFunctions", "Graph Selected Function", 0));
        btnFind->setText(QApplication::translate("FunctionFinder::DialogFunctions", "&Find", 0));
    } // retranslateUi

};

} // namespace FunctionFinder

namespace FunctionFinder {
namespace Ui {
    class DialogFunctions: public Ui_DialogFunctions {};
} // namespace Ui
} // namespace FunctionFinder

#endif // UI_DIALOGFUNCTIONS_H
