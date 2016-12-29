/********************************************************************************
** Form generated from reading UI file 'DialogHeap.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGHEAP_H
#define UI_DIALOGHEAP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>

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
            DialogHeap->setObjectName(QString::fromUtf8("DialogHeap"));
        DialogHeap->resize(707, 486);
        vboxLayout = new QVBoxLayout(DialogHeap);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        label_2 = new QLabel(DialogHeap);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        vboxLayout->addWidget(label_2);

        tableView = new QTableView(DialogHeap);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        tableView->setFont(font);
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::ContiguousSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setSortingEnabled(true);
        tableView->horizontalHeader()->setStretchLastSection(true);

        vboxLayout->addWidget(tableView);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        btnClose = new QPushButton(DialogHeap);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("dialog-close")));
        btnClose->setIcon(icon);

        hboxLayout->addWidget(btnClose);

        btnHelp = new QPushButton(DialogHeap);
        btnHelp->setObjectName(QString::fromUtf8("btnHelp"));
        btnHelp->setEnabled(false);
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("help-browser")));
        btnHelp->setIcon(icon1);

        hboxLayout->addWidget(btnHelp);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        btnGraph = new QPushButton(DialogHeap);
        btnGraph->setObjectName(QString::fromUtf8("btnGraph"));

        hboxLayout->addWidget(btnGraph);

        btnFind = new QPushButton(DialogHeap);
        btnFind->setObjectName(QString::fromUtf8("btnFind"));
        QIcon icon2(QIcon::fromTheme(QString::fromUtf8("edit-find")));
        btnFind->setIcon(icon2);
        btnFind->setDefault(true);

        hboxLayout->addWidget(btnFind);


        vboxLayout->addLayout(hboxLayout);

        progressBar = new QProgressBar(DialogHeap);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);
        progressBar->setOrientation(Qt::Horizontal);

        vboxLayout->addWidget(progressBar);

        QWidget::setTabOrder(tableView, btnClose);
        QWidget::setTabOrder(btnClose, btnHelp);
        QWidget::setTabOrder(btnHelp, btnGraph);
        QWidget::setTabOrder(btnGraph, btnFind);

        retranslateUi(DialogHeap);
        QObject::connect(btnClose, SIGNAL(clicked()), DialogHeap, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogHeap);
    } // setupUi

    void retranslateUi(QDialog *DialogHeap)
    {
        DialogHeap->setWindowTitle(QApplication::translate("HeapAnalyzer::DialogHeap", "Heap Analyzer", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("HeapAnalyzer::DialogHeap", "Results:", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("HeapAnalyzer::DialogHeap", "&Close", 0, QApplication::UnicodeUTF8));
        btnHelp->setText(QApplication::translate("HeapAnalyzer::DialogHeap", "&Help", 0, QApplication::UnicodeUTF8));
        btnGraph->setText(QApplication::translate("HeapAnalyzer::DialogHeap", "&Graph Selected Heap Blocks", 0, QApplication::UnicodeUTF8));
        btnFind->setText(QApplication::translate("HeapAnalyzer::DialogHeap", "&Find", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace HeapAnalyzer

namespace HeapAnalyzer {
namespace Ui {
    class DialogHeap: public Ui_DialogHeap {};
} // namespace Ui
} // namespace HeapAnalyzer

#endif // UI_DIALOGHEAP_H
