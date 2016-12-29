/********************************************************************************
** Form generated from reading UI file 'DialogBreakpoints.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGBREAKPOINTS_H
#define UI_DIALOGBREAKPOINTS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>

namespace BreakpointManager {

class Ui_DialogBreakpoints
{
public:
    QGridLayout *gridLayout;
    QPushButton *btnImport;
    QPushButton *btnCondition;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *btnRemove;
    QPushButton *btnAdd;
    QTableWidget *tableWidget;
    QSpacerItem *verticalSpacer;
    QPushButton *btnExport;

    void setupUi(QDialog *DialogBreakpoints)
    {
        if (DialogBreakpoints->objectName().isEmpty())
            DialogBreakpoints->setObjectName(QString::fromUtf8("DialogBreakpoints"));
        DialogBreakpoints->resize(803, 264);
        gridLayout = new QGridLayout(DialogBreakpoints);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btnImport = new QPushButton(DialogBreakpoints);
        btnImport->setObjectName(QString::fromUtf8("btnImport"));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("document-import")));
        btnImport->setIcon(icon);

        gridLayout->addWidget(btnImport, 4, 1, 1, 1);

        btnCondition = new QPushButton(DialogBreakpoints);
        btnCondition->setObjectName(QString::fromUtf8("btnCondition"));

        gridLayout->addWidget(btnCondition, 2, 1, 1, 1);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 6, 1, 1, 1);

        okButton = new QPushButton(DialogBreakpoints);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("dialog-close")));
        okButton->setIcon(icon1);
        okButton->setDefault(true);

        gridLayout->addWidget(okButton, 7, 1, 1, 1);

        btnRemove = new QPushButton(DialogBreakpoints);
        btnRemove->setObjectName(QString::fromUtf8("btnRemove"));
        QIcon icon2(QIcon::fromTheme(QString::fromUtf8("list-remove")));
        btnRemove->setIcon(icon2);

        gridLayout->addWidget(btnRemove, 1, 1, 1, 1);

        btnAdd = new QPushButton(DialogBreakpoints);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        QIcon icon3(QIcon::fromTheme(QString::fromUtf8("list-add")));
        btnAdd->setIcon(icon3);

        gridLayout->addWidget(btnAdd, 0, 1, 1, 1);

        tableWidget = new QTableWidget(DialogBreakpoints);
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
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);

        gridLayout->addWidget(tableWidget, 0, 0, 8, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 1, 1, 1);

        btnExport = new QPushButton(DialogBreakpoints);
        btnExport->setObjectName(QString::fromUtf8("btnExport"));
        QIcon icon4(QIcon::fromTheme(QString::fromUtf8("document-export")));
        btnExport->setIcon(icon4);

        gridLayout->addWidget(btnExport, 5, 1, 1, 1);

        QWidget::setTabOrder(tableWidget, btnAdd);
        QWidget::setTabOrder(btnAdd, btnRemove);
        QWidget::setTabOrder(btnRemove, btnCondition);
        QWidget::setTabOrder(btnCondition, okButton);

        retranslateUi(DialogBreakpoints);
        QObject::connect(okButton, SIGNAL(clicked()), DialogBreakpoints, SLOT(accept()));

        QMetaObject::connectSlotsByName(DialogBreakpoints);
    } // setupUi

    void retranslateUi(QDialog *DialogBreakpoints)
    {
        DialogBreakpoints->setWindowTitle(QApplication::translate("BreakpointManager::DialogBreakpoints", "Breakpoint Manager", 0, QApplication::UnicodeUTF8));
        btnImport->setText(QApplication::translate("BreakpointManager::DialogBreakpoints", "&Import Breakpoints", 0, QApplication::UnicodeUTF8));
        btnCondition->setText(QApplication::translate("BreakpointManager::DialogBreakpoints", "Set Breakpoint &Condition", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("BreakpointManager::DialogBreakpoints", "&Close", 0, QApplication::UnicodeUTF8));
        btnRemove->setText(QApplication::translate("BreakpointManager::DialogBreakpoints", "&Remove Breakpoint", 0, QApplication::UnicodeUTF8));
        btnAdd->setText(QApplication::translate("BreakpointManager::DialogBreakpoints", "&Add Breakpoint", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("BreakpointManager::DialogBreakpoints", "Address", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("BreakpointManager::DialogBreakpoints", "Condition", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("BreakpointManager::DialogBreakpoints", "Original Byte", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("BreakpointManager::DialogBreakpoints", "Type", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("BreakpointManager::DialogBreakpoints", "Function", 0, QApplication::UnicodeUTF8));
        btnExport->setText(QApplication::translate("BreakpointManager::DialogBreakpoints", "&Export Breakpoints", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace BreakpointManager

namespace BreakpointManager {
namespace Ui {
    class DialogBreakpoints: public Ui_DialogBreakpoints {};
} // namespace Ui
} // namespace BreakpointManager

#endif // UI_DIALOGBREAKPOINTS_H
