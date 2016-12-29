/********************************************************************************
** Form generated from reading UI file 'DialogMemoryRegions.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMEMORYREGIONS_H
#define UI_DIALOGMEMORYREGIONS_H

#include <LineEdit.h>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_DialogMemoryRegions
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    LineEdit *filter;
    QTableView *regions_table;
    QDialogButtonBox *button_box;

    void setupUi(QDialog *DialogMemoryRegions)
    {
        if (DialogMemoryRegions->objectName().isEmpty())
            DialogMemoryRegions->setObjectName(QStringLiteral("DialogMemoryRegions"));
        DialogMemoryRegions->resize(632, 321);
        DialogMemoryRegions->setSizeGripEnabled(true);
        gridLayout = new QGridLayout(DialogMemoryRegions);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(DialogMemoryRegions);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        filter = new LineEdit(DialogMemoryRegions);
        filter->setObjectName(QStringLiteral("filter"));

        gridLayout->addWidget(filter, 0, 1, 1, 1);

        regions_table = new QTableView(DialogMemoryRegions);
        regions_table->setObjectName(QStringLiteral("regions_table"));
        QFont font;
        font.setFamily(QStringLiteral("Monospace"));
        regions_table->setFont(font);
        regions_table->setContextMenuPolicy(Qt::CustomContextMenu);
        regions_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        regions_table->setAlternatingRowColors(true);
        regions_table->setSelectionMode(QAbstractItemView::SingleSelection);
        regions_table->setSelectionBehavior(QAbstractItemView::SelectRows);
        regions_table->setSortingEnabled(true);
        regions_table->horizontalHeader()->setStretchLastSection(true);
        regions_table->verticalHeader()->setVisible(false);

        gridLayout->addWidget(regions_table, 1, 0, 1, 2);

        button_box = new QDialogButtonBox(DialogMemoryRegions);
        button_box->setObjectName(QStringLiteral("button_box"));
        button_box->setOrientation(Qt::Horizontal);
        button_box->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(button_box, 2, 0, 1, 2);

        QWidget::setTabOrder(filter, regions_table);

        retranslateUi(DialogMemoryRegions);
        QObject::connect(button_box, SIGNAL(rejected()), DialogMemoryRegions, SLOT(close()));

        QMetaObject::connectSlotsByName(DialogMemoryRegions);
    } // setupUi

    void retranslateUi(QDialog *DialogMemoryRegions)
    {
        DialogMemoryRegions->setWindowTitle(QApplication::translate("DialogMemoryRegions", "Memory Regions", 0));
        label->setText(QApplication::translate("DialogMemoryRegions", "Filter", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogMemoryRegions: public Ui_DialogMemoryRegions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMEMORYREGIONS_H
