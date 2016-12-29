/********************************************************************************
** Form generated from reading UI file 'Bookmarks.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKMARKS_H
#define UI_BOOKMARKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

namespace Bookmarks {

class Ui_Bookmarks
{
public:
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QPushButton *btnAdd;
    QPushButton *btnDel;
    QPushButton *btnClear;

    void setupUi(QWidget *Bookmarks)
    {
        if (Bookmarks->objectName().isEmpty())
            Bookmarks->setObjectName(QStringLiteral("Bookmarks"));
        Bookmarks->resize(306, 193);
        gridLayout = new QGridLayout(Bookmarks);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableWidget = new QTableWidget(Bookmarks);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setWordWrap(false);
        tableWidget->setCornerButtonEnabled(false);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);

        gridLayout->addWidget(tableWidget, 0, 0, 1, 3);

        btnAdd = new QPushButton(Bookmarks);
        btnAdd->setObjectName(QStringLiteral("btnAdd"));
        QIcon icon(QIcon::fromTheme(QStringLiteral("list-add")));
        btnAdd->setIcon(icon);

        gridLayout->addWidget(btnAdd, 1, 0, 1, 1);

        btnDel = new QPushButton(Bookmarks);
        btnDel->setObjectName(QStringLiteral("btnDel"));
        QIcon icon1(QIcon::fromTheme(QStringLiteral("list-remove")));
        btnDel->setIcon(icon1);

        gridLayout->addWidget(btnDel, 1, 1, 1, 1);

        btnClear = new QPushButton(Bookmarks);
        btnClear->setObjectName(QStringLiteral("btnClear"));
        QIcon icon2(QIcon::fromTheme(QStringLiteral("edit-clear-list")));
        btnClear->setIcon(icon2);

        gridLayout->addWidget(btnClear, 1, 2, 1, 1);


        retranslateUi(Bookmarks);

        QMetaObject::connectSlotsByName(Bookmarks);
    } // setupUi

    void retranslateUi(QWidget *Bookmarks)
    {
        Bookmarks->setWindowTitle(QApplication::translate("Bookmarks::Bookmarks", "Form", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Bookmarks::Bookmarks", "Address", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Bookmarks::Bookmarks", "Comment", 0));
        btnAdd->setText(QApplication::translate("Bookmarks::Bookmarks", "Add", 0));
        btnDel->setText(QApplication::translate("Bookmarks::Bookmarks", "Del", 0));
        btnClear->setText(QApplication::translate("Bookmarks::Bookmarks", "Clear", 0));
    } // retranslateUi

};

} // namespace Bookmarks

namespace Bookmarks {
namespace Ui {
    class Bookmarks: public Ui_Bookmarks {};
} // namespace Ui
} // namespace Bookmarks

#endif // UI_BOOKMARKS_H
