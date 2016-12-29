/********************************************************************************
** Form generated from reading UI file 'DialogProcessProperties.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGPROCESSPROPERTIES_H
#define UI_DIALOGPROCESSPROPERTIES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QTableWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

namespace ProcessProperties {

class Ui_DialogProcessProperties
{
public:
    QGridLayout *gridLayout_7;
    QDialogButtonBox *buttonBox;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLineEdit *editImage;
    QToolButton *btnImage;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *editCommand;
    QLabel *label_2;
    QLineEdit *editCurrentDirectory;
    QLabel *label_3;
    QLineEdit *editStarted;
    QLabel *label_5;
    QLineEdit *editParent;
    QSpacerItem *verticalSpacer;
    QToolButton *btnParent;
    QWidget *tab_2;
    QWidget *tab_3;
    QWidget *tab_4;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btnRefreshThreads;
    QTableView *threadTable;
    QWidget *tab_6;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnRefreshModules;
    QTableWidget *tableModules;
    QWidget *tab_7;
    QGridLayout *gridLayout_4;
    QPushButton *btnStrings;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnRefreshMemory;
    QTableWidget *tableMemory;
    QWidget *tab_8;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnRefreshEnvironment;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *txtSearchEnvironment;
    QTableWidget *tableEnvironment;
    QWidget *tab_9;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btnRefreshHandles;
    QTableWidget *tableHandles;

    void setupUi(QDialog *DialogProcessProperties)
    {
        if (DialogProcessProperties->objectName().isEmpty())
            DialogProcessProperties->setObjectName(QString::fromUtf8("DialogProcessProperties"));
        DialogProcessProperties->resize(714, 599);
        gridLayout_7 = new QGridLayout(DialogProcessProperties);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        buttonBox = new QDialogButtonBox(DialogProcessProperties);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout_7->addWidget(buttonBox, 1, 0, 1, 1);

        tabWidget = new QTabWidget(DialogProcessProperties);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        editImage = new QLineEdit(groupBox);
        editImage->setObjectName(QString::fromUtf8("editImage"));
        editImage->setReadOnly(true);

        gridLayout_2->addWidget(editImage, 1, 0, 1, 1);

        btnImage = new QToolButton(groupBox);
        btnImage->setObjectName(QString::fromUtf8("btnImage"));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("document-open")));
        btnImage->setIcon(icon);
        btnImage->setArrowType(Qt::NoArrow);

        gridLayout_2->addWidget(btnImage, 1, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        editCommand = new QLineEdit(groupBox_2);
        editCommand->setObjectName(QString::fromUtf8("editCommand"));
        editCommand->setReadOnly(true);

        gridLayout->addWidget(editCommand, 0, 1, 1, 2);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        editCurrentDirectory = new QLineEdit(groupBox_2);
        editCurrentDirectory->setObjectName(QString::fromUtf8("editCurrentDirectory"));
        editCurrentDirectory->setReadOnly(true);

        gridLayout->addWidget(editCurrentDirectory, 1, 1, 1, 2);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        editStarted = new QLineEdit(groupBox_2);
        editStarted->setObjectName(QString::fromUtf8("editStarted"));
        editStarted->setReadOnly(true);

        gridLayout->addWidget(editStarted, 2, 1, 1, 2);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        editParent = new QLineEdit(groupBox_2);
        editParent->setObjectName(QString::fromUtf8("editParent"));
        editParent->setReadOnly(true);

        gridLayout->addWidget(editParent, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 236, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 1, 1, 1);

        btnParent = new QToolButton(groupBox_2);
        btnParent->setObjectName(QString::fromUtf8("btnParent"));
        btnParent->setIcon(icon);

        gridLayout->addWidget(btnParent, 3, 2, 1, 1);


        verticalLayout_2->addWidget(groupBox_2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_5 = new QGridLayout(tab_4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalSpacer_5 = new QSpacerItem(604, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        btnRefreshThreads = new QPushButton(tab_4);
        btnRefreshThreads->setObjectName(QString::fromUtf8("btnRefreshThreads"));
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("view-refresh")));
        btnRefreshThreads->setIcon(icon1);

        gridLayout_5->addWidget(btnRefreshThreads, 0, 1, 1, 1);

        threadTable = new QTableView(tab_4);
        threadTable->setObjectName(QString::fromUtf8("threadTable"));
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        font.setPointSize(8);
        threadTable->setFont(font);
        threadTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        threadTable->setAlternatingRowColors(true);
        threadTable->setSelectionMode(QAbstractItemView::SingleSelection);
        threadTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        threadTable->setSortingEnabled(true);
        threadTable->horizontalHeader()->setStretchLastSection(true);
        threadTable->verticalHeader()->setVisible(false);

        gridLayout_5->addWidget(threadTable, 1, 0, 1, 2);

        tabWidget->addTab(tab_4, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        gridLayout_3 = new QGridLayout(tab_6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(610, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        btnRefreshModules = new QPushButton(tab_6);
        btnRefreshModules->setObjectName(QString::fromUtf8("btnRefreshModules"));
        btnRefreshModules->setIcon(icon1);

        gridLayout_3->addWidget(btnRefreshModules, 0, 1, 1, 1);

        tableModules = new QTableWidget(tab_6);
        if (tableModules->columnCount() < 2)
            tableModules->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableModules->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableModules->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableModules->setObjectName(QString::fromUtf8("tableModules"));
        tableModules->setFont(font);
        tableModules->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableModules->setAlternatingRowColors(true);
        tableModules->setSelectionMode(QAbstractItemView::SingleSelection);
        tableModules->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableModules->setSortingEnabled(true);
        tableModules->horizontalHeader()->setStretchLastSection(true);
        tableModules->verticalHeader()->setVisible(false);

        gridLayout_3->addWidget(tableModules, 1, 0, 1, 2);

        tabWidget->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        gridLayout_4 = new QGridLayout(tab_7);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        btnStrings = new QPushButton(tab_7);
        btnStrings->setObjectName(QString::fromUtf8("btnStrings"));

        gridLayout_4->addWidget(btnStrings, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(467, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 1, 1, 1);

        btnRefreshMemory = new QPushButton(tab_7);
        btnRefreshMemory->setObjectName(QString::fromUtf8("btnRefreshMemory"));
        btnRefreshMemory->setIcon(icon1);

        gridLayout_4->addWidget(btnRefreshMemory, 0, 2, 1, 1);

        tableMemory = new QTableWidget(tab_7);
        if (tableMemory->columnCount() < 4)
            tableMemory->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableMemory->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableMemory->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableMemory->setHorizontalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableMemory->setHorizontalHeaderItem(3, __qtablewidgetitem5);
        tableMemory->setObjectName(QString::fromUtf8("tableMemory"));
        tableMemory->setFont(font);
        tableMemory->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableMemory->setAlternatingRowColors(true);
        tableMemory->setSelectionMode(QAbstractItemView::SingleSelection);
        tableMemory->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableMemory->setSortingEnabled(true);
        tableMemory->horizontalHeader()->setStretchLastSection(true);
        tableMemory->verticalHeader()->setVisible(false);

        gridLayout_4->addWidget(tableMemory, 1, 0, 1, 3);

        tabWidget->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        verticalLayout = new QVBoxLayout(tab_8);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(610, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        btnRefreshEnvironment = new QPushButton(tab_8);
        btnRefreshEnvironment->setObjectName(QString::fromUtf8("btnRefreshEnvironment"));
        btnRefreshEnvironment->setIcon(icon1);

        horizontalLayout_2->addWidget(btnRefreshEnvironment);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(tab_8);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        txtSearchEnvironment = new QLineEdit(tab_8);
        txtSearchEnvironment->setObjectName(QString::fromUtf8("txtSearchEnvironment"));

        horizontalLayout->addWidget(txtSearchEnvironment);


        verticalLayout->addLayout(horizontalLayout);

        tableEnvironment = new QTableWidget(tab_8);
        if (tableEnvironment->columnCount() < 2)
            tableEnvironment->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableEnvironment->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableEnvironment->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        tableEnvironment->setObjectName(QString::fromUtf8("tableEnvironment"));
        tableEnvironment->setFont(font);
        tableEnvironment->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableEnvironment->setAlternatingRowColors(true);
        tableEnvironment->setSelectionMode(QAbstractItemView::SingleSelection);
        tableEnvironment->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableEnvironment->setSortingEnabled(true);
        tableEnvironment->horizontalHeader()->setStretchLastSection(true);
        tableEnvironment->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableEnvironment);

        tabWidget->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        verticalLayout_3 = new QVBoxLayout(tab_9);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        btnRefreshHandles = new QPushButton(tab_9);
        btnRefreshHandles->setObjectName(QString::fromUtf8("btnRefreshHandles"));
        btnRefreshHandles->setIcon(icon1);

        horizontalLayout_3->addWidget(btnRefreshHandles);


        verticalLayout_3->addLayout(horizontalLayout_3);

        tableHandles = new QTableWidget(tab_9);
        if (tableHandles->columnCount() < 3)
            tableHandles->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableHandles->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableHandles->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableHandles->setHorizontalHeaderItem(2, __qtablewidgetitem10);
        tableHandles->setObjectName(QString::fromUtf8("tableHandles"));
        tableHandles->setFont(font);
        tableHandles->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableHandles->setAlternatingRowColors(true);
        tableHandles->setSelectionMode(QAbstractItemView::SingleSelection);
        tableHandles->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableHandles->setSortingEnabled(true);
        tableHandles->horizontalHeader()->setStretchLastSection(true);
        tableHandles->verticalHeader()->setVisible(false);

        verticalLayout_3->addWidget(tableHandles);

        tabWidget->addTab(tab_9, QString());

        gridLayout_7->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(DialogProcessProperties);
        QObject::connect(buttonBox, SIGNAL(clicked(QAbstractButton*)), DialogProcessProperties, SLOT(accept()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DialogProcessProperties);
    } // setupUi

    void retranslateUi(QDialog *DialogProcessProperties)
    {
        DialogProcessProperties->setWindowTitle(QApplication::translate("ProcessProperties::DialogProcessProperties", "Process Properties", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("ProcessProperties::DialogProcessProperties", "File", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ProcessProperties::DialogProcessProperties", "Image File Name:", 0, QApplication::UnicodeUTF8));
        editImage->setText(QString());
        btnImage->setText(QApplication::translate("ProcessProperties::DialogProcessProperties", "...", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("ProcessProperties::DialogProcessProperties", "Process", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ProcessProperties::DialogProcessProperties", "Command Line:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ProcessProperties::DialogProcessProperties", "Current Directory:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ProcessProperties::DialogProcessProperties", "Started:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ProcessProperties::DialogProcessProperties", "Parent:", 0, QApplication::UnicodeUTF8));
        btnParent->setText(QApplication::translate("ProcessProperties::DialogProcessProperties", "...", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ProcessProperties::DialogProcessProperties", "General", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ProcessProperties::DialogProcessProperties", "Statistics", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("ProcessProperties::DialogProcessProperties", "Performance", 0, QApplication::UnicodeUTF8));
        btnRefreshThreads->setText(QApplication::translate("ProcessProperties::DialogProcessProperties", "Refresh", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("ProcessProperties::DialogProcessProperties", "Threads", 0, QApplication::UnicodeUTF8));
        btnRefreshModules->setText(QApplication::translate("ProcessProperties::DialogProcessProperties", "Refresh", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableModules->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ProcessProperties::DialogProcessProperties", "Base Address", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableModules->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ProcessProperties::DialogProcessProperties", "Name", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("ProcessProperties::DialogProcessProperties", "Modules", 0, QApplication::UnicodeUTF8));
        btnStrings->setText(QApplication::translate("ProcessProperties::DialogProcessProperties", "Strings", 0, QApplication::UnicodeUTF8));
        btnRefreshMemory->setText(QApplication::translate("ProcessProperties::DialogProcessProperties", "Refresh", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableMemory->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("ProcessProperties::DialogProcessProperties", "Address", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableMemory->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("ProcessProperties::DialogProcessProperties", "Size", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableMemory->horizontalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("ProcessProperties::DialogProcessProperties", "Protection", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableMemory->horizontalHeaderItem(3);
        ___qtablewidgetitem5->setText(QApplication::translate("ProcessProperties::DialogProcessProperties", "Name", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("ProcessProperties::DialogProcessProperties", "Memory", 0, QApplication::UnicodeUTF8));
        btnRefreshEnvironment->setText(QApplication::translate("ProcessProperties::DialogProcessProperties", "Refresh", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ProcessProperties::DialogProcessProperties", "Filter", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableEnvironment->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("ProcessProperties::DialogProcessProperties", "Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableEnvironment->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("ProcessProperties::DialogProcessProperties", "Value", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QApplication::translate("ProcessProperties::DialogProcessProperties", "Environment", 0, QApplication::UnicodeUTF8));
        btnRefreshHandles->setText(QApplication::translate("ProcessProperties::DialogProcessProperties", "Refresh", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tableHandles->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("ProcessProperties::DialogProcessProperties", "Type", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = tableHandles->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("ProcessProperties::DialogProcessProperties", "Handle", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = tableHandles->horizontalHeaderItem(2);
        ___qtablewidgetitem10->setText(QApplication::translate("ProcessProperties::DialogProcessProperties", "Name", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_9), QApplication::translate("ProcessProperties::DialogProcessProperties", "Handles", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace ProcessProperties

namespace ProcessProperties {
namespace Ui {
    class DialogProcessProperties: public Ui_DialogProcessProperties {};
} // namespace Ui
} // namespace ProcessProperties

#endif // UI_DIALOGPROCESSPROPERTIES_H
