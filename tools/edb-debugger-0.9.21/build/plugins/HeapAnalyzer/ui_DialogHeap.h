/********************************************************************************
** Form generated from reading UI file 'DialogHeap.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGHEAP_H
#define UI_DIALOGHEAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

namespace HeapAnalyzer {

class Ui_DialogHeap
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *label_2;
    QTableView *tableView;
    QHBoxLayout *hboxLayout;
    QPushButton *btnClose;
    QPushButton *btnHelp;
    QSpacerItem *spacerItem;
    QPushButton *btnGraph;
    QPushButton *btnFind;
    QProgressBar *progressBar;

    void setupUi(QDialog *DialogHeap)
    {
        if (DialogHeap->objectName().isEmpty())
            DialogHeap->setObjectName(QStringLiteral("DialogHeap"));
        DialogHeap->resize(707, 486);
        vboxLayout = new QVBoxLayout(DialogHeap);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        label_2 = new QLabel(DialogHeap);
        label_2->setObjectName(QStringLiteral("label_2"));

        vboxLayout->addWidget(label_2);

        tableView = new QTableView(DialogHeap);
        tableView->setObjectName(QStringLiteral("tableView"));
        QFont font;
        font.setFamily(QStringLiteral("Monospace"));
        tableView->setFont(font);
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::ContiguousSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setSortingEnabled(true);
        tableView->horizontalHeader()->setStretchLastSection(true);

        vboxLayout->addWidget(tableView);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        btnClose = new QPushButton(DialogHeap);
        btnClose->setObjectName(QStringLiteral("btnClose"));
        QIcon icon(QIcon::fromTheme(QStringLiteral("dialog-close")));
        btnClose->setIcon(icon);

        hboxLayout->addWidget(btnClose);

        btnHelp = new QPushButton(DialogHeap);
        btnHelp->setObjectName(QStringLiteral("btnHelp"));
        btnHelp->setEnabled(false);
        QIcon icon1(QIcon::fromTheme(QStringLiteral("help-browser")));
        btnHelp->setIcon(icon1);

        hboxLayout->addWidget(btnHelp);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        btnGraph = new QPushButton(DialogHeap);
        btnGraph->setObjectName(QStringLiteral("btnGraph"));

        hboxLayout->addWidget(btnGraph);

        btnFind = new QPushButton(DialogHeap);
        btnFind->setObjectName(QStringLiteral("btnFind"));
        QIcon icon2(QIcon::fromTheme(QStringLiteral("edit-find")));
        btnFind->setIcon(icon2);

        hboxLayout->addWidget(btnFind);


        vboxLayout->addLayout(hboxLayout);

        progressBar = new QProgressBar(DialogHeap);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);
        progressBar->setOrientation(Qt::Horizontal);

        vboxLayout->addWidget(progressBar);

        QWidget::setTabOrder(tableView, btnClose);
        QWidget::setTabOrder(btnClose, btnHelp);
        QWidget::setTabOrder(btnHelp, btnGraph);
        QWidget::setTabOrder(btnGraph, btnFind);

        retranslateUi(DialogHeap);
        QObject::connect(btnClose, SIGNAL(clicked()), DialogHeap, SLOT(reject()));

        btnFind->setDefault(true);


        QMetaObject::connectSlotsByName(DialogHeap);
    } // setupUi

    void retranslateUi(QDialog *DialogHeap)
    {
        DialogHeap->setWindowTitle(QApplication::translate("HeapAnalyzer::DialogHeap", "Heap Analyzer", 0));
        label_2->setText(QApplication::translate("HeapAnalyzer::DialogHeap", "Results:", 0));
        btnClose->setText(QApplication::translate("HeapAnalyzer::DialogHeap", "&Close", 0));
        btnHelp->setText(QApplication::translate("HeapAnalyzer::DialogHeap", "&Help", 0));
        btnGraph->setText(QApplication::translate("HeapAnalyzer::DialogHeap", "&Graph Selected Heap Blocks", 0));
        btnFind->setText(QApplication::translate("HeapAnalyzer::DialogHeap", "&Find", 0));
    } // retranslateUi

};

} // namespace HeapAnalyzer

namespace HeapAnalyzer {
namespace Ui {
    class DialogHeap: public Ui_DialogHeap {};
} // namespace Ui
} // namespace HeapAnalyzer

#endif // UI_DIALOGHEAP_H
