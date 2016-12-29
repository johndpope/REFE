/********************************************************************************
** Form generated from reading UI file 'DialogThreads.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGTHREADS_H
#define UI_DIALOGTHREADS_H

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

class Ui_DialogThreads
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *button_box;
    QTableView *thread_table;

    void setupUi(QDialog *DialogThreads)
    {
        if (DialogThreads->objectName().isEmpty())
            DialogThreads->setObjectName(QStringLiteral("DialogThreads"));
        DialogThreads->resize(945, 362);
        gridLayout = new QGridLayout(DialogThreads);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        button_box = new QDialogButtonBox(DialogThreads);
        button_box->setObjectName(QStringLiteral("button_box"));
        button_box->setOrientation(Qt::Horizontal);
        button_box->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(button_box, 1, 0, 1, 1);

        thread_table = new QTableView(DialogThreads);
        thread_table->setObjectName(QStringLiteral("thread_table"));
        QFont font;
        font.setFamily(QStringLiteral("Monospace"));
        font.setPointSize(8);
        thread_table->setFont(font);
        thread_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        thread_table->setAlternatingRowColors(true);
        thread_table->setSelectionMode(QAbstractItemView::SingleSelection);
        thread_table->setSelectionBehavior(QAbstractItemView::SelectRows);
        thread_table->setSortingEnabled(true);
        thread_table->horizontalHeader()->setStretchLastSection(true);
        thread_table->verticalHeader()->setVisible(false);

        gridLayout->addWidget(thread_table, 0, 0, 1, 1);


        retranslateUi(DialogThreads);
        QObject::connect(button_box, SIGNAL(accepted()), DialogThreads, SLOT(accept()));
        QObject::connect(button_box, SIGNAL(rejected()), DialogThreads, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogThreads);
    } // setupUi

    void retranslateUi(QDialog *DialogThreads)
    {
        DialogThreads->setWindowTitle(QApplication::translate("DialogThreads", "Threads", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogThreads: public Ui_DialogThreads {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGTHREADS_H
