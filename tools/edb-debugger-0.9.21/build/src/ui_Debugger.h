/********************************************************************************
** Form generated from reading UI file 'Debugger.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBUGGER_H
#define UI_DEBUGGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QDisassemblyView.h"
#include "RegisterListWidget.h"
#include "TabWidget.h"

QT_BEGIN_NAMESPACE

class Ui_Debugger
{
public:
    QAction *action_Open;
    QAction *action_Attach;
    QAction *actionE_xit;
    QAction *action_Memory_Regions;
    QAction *action_Single_Step;
    QAction *action_Run;
    QAction *action_Pause;
    QAction *action_Restart;
    QAction *action_Detach;
    QAction *action_Step_Into;
    QAction *action_Step_Over;
    QAction *action_About;
    QAction *action_Help;
    QAction *action_Configure_Debugger;
    QAction *actionAbout_QT;
    QAction *action_Breakpoint_Manager;
    QAction *actionApplication_Arguments;
    QAction *actionRun_Until_Return;
    QAction *action_Step_Into_Pass_Signal_To_Application;
    QAction *action_Step_Over_Pass_Signal_To_Application;
    QAction *action_Run_Pass_Signal_To_Application;
    QAction *action_Recent_Files;
    QAction *actionApplication_Working_Directory;
    QAction *action_Kill;
    QAction *action_Plugins;
    QAction *action_Threads;
    QAction *actionStep_Out;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QDisassemblyView *cpuView;
    QListView *listView;
    QMenuBar *menubar;
    QMenu *menu_help;
    QMenu *menu_View;
    QMenu *menu_Plugins;
    QMenu *menu_Options;
    QMenu *menu_File;
    QMenu *menu_Debug;
    QStatusBar *statusbar;
    QDockWidget *registersDock;
    QWidget *dockWidgetContents_3;
    QGridLayout *gridLayout;
    RegisterListWidget *registerList;
    QDockWidget *dataDock;
    QWidget *dockWidgetContents_4;
    QGridLayout *gridLayout1;
    TabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout2;
    QDockWidget *stackDock;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout3;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Debugger)
    {
        if (Debugger->objectName().isEmpty())
            Debugger->setObjectName(QStringLiteral("Debugger"));
        Debugger->resize(800, 700);
        action_Open = new QAction(Debugger);
        action_Open->setObjectName(QStringLiteral("action_Open"));
        QIcon icon(QIcon::fromTheme(QStringLiteral("document-open")));
        action_Open->setIcon(icon);
        action_Attach = new QAction(Debugger);
        action_Attach->setObjectName(QStringLiteral("action_Attach"));
        actionE_xit = new QAction(Debugger);
        actionE_xit->setObjectName(QStringLiteral("actionE_xit"));
        QIcon icon1(QIcon::fromTheme(QStringLiteral("application-exit")));
        actionE_xit->setIcon(icon1);
        action_Memory_Regions = new QAction(Debugger);
        action_Memory_Regions->setObjectName(QStringLiteral("action_Memory_Regions"));
        action_Single_Step = new QAction(Debugger);
        action_Single_Step->setObjectName(QStringLiteral("action_Single_Step"));
        action_Run = new QAction(Debugger);
        action_Run->setObjectName(QStringLiteral("action_Run"));
        action_Run->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/debugger/images/edb22-action-run.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Run->setIcon(icon2);
        action_Pause = new QAction(Debugger);
        action_Pause->setObjectName(QStringLiteral("action_Pause"));
        action_Pause->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/debugger/images/edb22-action-break.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Pause->setIcon(icon3);
        action_Restart = new QAction(Debugger);
        action_Restart->setObjectName(QStringLiteral("action_Restart"));
        action_Restart->setEnabled(false);
        action_Detach = new QAction(Debugger);
        action_Detach->setObjectName(QStringLiteral("action_Detach"));
        action_Detach->setEnabled(false);
        action_Step_Into = new QAction(Debugger);
        action_Step_Into->setObjectName(QStringLiteral("action_Step_Into"));
        action_Step_Into->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/debugger/images/edb22-action-stepi.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Step_Into->setIcon(icon4);
        action_Step_Over = new QAction(Debugger);
        action_Step_Over->setObjectName(QStringLiteral("action_Step_Over"));
        action_Step_Over->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/debugger/images/edb22-action-stepoveri.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Step_Over->setIcon(icon5);
        action_About = new QAction(Debugger);
        action_About->setObjectName(QStringLiteral("action_About"));
        QIcon icon6(QIcon::fromTheme(QStringLiteral("help-about")));
        action_About->setIcon(icon6);
        action_Help = new QAction(Debugger);
        action_Help->setObjectName(QStringLiteral("action_Help"));
        action_Help->setEnabled(true);
        QIcon icon7(QIcon::fromTheme(QStringLiteral("help-contents")));
        action_Help->setIcon(icon7);
        action_Configure_Debugger = new QAction(Debugger);
        action_Configure_Debugger->setObjectName(QStringLiteral("action_Configure_Debugger"));
        QIcon icon8(QIcon::fromTheme(QStringLiteral("configure")));
        action_Configure_Debugger->setIcon(icon8);
        actionAbout_QT = new QAction(Debugger);
        actionAbout_QT->setObjectName(QStringLiteral("actionAbout_QT"));
        action_Breakpoint_Manager = new QAction(Debugger);
        action_Breakpoint_Manager->setObjectName(QStringLiteral("action_Breakpoint_Manager"));
        actionApplication_Arguments = new QAction(Debugger);
        actionApplication_Arguments->setObjectName(QStringLiteral("actionApplication_Arguments"));
        actionRun_Until_Return = new QAction(Debugger);
        actionRun_Until_Return->setObjectName(QStringLiteral("actionRun_Until_Return"));
        actionRun_Until_Return->setEnabled(false);
        action_Step_Into_Pass_Signal_To_Application = new QAction(Debugger);
        action_Step_Into_Pass_Signal_To_Application->setObjectName(QStringLiteral("action_Step_Into_Pass_Signal_To_Application"));
        action_Step_Into_Pass_Signal_To_Application->setEnabled(false);
        action_Step_Into_Pass_Signal_To_Application->setIcon(icon4);
        action_Step_Over_Pass_Signal_To_Application = new QAction(Debugger);
        action_Step_Over_Pass_Signal_To_Application->setObjectName(QStringLiteral("action_Step_Over_Pass_Signal_To_Application"));
        action_Step_Over_Pass_Signal_To_Application->setEnabled(false);
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/debugger/images/edb22-action-stepover.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Step_Over_Pass_Signal_To_Application->setIcon(icon9);
        action_Run_Pass_Signal_To_Application = new QAction(Debugger);
        action_Run_Pass_Signal_To_Application->setObjectName(QStringLiteral("action_Run_Pass_Signal_To_Application"));
        action_Run_Pass_Signal_To_Application->setEnabled(false);
        action_Run_Pass_Signal_To_Application->setIcon(icon2);
        action_Recent_Files = new QAction(Debugger);
        action_Recent_Files->setObjectName(QStringLiteral("action_Recent_Files"));
        QIcon icon10(QIcon::fromTheme(QStringLiteral("document-open-recent")));
        action_Recent_Files->setIcon(icon10);
        actionApplication_Working_Directory = new QAction(Debugger);
        actionApplication_Working_Directory->setObjectName(QStringLiteral("actionApplication_Working_Directory"));
        action_Kill = new QAction(Debugger);
        action_Kill->setObjectName(QStringLiteral("action_Kill"));
        action_Kill->setEnabled(false);
        action_Plugins = new QAction(Debugger);
        action_Plugins->setObjectName(QStringLiteral("action_Plugins"));
        action_Threads = new QAction(Debugger);
        action_Threads->setObjectName(QStringLiteral("action_Threads"));
        actionStep_Out = new QAction(Debugger);
        actionStep_Out->setObjectName(QStringLiteral("actionStep_Out"));
        actionStep_Out->setEnabled(false);
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/debugger/images/edb22-action-stepout.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStep_Out->setIcon(icon11);
        centralwidget = new QWidget(Debugger);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        cpuView = new QDisassemblyView(centralwidget);
        cpuView->setObjectName(QStringLiteral("cpuView"));

        verticalLayout->addWidget(cpuView);

        listView = new QListView(centralwidget);
        listView->setObjectName(QStringLiteral("listView"));
        QFont font;
        font.setFamily(QStringLiteral("Monospace"));
        font.setPointSize(10);
        listView->setFont(font);
        listView->setEditTriggers(QAbstractItemView::NoEditTriggers);

        verticalLayout->addWidget(listView);

        Debugger->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Debugger);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menu_help = new QMenu(menubar);
        menu_help->setObjectName(QStringLiteral("menu_help"));
        menu_View = new QMenu(menubar);
        menu_View->setObjectName(QStringLiteral("menu_View"));
        menu_Plugins = new QMenu(menubar);
        menu_Plugins->setObjectName(QStringLiteral("menu_Plugins"));
        menu_Options = new QMenu(menubar);
        menu_Options->setObjectName(QStringLiteral("menu_Options"));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        menu_Debug = new QMenu(menubar);
        menu_Debug->setObjectName(QStringLiteral("menu_Debug"));
        Debugger->setMenuBar(menubar);
        statusbar = new QStatusBar(Debugger);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Debugger->setStatusBar(statusbar);
        registersDock = new QDockWidget(Debugger);
        registersDock->setObjectName(QStringLiteral("registersDock"));
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QStringLiteral("dockWidgetContents_3"));
        gridLayout = new QGridLayout(dockWidgetContents_3);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        registerList = new RegisterListWidget(dockWidgetContents_3);
        registerList->setObjectName(QStringLiteral("registerList"));
        QFont font1;
        font1.setFamily(QStringLiteral("Monospace"));
        font1.setPointSize(9);
        registerList->setFont(font1);

        gridLayout->addWidget(registerList, 0, 0, 1, 1);

        registersDock->setWidget(dockWidgetContents_3);
        Debugger->addDockWidget(static_cast<Qt::DockWidgetArea>(2), registersDock);
        dataDock = new QDockWidget(Debugger);
        dataDock->setObjectName(QStringLiteral("dataDock"));
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QStringLiteral("dockWidgetContents_4"));
        gridLayout1 = new QGridLayout(dockWidgetContents_4);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        tabWidget = new TabWidget(dockWidgetContents_4);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout2 = new QGridLayout(tab);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        tabWidget->addTab(tab, QString());

        gridLayout1->addWidget(tabWidget, 0, 0, 1, 1);

        dataDock->setWidget(dockWidgetContents_4);
        Debugger->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dataDock);
        stackDock = new QDockWidget(Debugger);
        stackDock->setObjectName(QStringLiteral("stackDock"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        gridLayout3 = new QGridLayout(dockWidgetContents);
        gridLayout3->setObjectName(QStringLiteral("gridLayout3"));
        stackDock->setWidget(dockWidgetContents);
        Debugger->addDockWidget(static_cast<Qt::DockWidgetArea>(8), stackDock);
        toolBar = new QToolBar(Debugger);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setOrientation(Qt::Horizontal);
        Debugger->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menu_View->menuAction());
        menubar->addAction(menu_Debug->menuAction());
        menubar->addAction(menu_Plugins->menuAction());
        menubar->addAction(menu_Options->menuAction());
        menubar->addAction(menu_help->menuAction());
        menu_help->addAction(action_Help);
        menu_help->addSeparator();
        menu_help->addAction(action_About);
        menu_help->addAction(actionAbout_QT);
        menu_View->addAction(action_Memory_Regions);
        menu_View->addAction(action_Threads);
        menu_View->addSeparator();
        menu_Plugins->addAction(action_Plugins);
        menu_Plugins->addSeparator();
        menu_Options->addAction(action_Configure_Debugger);
        menu_Options->addAction(actionApplication_Arguments);
        menu_Options->addAction(actionApplication_Working_Directory);
        menu_File->addAction(action_Open);
        menu_File->addAction(action_Attach);
        menu_File->addAction(action_Recent_Files);
        menu_File->addSeparator();
        menu_File->addAction(actionE_xit);
        menu_Debug->addAction(action_Run);
        menu_Debug->addAction(action_Pause);
        menu_Debug->addAction(action_Restart);
        menu_Debug->addAction(action_Detach);
        menu_Debug->addAction(action_Kill);
        menu_Debug->addSeparator();
        menu_Debug->addAction(action_Step_Into);
        menu_Debug->addAction(action_Step_Over);
        menu_Debug->addSeparator();
        menu_Debug->addAction(action_Run_Pass_Signal_To_Application);
        menu_Debug->addAction(action_Step_Into_Pass_Signal_To_Application);
        menu_Debug->addAction(action_Step_Over_Pass_Signal_To_Application);
        menu_Debug->addSeparator();
        menu_Debug->addAction(actionRun_Until_Return);
        toolBar->addAction(action_Pause);
        toolBar->addAction(action_Step_Into);
        toolBar->addAction(action_Step_Over);
        toolBar->addAction(actionStep_Out);
        toolBar->addAction(action_Run);

        retranslateUi(Debugger);
        QObject::connect(actionE_xit, SIGNAL(triggered()), Debugger, SLOT(close()));

        QMetaObject::connectSlotsByName(Debugger);
    } // setupUi

    void retranslateUi(QMainWindow *Debugger)
    {
        Debugger->setWindowTitle(QApplication::translate("Debugger", "edb", 0));
        action_Open->setText(QApplication::translate("Debugger", "&Open", 0));
        action_Open->setShortcut(QApplication::translate("Debugger", "F3", 0));
        action_Attach->setText(QApplication::translate("Debugger", "&Attach", 0));
        actionE_xit->setText(QApplication::translate("Debugger", "E&xit", 0));
        actionE_xit->setShortcut(QApplication::translate("Debugger", "Alt+X", 0));
        action_Memory_Regions->setText(QApplication::translate("Debugger", "&Memory Regions", 0));
        action_Memory_Regions->setShortcut(QApplication::translate("Debugger", "Ctrl+M", 0));
        action_Single_Step->setText(QApplication::translate("Debugger", "&Step Into", 0));
        action_Single_Step->setShortcut(QString());
        action_Run->setText(QApplication::translate("Debugger", "&Run", 0));
        action_Run->setShortcut(QApplication::translate("Debugger", "F9", 0));
        action_Pause->setText(QApplication::translate("Debugger", "&Pause", 0));
        action_Pause->setShortcut(QApplication::translate("Debugger", "F11", 0));
        action_Restart->setText(QApplication::translate("Debugger", "&Restart", 0));
        action_Restart->setShortcut(QApplication::translate("Debugger", "Ctrl+F2", 0));
        action_Detach->setText(QApplication::translate("Debugger", "&Detach", 0));
        action_Detach->setIconText(QApplication::translate("Debugger", "Detach", 0));
#ifndef QT_NO_TOOLTIP
        action_Detach->setToolTip(QApplication::translate("Debugger", "Detach", 0));
#endif // QT_NO_TOOLTIP
        action_Step_Into->setText(QApplication::translate("Debugger", "&Step Into", 0));
        action_Step_Into->setShortcut(QApplication::translate("Debugger", "F7", 0));
        action_Step_Over->setText(QApplication::translate("Debugger", "&Step Over", 0));
        action_Step_Over->setShortcut(QApplication::translate("Debugger", "F8", 0));
        action_About->setText(QApplication::translate("Debugger", "&About", 0));
        action_Help->setText(QApplication::translate("Debugger", "&Help", 0));
        action_Help->setShortcut(QApplication::translate("Debugger", "F1", 0));
        action_Configure_Debugger->setText(QApplication::translate("Debugger", "&Preferences", 0));
        actionAbout_QT->setText(QApplication::translate("Debugger", "About &QT", 0));
        action_Breakpoint_Manager->setText(QApplication::translate("Debugger", "&Breakpoint Manager", 0));
        actionApplication_Arguments->setText(QApplication::translate("Debugger", "Application &Arguments", 0));
        actionRun_Until_Return->setText(QApplication::translate("Debugger", "Run &Until Return", 0));
        actionRun_Until_Return->setShortcut(QApplication::translate("Debugger", "Ctrl+F9", 0));
        action_Step_Into_Pass_Signal_To_Application->setText(QApplication::translate("Debugger", "&Step Into (Pass Signal To Application)", 0));
        action_Step_Into_Pass_Signal_To_Application->setShortcut(QApplication::translate("Debugger", "Shift+F7", 0));
        action_Step_Over_Pass_Signal_To_Application->setText(QApplication::translate("Debugger", "&Step Over (Pass Signal To Application)", 0));
        action_Step_Over_Pass_Signal_To_Application->setShortcut(QApplication::translate("Debugger", "Shift+F8", 0));
        action_Run_Pass_Signal_To_Application->setText(QApplication::translate("Debugger", "&Run (Pass Signal To Application)", 0));
        action_Run_Pass_Signal_To_Application->setShortcut(QApplication::translate("Debugger", "Shift+F9", 0));
        action_Recent_Files->setText(QApplication::translate("Debugger", "&Recent Files", 0));
        actionApplication_Working_Directory->setText(QApplication::translate("Debugger", "Application &Working Directory", 0));
        action_Kill->setText(QApplication::translate("Debugger", "&Kill", 0));
        action_Plugins->setText(QApplication::translate("Debugger", "&Plugins", 0));
        action_Threads->setText(QApplication::translate("Debugger", "&Threads", 0));
        action_Threads->setShortcut(QApplication::translate("Debugger", "Ctrl+T", 0));
        actionStep_Out->setText(QApplication::translate("Debugger", "Step &Out", 0));
#ifndef QT_NO_TOOLTIP
        actionStep_Out->setToolTip(QApplication::translate("Debugger", "Step Out", 0));
#endif // QT_NO_TOOLTIP
        menu_help->setTitle(QApplication::translate("Debugger", "&Help", 0));
        menu_View->setTitle(QApplication::translate("Debugger", "&View", 0));
        menu_Plugins->setTitle(QApplication::translate("Debugger", "&Plugins", 0));
        menu_Options->setTitle(QApplication::translate("Debugger", "&Options", 0));
        menu_File->setTitle(QApplication::translate("Debugger", "&File", 0));
        menu_Debug->setTitle(QApplication::translate("Debugger", "&Debug", 0));
        registersDock->setWindowTitle(QApplication::translate("Debugger", "Register Tree", 0));
        dataDock->setWindowTitle(QApplication::translate("Debugger", "Data Dump", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Debugger", "00000000-00000000", 0));
        stackDock->setWindowTitle(QApplication::translate("Debugger", "Stack", 0));
        toolBar->setWindowTitle(QApplication::translate("Debugger", "ToolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class Debugger: public Ui_Debugger {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBUGGER_H
