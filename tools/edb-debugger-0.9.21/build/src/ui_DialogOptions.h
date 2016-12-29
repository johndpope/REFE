/********************************************************************************
** Form generated from reading UI file 'DialogOptions.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGOPTIONS_H
#define UI_DIALOGOPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "FixedFontSelector.h"

QT_BEGIN_NAMESPACE

class Ui_DialogOptions
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox_3;
    QVBoxLayout *vboxLayout1;
    QRadioButton *rdoDetach;
    QRadioButton *rdoKill;
    QRadioButton *rdoReverseCapture;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *rdoPlaceDefault;
    QRadioButton *rdoPlaceCentered;
    QRadioButton *rdoPlaceRestore;
    QSpacerItem *spacerItem;
    QWidget *tab_2;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout1;
    FixedFontSelector *dataFont;
    FixedFontSelector *disassemblyFont;
    FixedFontSelector *registerFont;
    QLabel *label_10;
    QLabel *label_9;
    QLabel *label_12;
    QLabel *label_11;
    FixedFontSelector *stackFont;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout2;
    QCheckBox *chkDataShowAddress;
    QCheckBox *chkDataShowHex;
    QCheckBox *chkDataShowAscii;
    QCheckBox *chkDataShowComments;
    QLabel *label_2;
    QComboBox *cmbDataWordWidth;
    QSpacerItem *spacerItem1;
    QLabel *label_6;
    QComboBox *cmbDataRowWidth;
    QSpacerItem *spacerItem2;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *chkAddressColon;
    QSpacerItem *verticalSpacer;
    QSpacerItem *spacerItem3;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_2;
    QVBoxLayout *vboxLayout2;
    QRadioButton *rdoBPEntry;
    QRadioButton *rdoBPMain;
    QCheckBox *chkWarnDataBreakpoint;
    QCheckBox *chkFindMain;
    QCheckBox *chkDeleteStaleSymbols;
    QCheckBox *chkDisableASLR;
    QCheckBox *chkDisableLazyBinding;
    QHBoxLayout *hboxLayout;
    QLabel *label_5;
    QSpinBox *spnMinString;
    QSpacerItem *spacerItem4;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout3;
    QCheckBox *chkTTY;
    QLabel *label;
    QLineEdit *txtTTY;
    QToolButton *btnTTY;
    QSpacerItem *spacerItem5;
    QWidget *tab_6;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *signalsMessageBoxEnable;
    QLabel *label_8;
    QListWidget *listIgnoredExceptions;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout3;
    QRadioButton *rdoSytntaxIntel;
    QRadioButton *rdoSytntaxATT;
    QCheckBox *chkZerosAreFilling;
    QCheckBox *chkUppercase;
    QCheckBox *chkSmallIntAsDecimal;
    QCheckBox *chkTabBetweenMnemonicAndOperands;
    QCheckBox *chkShowLocalModuleName;
    QCheckBox *chkShowSymbolicAddresses;
    QCheckBox *chkSimplifyRIPRelativeTargets;
    QCheckBox *chkSyntaxHighlighting;
    QSpacerItem *spacerItem6;
    QWidget *tab_5;
    QVBoxLayout *vboxLayout4;
    QGridLayout *gridLayout4;
    QLabel *label_3;
    QLineEdit *txtSymbolDir;
    QToolButton *btnSymbolDir;
    QLabel *label_4;
    QLineEdit *txtPluginDir;
    QToolButton *btnPluginDir;
    QLabel *label_7;
    QLineEdit *txtSessionDir;
    QToolButton *btnSessionDir;
    QSpacerItem *spacerItem7;
    QWidget *tab_plugins;
    QGridLayout *tab_plugins_layout;
    QLabel *label_plugins;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogOptions)
    {
        if (DialogOptions->objectName().isEmpty())
            DialogOptions->setObjectName(QStringLiteral("DialogOptions"));
        DialogOptions->resize(681, 501);
        vboxLayout = new QVBoxLayout(DialogOptions);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        tabWidget = new QTabWidget(DialogOptions);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_6 = new QVBoxLayout(tab);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        vboxLayout1 = new QVBoxLayout(groupBox_3);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        rdoDetach = new QRadioButton(groupBox_3);
        rdoDetach->setObjectName(QStringLiteral("rdoDetach"));
        rdoDetach->setChecked(true);

        vboxLayout1->addWidget(rdoDetach);

        rdoKill = new QRadioButton(groupBox_3);
        rdoKill->setObjectName(QStringLiteral("rdoKill"));

        vboxLayout1->addWidget(rdoKill);

        rdoReverseCapture = new QRadioButton(groupBox_3);
        rdoReverseCapture->setObjectName(QStringLiteral("rdoReverseCapture"));

        vboxLayout1->addWidget(rdoReverseCapture);


        verticalLayout_6->addWidget(groupBox_3);

        groupBox_6 = new QGroupBox(tab);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        verticalLayout_5 = new QVBoxLayout(groupBox_6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        rdoPlaceDefault = new QRadioButton(groupBox_6);
        rdoPlaceDefault->setObjectName(QStringLiteral("rdoPlaceDefault"));

        verticalLayout_5->addWidget(rdoPlaceDefault);

        rdoPlaceCentered = new QRadioButton(groupBox_6);
        rdoPlaceCentered->setObjectName(QStringLiteral("rdoPlaceCentered"));

        verticalLayout_5->addWidget(rdoPlaceCentered);

        rdoPlaceRestore = new QRadioButton(groupBox_6);
        rdoPlaceRestore->setObjectName(QStringLiteral("rdoPlaceRestore"));

        verticalLayout_5->addWidget(rdoPlaceRestore);


        verticalLayout_6->addWidget(groupBox_6);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(spacerItem);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout = new QGridLayout(tab_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout1 = new QGridLayout();
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        dataFont = new FixedFontSelector(tab_2);
        dataFont->setObjectName(QStringLiteral("dataFont"));

        gridLayout1->addWidget(dataFont, 1, 1, 1, 1);

        disassemblyFont = new FixedFontSelector(tab_2);
        disassemblyFont->setObjectName(QStringLiteral("disassemblyFont"));

        gridLayout1->addWidget(disassemblyFont, 3, 1, 1, 1);

        registerFont = new FixedFontSelector(tab_2);
        registerFont->setObjectName(QStringLiteral("registerFont"));

        gridLayout1->addWidget(registerFont, 2, 1, 1, 1);

        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout1->addWidget(label_10, 3, 0, 1, 1);

        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout1->addWidget(label_9, 0, 0, 1, 1);

        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout1->addWidget(label_12, 2, 0, 1, 1);

        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout1->addWidget(label_11, 1, 0, 1, 1);

        stackFont = new FixedFontSelector(tab_2);
        stackFont->setObjectName(QStringLiteral("stackFont"));

        gridLayout1->addWidget(stackFont, 0, 1, 1, 1);


        gridLayout->addLayout(gridLayout1, 0, 0, 1, 2);

        groupBox_5 = new QGroupBox(tab_2);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        gridLayout2 = new QGridLayout(groupBox_5);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        chkDataShowAddress = new QCheckBox(groupBox_5);
        chkDataShowAddress->setObjectName(QStringLiteral("chkDataShowAddress"));

        gridLayout2->addWidget(chkDataShowAddress, 0, 0, 1, 3);

        chkDataShowHex = new QCheckBox(groupBox_5);
        chkDataShowHex->setObjectName(QStringLiteral("chkDataShowHex"));

        gridLayout2->addWidget(chkDataShowHex, 1, 0, 1, 3);

        chkDataShowAscii = new QCheckBox(groupBox_5);
        chkDataShowAscii->setObjectName(QStringLiteral("chkDataShowAscii"));

        gridLayout2->addWidget(chkDataShowAscii, 2, 0, 1, 3);

        chkDataShowComments = new QCheckBox(groupBox_5);
        chkDataShowComments->setObjectName(QStringLiteral("chkDataShowComments"));

        gridLayout2->addWidget(chkDataShowComments, 3, 0, 1, 3);

        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout2->addWidget(label_2, 4, 0, 1, 1);

        cmbDataWordWidth = new QComboBox(groupBox_5);
        cmbDataWordWidth->setObjectName(QStringLiteral("cmbDataWordWidth"));

        gridLayout2->addWidget(cmbDataWordWidth, 4, 1, 1, 1);

        spacerItem1 = new QSpacerItem(321, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem1, 4, 2, 1, 1);

        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout2->addWidget(label_6, 5, 0, 1, 1);

        cmbDataRowWidth = new QComboBox(groupBox_5);
        cmbDataRowWidth->setObjectName(QStringLiteral("cmbDataRowWidth"));

        gridLayout2->addWidget(cmbDataRowWidth, 5, 1, 1, 1);

        spacerItem2 = new QSpacerItem(321, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem2, 5, 2, 1, 1);


        gridLayout->addWidget(groupBox_5, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        chkAddressColon = new QCheckBox(tab_2);
        chkAddressColon->setObjectName(QStringLiteral("chkAddressColon"));
        chkAddressColon->setChecked(true);

        verticalLayout_2->addWidget(chkAddressColon);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout_2, 1, 1, 1, 1);

        spacerItem3 = new QSpacerItem(578, 201, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem3, 2, 0, 1, 2);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_4 = new QVBoxLayout(tab_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        groupBox_2 = new QGroupBox(tab_3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        vboxLayout2 = new QVBoxLayout(groupBox_2);
        vboxLayout2->setSpacing(6);
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        rdoBPEntry = new QRadioButton(groupBox_2);
        rdoBPEntry->setObjectName(QStringLiteral("rdoBPEntry"));
        rdoBPEntry->setChecked(false);

        vboxLayout2->addWidget(rdoBPEntry);

        rdoBPMain = new QRadioButton(groupBox_2);
        rdoBPMain->setObjectName(QStringLiteral("rdoBPMain"));
        rdoBPMain->setChecked(true);

        vboxLayout2->addWidget(rdoBPMain);


        verticalLayout_4->addWidget(groupBox_2);

        chkWarnDataBreakpoint = new QCheckBox(tab_3);
        chkWarnDataBreakpoint->setObjectName(QStringLiteral("chkWarnDataBreakpoint"));

        verticalLayout_4->addWidget(chkWarnDataBreakpoint);

        chkFindMain = new QCheckBox(tab_3);
        chkFindMain->setObjectName(QStringLiteral("chkFindMain"));

        verticalLayout_4->addWidget(chkFindMain);

        chkDeleteStaleSymbols = new QCheckBox(tab_3);
        chkDeleteStaleSymbols->setObjectName(QStringLiteral("chkDeleteStaleSymbols"));

        verticalLayout_4->addWidget(chkDeleteStaleSymbols);

        chkDisableASLR = new QCheckBox(tab_3);
        chkDisableASLR->setObjectName(QStringLiteral("chkDisableASLR"));

        verticalLayout_4->addWidget(chkDisableASLR);

        chkDisableLazyBinding = new QCheckBox(tab_3);
        chkDisableLazyBinding->setObjectName(QStringLiteral("chkDisableLazyBinding"));

        verticalLayout_4->addWidget(chkDisableLazyBinding);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        hboxLayout->addWidget(label_5);

        spnMinString = new QSpinBox(tab_3);
        spnMinString->setObjectName(QStringLiteral("spnMinString"));

        hboxLayout->addWidget(spnMinString);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem4);


        verticalLayout_4->addLayout(hboxLayout);

        groupBox_4 = new QGroupBox(tab_3);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout3 = new QGridLayout(groupBox_4);
        gridLayout3->setObjectName(QStringLiteral("gridLayout3"));
        chkTTY = new QCheckBox(groupBox_4);
        chkTTY->setObjectName(QStringLiteral("chkTTY"));
        chkTTY->setChecked(true);

        gridLayout3->addWidget(chkTTY, 0, 0, 1, 3);

        label = new QLabel(groupBox_4);
        label->setObjectName(QStringLiteral("label"));

        gridLayout3->addWidget(label, 1, 0, 1, 1);

        txtTTY = new QLineEdit(groupBox_4);
        txtTTY->setObjectName(QStringLiteral("txtTTY"));

        gridLayout3->addWidget(txtTTY, 1, 1, 1, 1);

        btnTTY = new QToolButton(groupBox_4);
        btnTTY->setObjectName(QStringLiteral("btnTTY"));

        gridLayout3->addWidget(btnTTY, 1, 2, 1, 1);


        verticalLayout_4->addWidget(groupBox_4);

        spacerItem5 = new QSpacerItem(578, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(spacerItem5);

        tabWidget->addTab(tab_3, QString());
        chkDisableASLR->raise();
        chkDisableLazyBinding->raise();
        groupBox_2->raise();
        chkWarnDataBreakpoint->raise();
        chkFindMain->raise();
        groupBox_4->raise();
        chkDeleteStaleSymbols->raise();
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        verticalLayout_3 = new QVBoxLayout(tab_6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        signalsMessageBoxEnable = new QCheckBox(tab_6);
        signalsMessageBoxEnable->setObjectName(QStringLiteral("signalsMessageBoxEnable"));

        verticalLayout_3->addWidget(signalsMessageBoxEnable);

        label_8 = new QLabel(tab_6);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_3->addWidget(label_8);

        listIgnoredExceptions = new QListWidget(tab_6);
        listIgnoredExceptions->setObjectName(QStringLiteral("listIgnoredExceptions"));
        listIgnoredExceptions->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listIgnoredExceptions->setAlternatingRowColors(true);

        verticalLayout_3->addWidget(listIgnoredExceptions);

        tabWidget->addTab(tab_6, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        verticalLayout = new QVBoxLayout(tab_4);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(tab_4);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        vboxLayout3 = new QVBoxLayout(groupBox);
        vboxLayout3->setSpacing(6);
        vboxLayout3->setObjectName(QStringLiteral("vboxLayout3"));
        rdoSytntaxIntel = new QRadioButton(groupBox);
        rdoSytntaxIntel->setObjectName(QStringLiteral("rdoSytntaxIntel"));
        rdoSytntaxIntel->setChecked(true);

        vboxLayout3->addWidget(rdoSytntaxIntel);

        rdoSytntaxATT = new QRadioButton(groupBox);
        rdoSytntaxATT->setObjectName(QStringLiteral("rdoSytntaxATT"));
        rdoSytntaxATT->setEnabled(true);

        vboxLayout3->addWidget(rdoSytntaxATT);


        verticalLayout->addWidget(groupBox);

        chkZerosAreFilling = new QCheckBox(tab_4);
        chkZerosAreFilling->setObjectName(QStringLiteral("chkZerosAreFilling"));

        verticalLayout->addWidget(chkZerosAreFilling);

        chkUppercase = new QCheckBox(tab_4);
        chkUppercase->setObjectName(QStringLiteral("chkUppercase"));

        verticalLayout->addWidget(chkUppercase);

        chkSmallIntAsDecimal = new QCheckBox(tab_4);
        chkSmallIntAsDecimal->setObjectName(QStringLiteral("chkSmallIntAsDecimal"));
        chkSmallIntAsDecimal->setEnabled(false);

        verticalLayout->addWidget(chkSmallIntAsDecimal);

        chkTabBetweenMnemonicAndOperands = new QCheckBox(tab_4);
        chkTabBetweenMnemonicAndOperands->setObjectName(QStringLiteral("chkTabBetweenMnemonicAndOperands"));

        verticalLayout->addWidget(chkTabBetweenMnemonicAndOperands);

        chkShowLocalModuleName = new QCheckBox(tab_4);
        chkShowLocalModuleName->setObjectName(QStringLiteral("chkShowLocalModuleName"));

        verticalLayout->addWidget(chkShowLocalModuleName);

        chkShowSymbolicAddresses = new QCheckBox(tab_4);
        chkShowSymbolicAddresses->setObjectName(QStringLiteral("chkShowSymbolicAddresses"));

        verticalLayout->addWidget(chkShowSymbolicAddresses);

        chkSimplifyRIPRelativeTargets = new QCheckBox(tab_4);
        chkSimplifyRIPRelativeTargets->setObjectName(QStringLiteral("chkSimplifyRIPRelativeTargets"));

        verticalLayout->addWidget(chkSimplifyRIPRelativeTargets);

        chkSyntaxHighlighting = new QCheckBox(tab_4);
        chkSyntaxHighlighting->setObjectName(QStringLiteral("chkSyntaxHighlighting"));

        verticalLayout->addWidget(chkSyntaxHighlighting);

        spacerItem6 = new QSpacerItem(561, 206, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(spacerItem6);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        vboxLayout4 = new QVBoxLayout(tab_5);
        vboxLayout4->setObjectName(QStringLiteral("vboxLayout4"));
        gridLayout4 = new QGridLayout();
        gridLayout4->setObjectName(QStringLiteral("gridLayout4"));
        label_3 = new QLabel(tab_5);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout4->addWidget(label_3, 0, 0, 1, 1);

        txtSymbolDir = new QLineEdit(tab_5);
        txtSymbolDir->setObjectName(QStringLiteral("txtSymbolDir"));

        gridLayout4->addWidget(txtSymbolDir, 0, 1, 1, 1);

        btnSymbolDir = new QToolButton(tab_5);
        btnSymbolDir->setObjectName(QStringLiteral("btnSymbolDir"));

        gridLayout4->addWidget(btnSymbolDir, 0, 2, 1, 1);

        label_4 = new QLabel(tab_5);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout4->addWidget(label_4, 1, 0, 1, 1);

        txtPluginDir = new QLineEdit(tab_5);
        txtPluginDir->setObjectName(QStringLiteral("txtPluginDir"));

        gridLayout4->addWidget(txtPluginDir, 1, 1, 1, 1);

        btnPluginDir = new QToolButton(tab_5);
        btnPluginDir->setObjectName(QStringLiteral("btnPluginDir"));

        gridLayout4->addWidget(btnPluginDir, 1, 2, 1, 1);

        label_7 = new QLabel(tab_5);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout4->addWidget(label_7, 2, 0, 1, 1);

        txtSessionDir = new QLineEdit(tab_5);
        txtSessionDir->setObjectName(QStringLiteral("txtSessionDir"));

        gridLayout4->addWidget(txtSessionDir, 2, 1, 1, 1);

        btnSessionDir = new QToolButton(tab_5);
        btnSessionDir->setObjectName(QStringLiteral("btnSessionDir"));

        gridLayout4->addWidget(btnSessionDir, 2, 2, 1, 1);


        vboxLayout4->addLayout(gridLayout4);

        spacerItem7 = new QSpacerItem(578, 101, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout4->addItem(spacerItem7);

        tabWidget->addTab(tab_5, QString());
        tab_plugins = new QWidget();
        tab_plugins->setObjectName(QStringLiteral("tab_plugins"));
        tab_plugins_layout = new QGridLayout(tab_plugins);
        tab_plugins_layout->setObjectName(QStringLiteral("tab_plugins_layout"));
        label_plugins = new QLabel(tab_plugins);
        label_plugins->setObjectName(QStringLiteral("label_plugins"));
        label_plugins->setAlignment(Qt::AlignCenter);

        tab_plugins_layout->addWidget(label_plugins, 0, 0, 1, 1);

        tabWidget->addTab(tab_plugins, QString());

        vboxLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(DialogOptions);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        vboxLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        label_5->setBuddy(spnMinString);
        label->setBuddy(txtTTY);
        label_3->setBuddy(txtSymbolDir);
        label_4->setBuddy(txtPluginDir);
        label_7->setBuddy(txtSessionDir);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(tabWidget, rdoDetach);
        QWidget::setTabOrder(rdoDetach, rdoKill);
        QWidget::setTabOrder(rdoKill, chkDataShowAddress);
        QWidget::setTabOrder(chkDataShowAddress, chkDataShowHex);
        QWidget::setTabOrder(chkDataShowHex, chkDataShowAscii);
        QWidget::setTabOrder(chkDataShowAscii, chkDataShowComments);
        QWidget::setTabOrder(chkDataShowComments, cmbDataWordWidth);
        QWidget::setTabOrder(cmbDataWordWidth, cmbDataRowWidth);
        QWidget::setTabOrder(cmbDataRowWidth, rdoBPEntry);
        QWidget::setTabOrder(rdoBPEntry, rdoBPMain);
        QWidget::setTabOrder(rdoBPMain, chkWarnDataBreakpoint);
        QWidget::setTabOrder(chkWarnDataBreakpoint, chkFindMain);
        QWidget::setTabOrder(chkFindMain, spnMinString);
        QWidget::setTabOrder(spnMinString, chkTTY);
        QWidget::setTabOrder(chkTTY, txtTTY);
        QWidget::setTabOrder(txtTTY, btnTTY);
        QWidget::setTabOrder(btnTTY, rdoSytntaxIntel);
        QWidget::setTabOrder(rdoSytntaxIntel, rdoSytntaxATT);
        QWidget::setTabOrder(rdoSytntaxATT, chkZerosAreFilling);
        QWidget::setTabOrder(chkZerosAreFilling, chkUppercase);
        QWidget::setTabOrder(chkUppercase, txtSymbolDir);
        QWidget::setTabOrder(txtSymbolDir, btnSymbolDir);
        QWidget::setTabOrder(btnSymbolDir, txtPluginDir);
        QWidget::setTabOrder(txtPluginDir, btnPluginDir);
        QWidget::setTabOrder(btnPluginDir, txtSessionDir);
        QWidget::setTabOrder(txtSessionDir, btnSessionDir);

        retranslateUi(DialogOptions);
        QObject::connect(chkTTY, SIGNAL(toggled(bool)), txtTTY, SLOT(setEnabled(bool)));
        QObject::connect(chkTTY, SIGNAL(toggled(bool)), btnTTY, SLOT(setEnabled(bool)));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogOptions, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DialogOptions);
    } // setupUi

    void retranslateUi(QDialog *DialogOptions)
    {
        DialogOptions->setWindowTitle(QApplication::translate("DialogOptions", "Preferences", 0));
        groupBox_3->setTitle(QApplication::translate("DialogOptions", "Close Behaviour", 0));
        rdoDetach->setText(QApplication::translate("DialogOptions", "Detach From Debugged Application", 0));
        rdoKill->setText(QApplication::translate("DialogOptions", "Kill Debugged Application", 0));
        rdoReverseCapture->setText(QApplication::translate("DialogOptions", "Detach If Debugged Application Was Attached To, Kill If Launched", 0));
        groupBox_6->setTitle(QApplication::translate("DialogOptions", "Window Placement On Startup", 0));
        rdoPlaceDefault->setText(QApplication::translate("DialogOptions", "System Default", 0));
        rdoPlaceCentered->setText(QApplication::translate("DialogOptions", "Centered on Desktop", 0));
        rdoPlaceRestore->setText(QApplication::translate("DialogOptions", "Restore Previous Location", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("DialogOptions", "General", 0));
        label_10->setText(QApplication::translate("DialogOptions", "Default Disassembly View Font", 0));
        label_9->setText(QApplication::translate("DialogOptions", "Default Stack View Font", 0));
        label_12->setText(QApplication::translate("DialogOptions", "Default Register View Font", 0));
        label_11->setText(QApplication::translate("DialogOptions", "Default Memory Dump View Font", 0));
        groupBox_5->setTitle(QApplication::translate("DialogOptions", "Default Data View Settings", 0));
        chkDataShowAddress->setText(QApplication::translate("DialogOptions", "Show Address", 0));
        chkDataShowHex->setText(QApplication::translate("DialogOptions", "Show Hex", 0));
        chkDataShowAscii->setText(QApplication::translate("DialogOptions", "Show ASCII", 0));
        chkDataShowComments->setText(QApplication::translate("DialogOptions", "Show Comments", 0));
        label_2->setText(QApplication::translate("DialogOptions", "Word Width", 0));
        cmbDataWordWidth->clear();
        cmbDataWordWidth->insertItems(0, QStringList()
         << QApplication::translate("DialogOptions", "1 Byte", 0)
         << QApplication::translate("DialogOptions", "2 Bytes", 0)
         << QApplication::translate("DialogOptions", "4 Bytes", 0)
         << QApplication::translate("DialogOptions", "8 Bytes", 0)
        );
        label_6->setText(QApplication::translate("DialogOptions", "Row Width", 0));
        cmbDataRowWidth->clear();
        cmbDataRowWidth->insertItems(0, QStringList()
         << QApplication::translate("DialogOptions", "1 Byte", 0)
         << QApplication::translate("DialogOptions", "2 Bytes", 0)
         << QApplication::translate("DialogOptions", "4 Bytes", 0)
         << QApplication::translate("DialogOptions", "8 Bytes", 0)
         << QApplication::translate("DialogOptions", "16 Bytes", 0)
        );
        chkAddressColon->setText(QApplication::translate("DialogOptions", "Show Colons in Addresses", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("DialogOptions", "Appearance", 0));
        groupBox_2->setTitle(QApplication::translate("DialogOptions", "Initial Breakpoint", 0));
        rdoBPEntry->setText(QApplication::translate("DialogOptions", "Application Entry Point", 0));
        rdoBPMain->setText(QApplication::translate("DialogOptions", "\"main\" symbol (when possible)", 0));
        chkWarnDataBreakpoint->setText(QApplication::translate("DialogOptions", "Warn when setting breakpoint in non-executable region", 0));
        chkFindMain->setText(QApplication::translate("DialogOptions", "Use heuristic to find \"main\" symbol when it is not found in symbol file", 0));
        chkDeleteStaleSymbols->setText(QApplication::translate("DialogOptions", "Delete Stale Symbol Files", 0));
        chkDisableASLR->setText(QApplication::translate("DialogOptions", "Disable Address Space Layout Randomization (ASLR)", 0));
        chkDisableLazyBinding->setText(QApplication::translate("DialogOptions", "Disable lazy binding of dynamic symbols", 0));
        label_5->setText(QApplication::translate("DialogOptions", "Minimum length for string detection", 0));
        groupBox_4->setTitle(QApplication::translate("DialogOptions", "Command Line IO", 0));
        chkTTY->setText(QApplication::translate("DialogOptions", "Open a terminal to provide program input and output", 0));
        label->setText(QApplication::translate("DialogOptions", "Terminal Program:", 0));
        txtTTY->setText(QApplication::translate("DialogOptions", "/usr/bin/xterm", 0));
        btnTTY->setText(QApplication::translate("DialogOptions", "...", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("DialogOptions", "Debugging", 0));
        signalsMessageBoxEnable->setText(QApplication::translate("DialogOptions", "Alert about signals with a message box", 0));
        label_8->setText(QApplication::translate("DialogOptions", "Ignore (pass to program) the following exceptions:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("DialogOptions", "Signals/Exceptions", 0));
        groupBox->setTitle(QApplication::translate("DialogOptions", "Disassembly Syntax", 0));
        rdoSytntaxIntel->setText(QApplication::translate("DialogOptions", "Intel", 0));
        rdoSytntaxATT->setText(QApplication::translate("DialogOptions", "AT&&T", 0));
        chkZerosAreFilling->setText(QApplication::translate("DialogOptions", "Instruction \"add [eax], al\" (0x00 0x00) is \"Filling\" on x86", 0));
        chkUppercase->setText(QApplication::translate("DialogOptions", "Disassemble in uppercase", 0));
        chkSmallIntAsDecimal->setText(QApplication::translate("DialogOptions", "Display small integers in decimal", 0));
        chkTabBetweenMnemonicAndOperands->setText(QApplication::translate("DialogOptions", "Tab between mnemonic and operands", 0));
        chkShowLocalModuleName->setText(QApplication::translate("DialogOptions", "Show local module name in jump targets", 0));
        chkShowSymbolicAddresses->setText(QApplication::translate("DialogOptions", "Show symbolic addresses", 0));
        chkSimplifyRIPRelativeTargets->setText(QApplication::translate("DialogOptions", "Show RIP-relative targets as [rel TargetAddress] instead of [rip+Displacement]", 0));
        chkSyntaxHighlighting->setText(QApplication::translate("DialogOptions", "Enable syntax highlighting", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("DialogOptions", "Disassembly", 0));
        label_3->setText(QApplication::translate("DialogOptions", "Symbol Directory", 0));
        btnSymbolDir->setText(QApplication::translate("DialogOptions", "...", 0));
        label_4->setText(QApplication::translate("DialogOptions", "Plugin Directory", 0));
        btnPluginDir->setText(QApplication::translate("DialogOptions", "...", 0));
        label_7->setText(QApplication::translate("DialogOptions", "Session Directory", 0));
        btnSessionDir->setText(QApplication::translate("DialogOptions", "...", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("DialogOptions", "Directories", 0));
        label_plugins->setText(QApplication::translate("DialogOptions", "No Plugin Option Pages", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_plugins), QApplication::translate("DialogOptions", "Plugin Options", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogOptions: public Ui_DialogOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGOPTIONS_H
