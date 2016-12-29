/********************************************************************************
** Form generated from reading UI file 'DialogPlugins.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGPLUGINS_H
#define UI_DIALOGPLUGINS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_DialogPlugins
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *button_box;
    QTableView *plugins_table;

    void setupUi(QDialog *DialogPlugins)
    {
        if (DialogPlugins->objectName().isEmpty())
            DialogPlugins->setObjectName(QStringLiteral("DialogPlugins"));
        DialogPlugins->resize(791, 350);
        gridLayout = new QGridLayout(DialogPlugins);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        button_box = new QDialogButtonBox(DialogPlugins);
        button_box->setObjectName(QStringLiteral("button_box"));
        button_box->setOrientation(Qt::Horizontal);
        button_box->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(button_box, 1, 0, 1, 1);

        plugins_table = new QTableView(DialogPlugins);
        plugins_table->setObjectName(QStringLiteral("plugins_table"));
        plugins_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        plugins_table->setAlternatingRowColors(true);
        plugins_table->setSelectionMode(QAbstractItemView::SingleSelection);
        plugins_table->setSelectionBehavior(QAbstractItemView::SelectRows);
        plugins_table->setSortingEnabled(true);
        plugins_table->horizontalHeader()->setStretchLastSection(true);
        plugins_table->verticalHeader()->setVisible(false);

        gridLayout->addWidget(plugins_table, 0, 0, 1, 1);


        retranslateUi(DialogPlugins);
        QObject::connect(button_box, SIGNAL(accepted()), DialogPlugins, SLOT(accept()));
        QObject::connect(button_box, SIGNAL(rejected()), DialogPlugins, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogPlugins);
    } // setupUi

    void retranslateUi(QDialog *DialogPlugins)
    {
        DialogPlugins->setWindowTitle(QApplication::translate("DialogPlugins", "Plugins", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogPlugins: public Ui_DialogPlugins {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGPLUGINS_H
