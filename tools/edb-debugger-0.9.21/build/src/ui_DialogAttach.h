/********************************************************************************
** Form generated from reading UI file 'DialogAttach.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGATTACH_H
#define UI_DIALOGATTACH_H

#include <LineEdit.h>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_DialogAttach
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    LineEdit *filter;
    QCheckBox *filter_uid;
    QDialogButtonBox *button_box;
    QTableView *processes_table;

    void setupUi(QDialog *DialogAttach)
    {
        if (DialogAttach->objectName().isEmpty())
            DialogAttach->setObjectName(QStringLiteral("DialogAttach"));
        DialogAttach->resize(600, 272);
        DialogAttach->setSizeGripEnabled(true);
        DialogAttach->setModal(true);
        gridLayout = new QGridLayout(DialogAttach);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(DialogAttach);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        filter = new LineEdit(DialogAttach);
        filter->setObjectName(QStringLiteral("filter"));

        gridLayout->addWidget(filter, 0, 1, 1, 1);

        filter_uid = new QCheckBox(DialogAttach);
        filter_uid->setObjectName(QStringLiteral("filter_uid"));

        gridLayout->addWidget(filter_uid, 0, 2, 1, 1);

        button_box = new QDialogButtonBox(DialogAttach);
        button_box->setObjectName(QStringLiteral("button_box"));
        button_box->setOrientation(Qt::Horizontal);
        button_box->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(button_box, 2, 0, 1, 3);

        processes_table = new QTableView(DialogAttach);
        processes_table->setObjectName(QStringLiteral("processes_table"));
        QFont font;
        font.setFamily(QStringLiteral("Monospace"));
        processes_table->setFont(font);
        processes_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        processes_table->setAlternatingRowColors(true);
        processes_table->setSelectionMode(QAbstractItemView::SingleSelection);
        processes_table->setSelectionBehavior(QAbstractItemView::SelectRows);
        processes_table->setSortingEnabled(true);
        processes_table->horizontalHeader()->setStretchLastSection(true);
        processes_table->verticalHeader()->setVisible(false);

        gridLayout->addWidget(processes_table, 1, 0, 1, 3);

        QWidget::setTabOrder(filter, filter_uid);
        QWidget::setTabOrder(filter_uid, processes_table);
        QWidget::setTabOrder(processes_table, button_box);

        retranslateUi(DialogAttach);
        QObject::connect(button_box, SIGNAL(accepted()), DialogAttach, SLOT(accept()));
        QObject::connect(button_box, SIGNAL(rejected()), DialogAttach, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogAttach);
    } // setupUi

    void retranslateUi(QDialog *DialogAttach)
    {
        DialogAttach->setWindowTitle(QApplication::translate("DialogAttach", "Attach To Process", 0));
        label->setText(QApplication::translate("DialogAttach", "Filter", 0));
        filter_uid->setText(QApplication::translate("DialogAttach", "Only Show Entries For My UID", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogAttach: public Ui_DialogAttach {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGATTACH_H
