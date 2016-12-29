/********************************************************************************
** Form generated from reading UI file 'DialogOpcodes.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGOPCODES_H
#define UI_DIALOGOPCODES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

namespace OpcodeSearcher {

class Ui_DialogOpcodes
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout;
    QRadioButton *radioButton;
    QComboBox *comboBox;
    QSpacerItem *spacerItem;
    QLabel *label_3;
    QLineEdit *txtSearch;
    QTableView *tableView;
    QLabel *label_2;
    QListWidget *listWidget;
    QHBoxLayout *hboxLayout;
    QPushButton *btnClose;
    QPushButton *btnHelp;
    QSpacerItem *spacerItem1;
    QPushButton *btnFind;
    QProgressBar *progressBar;

    void setupUi(QDialog *DialogOpcodes)
    {
        if (DialogOpcodes->objectName().isEmpty())
            DialogOpcodes->setObjectName(QStringLiteral("DialogOpcodes"));
        DialogOpcodes->resize(691, 456);
        gridLayout = new QGridLayout(DialogOpcodes);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(DialogOpcodes);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        groupBox = new QGroupBox(DialogOpcodes);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        vboxLayout = new QVBoxLayout(groupBox);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setChecked(true);

        vboxLayout->addWidget(radioButton);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        vboxLayout->addWidget(comboBox);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);


        gridLayout->addWidget(groupBox, 0, 2, 3, 1);

        label_3 = new QLabel(DialogOpcodes);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        txtSearch = new QLineEdit(DialogOpcodes);
        txtSearch->setObjectName(QStringLiteral("txtSearch"));

        gridLayout->addWidget(txtSearch, 1, 1, 1, 1);

        tableView = new QTableView(DialogOpcodes);
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

        gridLayout->addWidget(tableView, 2, 0, 1, 2);

        label_2 = new QLabel(DialogOpcodes);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        listWidget = new QListWidget(DialogOpcodes);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setFont(font);
        listWidget->setAlternatingRowColors(true);

        gridLayout->addWidget(listWidget, 4, 0, 1, 3);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        btnClose = new QPushButton(DialogOpcodes);
        btnClose->setObjectName(QStringLiteral("btnClose"));
        QIcon icon(QIcon::fromTheme(QStringLiteral("dialog-close")));
        btnClose->setIcon(icon);

        hboxLayout->addWidget(btnClose);

        btnHelp = new QPushButton(DialogOpcodes);
        btnHelp->setObjectName(QStringLiteral("btnHelp"));
        btnHelp->setEnabled(false);
        QIcon icon1(QIcon::fromTheme(QStringLiteral("help-browser")));
        btnHelp->setIcon(icon1);

        hboxLayout->addWidget(btnHelp);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        btnFind = new QPushButton(DialogOpcodes);
        btnFind->setObjectName(QStringLiteral("btnFind"));
        QIcon icon2(QIcon::fromTheme(QStringLiteral("edit-find")));
        btnFind->setIcon(icon2);

        hboxLayout->addWidget(btnFind);


        gridLayout->addLayout(hboxLayout, 5, 0, 1, 3);

        progressBar = new QProgressBar(DialogOpcodes);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);
        progressBar->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(progressBar, 6, 0, 1, 3);

        QWidget::setTabOrder(txtSearch, tableView);
        QWidget::setTabOrder(tableView, radioButton);
        QWidget::setTabOrder(radioButton, comboBox);
        QWidget::setTabOrder(comboBox, listWidget);
        QWidget::setTabOrder(listWidget, btnClose);
        QWidget::setTabOrder(btnClose, btnHelp);
        QWidget::setTabOrder(btnHelp, btnFind);

        retranslateUi(DialogOpcodes);
        QObject::connect(btnClose, SIGNAL(clicked()), DialogOpcodes, SLOT(reject()));

        btnFind->setDefault(true);


        QMetaObject::connectSlotsByName(DialogOpcodes);
    } // setupUi

    void retranslateUi(QDialog *DialogOpcodes)
    {
        DialogOpcodes->setWindowTitle(QApplication::translate("OpcodeSearcher::DialogOpcodes", "Opcode Search", 0));
        label->setText(QApplication::translate("OpcodeSearcher::DialogOpcodes", "Regions To Search:", 0));
        groupBox->setTitle(QApplication::translate("OpcodeSearcher::DialogOpcodes", "What To Search For", 0));
        radioButton->setText(QApplication::translate("OpcodeSearcher::DialogOpcodes", "&Jump Equivalent", 0));
        label_3->setText(QApplication::translate("OpcodeSearcher::DialogOpcodes", "Filter", 0));
        label_2->setText(QApplication::translate("OpcodeSearcher::DialogOpcodes", "Results:", 0));
        btnClose->setText(QApplication::translate("OpcodeSearcher::DialogOpcodes", "&Close", 0));
        btnHelp->setText(QApplication::translate("OpcodeSearcher::DialogOpcodes", "&Help", 0));
        btnFind->setText(QApplication::translate("OpcodeSearcher::DialogOpcodes", "&Find", 0));
    } // retranslateUi

};

} // namespace OpcodeSearcher

namespace OpcodeSearcher {
namespace Ui {
    class DialogOpcodes: public Ui_DialogOpcodes {};
} // namespace Ui
} // namespace OpcodeSearcher

#endif // UI_DIALOGOPCODES_H
