/********************************************************************************
** Form generated from reading UI file 'DialogROPTool.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGROPTOOL_H
#define UI_DIALOGROPTOOL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>

namespace ROPTool {

class Ui_DialogROPTool
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *txtSearch;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *chkShowALU;
    QCheckBox *chkShowStack;
    QCheckBox *chkShowLogic;
    QCheckBox *chkShowData;
    QCheckBox *chkShowOther;
    QTableView *tableView;
    QCheckBox *checkUnique;
    QLabel *label_2;
    QListView *listView;
    QHBoxLayout *hboxLayout;
    QPushButton *btnClose;
    QPushButton *btnHelp;
    QSpacerItem *spacerItem;
    QPushButton *btnFind;
    QProgressBar *progressBar;

    void setupUi(QDialog *DialogROPTool)
    {
        if (DialogROPTool->objectName().isEmpty())
            DialogROPTool->setObjectName(QString::fromUtf8("DialogROPTool"));
        DialogROPTool->resize(691, 449);
        gridLayout = new QGridLayout(DialogROPTool);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(DialogROPTool);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        label_3 = new QLabel(DialogROPTool);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        txtSearch = new QLineEdit(DialogROPTool);
        txtSearch->setObjectName(QString::fromUtf8("txtSearch"));

        gridLayout->addWidget(txtSearch, 1, 1, 1, 1);

        groupBox = new QGroupBox(DialogROPTool);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        chkShowALU = new QCheckBox(groupBox);
        chkShowALU->setObjectName(QString::fromUtf8("chkShowALU"));
        chkShowALU->setChecked(true);

        verticalLayout->addWidget(chkShowALU);

        chkShowStack = new QCheckBox(groupBox);
        chkShowStack->setObjectName(QString::fromUtf8("chkShowStack"));
        chkShowStack->setChecked(true);

        verticalLayout->addWidget(chkShowStack);

        chkShowLogic = new QCheckBox(groupBox);
        chkShowLogic->setObjectName(QString::fromUtf8("chkShowLogic"));
        chkShowLogic->setChecked(true);

        verticalLayout->addWidget(chkShowLogic);

        chkShowData = new QCheckBox(groupBox);
        chkShowData->setObjectName(QString::fromUtf8("chkShowData"));
        chkShowData->setChecked(true);

        verticalLayout->addWidget(chkShowData);

        chkShowOther = new QCheckBox(groupBox);
        chkShowOther->setObjectName(QString::fromUtf8("chkShowOther"));
        chkShowOther->setChecked(true);

        verticalLayout->addWidget(chkShowOther);


        gridLayout->addWidget(groupBox, 1, 2, 2, 1);

        tableView = new QTableView(DialogROPTool);
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

        gridLayout->addWidget(tableView, 2, 0, 2, 2);

        checkUnique = new QCheckBox(DialogROPTool);
        checkUnique->setObjectName(QString::fromUtf8("checkUnique"));
        checkUnique->setChecked(true);

        gridLayout->addWidget(checkUnique, 3, 2, 1, 1);

        label_2 = new QLabel(DialogROPTool);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        listView = new QListView(DialogROPTool);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setFont(font);
        listView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listView->setAlternatingRowColors(true);

        gridLayout->addWidget(listView, 5, 0, 1, 3);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        btnClose = new QPushButton(DialogROPTool);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("dialog-close")));
        btnClose->setIcon(icon);

        hboxLayout->addWidget(btnClose);

        btnHelp = new QPushButton(DialogROPTool);
        btnHelp->setObjectName(QString::fromUtf8("btnHelp"));
        btnHelp->setEnabled(false);
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("help-browser")));
        btnHelp->setIcon(icon1);

        hboxLayout->addWidget(btnHelp);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        btnFind = new QPushButton(DialogROPTool);
        btnFind->setObjectName(QString::fromUtf8("btnFind"));
        QIcon icon2(QIcon::fromTheme(QString::fromUtf8("edit-find")));
        btnFind->setIcon(icon2);
        btnFind->setDefault(true);

        hboxLayout->addWidget(btnFind);


        gridLayout->addLayout(hboxLayout, 6, 0, 1, 3);

        progressBar = new QProgressBar(DialogROPTool);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);
        progressBar->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(progressBar, 7, 0, 1, 3);

        QWidget::setTabOrder(txtSearch, tableView);
        QWidget::setTabOrder(tableView, listView);
        QWidget::setTabOrder(listView, btnClose);
        QWidget::setTabOrder(btnClose, btnHelp);
        QWidget::setTabOrder(btnHelp, btnFind);

        retranslateUi(DialogROPTool);
        QObject::connect(btnClose, SIGNAL(clicked()), DialogROPTool, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogROPTool);
    } // setupUi

    void retranslateUi(QDialog *DialogROPTool)
    {
        DialogROPTool->setWindowTitle(QApplication::translate("ROPTool::DialogROPTool", "ROP Gadget Search", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ROPTool::DialogROPTool", "Regions To Search:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ROPTool::DialogROPTool", "Filter", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("ROPTool::DialogROPTool", "Gadets to Display", 0, QApplication::UnicodeUTF8));
        chkShowALU->setText(QApplication::translate("ROPTool::DialogROPTool", "ALU", 0, QApplication::UnicodeUTF8));
        chkShowStack->setText(QApplication::translate("ROPTool::DialogROPTool", "Stack", 0, QApplication::UnicodeUTF8));
        chkShowLogic->setText(QApplication::translate("ROPTool::DialogROPTool", "Logic", 0, QApplication::UnicodeUTF8));
        chkShowData->setText(QApplication::translate("ROPTool::DialogROPTool", "Data", 0, QApplication::UnicodeUTF8));
        chkShowOther->setText(QApplication::translate("ROPTool::DialogROPTool", "Other", 0, QApplication::UnicodeUTF8));
        checkUnique->setText(QApplication::translate("ROPTool::DialogROPTool", "Unique Gadgets Only", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ROPTool::DialogROPTool", "Results:", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("ROPTool::DialogROPTool", "&Close", 0, QApplication::UnicodeUTF8));
        btnHelp->setText(QApplication::translate("ROPTool::DialogROPTool", "&Help", 0, QApplication::UnicodeUTF8));
        btnFind->setText(QApplication::translate("ROPTool::DialogROPTool", "&Find", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace ROPTool

namespace ROPTool {
namespace Ui {
    class DialogROPTool: public Ui_DialogROPTool {};
} // namespace Ui
} // namespace ROPTool

#endif // UI_DIALOGROPTOOL_H
