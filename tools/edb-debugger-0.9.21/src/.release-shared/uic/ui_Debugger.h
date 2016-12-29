/********************************************************************************
** Form generated from reading UI file 'Debugger.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBUGGER_H
#define UI_DEBUGGER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
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
            Debugger->setObjectName(QString::fromUtf8("Debugger"));
        Debugger->resize(800, 700);
        action_Open = new QAction(Debugger);
        action_Open->setObjectName(QString::fromUtf8("action_Open"));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("document-open")));
        action_Open->setIcon(icon);
        action_Attach = new QAction(Debugger);
        action_Attach->setObjectName(QString::fromUtf8("action_Attach"));
        actionE_xit = new QAction(Debugger);
        actionE_xit->setObjectName(QString::fromUtf8("actionE_xit"));
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("application-exit")));
        actionE_xit->setIcon(icon1);
        action_Memory_Regions = new QAction(Debugger);
        action_Memory_Regions->setObjectName(QString::fromUtf8("action_Memory_Regions"));
        action_Single_Step = new QAction(Debugger);
        action_Single_Step->setObjectName(QString::fromUtf8("action_Single_Step"));
        action_Run = new QAction(Debugger);
        action_Run->setObjectName(QString::fromUtf8("action_Run"));
        action_Run->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/debugger/images/edb22-action-run.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Run->setIcon(icon2);
        action_Pause = new QAction(Debugger);
        action_Pause->setObjectName(QString::fromUtf8("action_Pause"));
        action_Pause->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/debugger/images/edb22-action-break.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Pause->setIcon(icon3);
        action_Restart = new QAction(Debugger);
        action_Restart->setObjectName(QString::fromUtf8("action_Restart"));
        action_Restart->setEnabled(false);
        action_Detach = new QAction(Debugger);
        action_Detach->setObjectName(QString::fromUtf8("action_Detach"));
        action_Detach->setEnabled(false);
        action_Step_Into = new QAction(Debugger);
        action_Step_Into->setObjectName(QString::fromUtf8("action_Step_Into"));
        action_Step_Into->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/debugger/images/edb22-action-stepi.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Step_Into->setIcon(icon4);
        action_Step_Over = new QAction(Debugger);
        action_Step_Over->setObjectName(QString::fromUtf8("action_Step_Over"));
        action_Step_Over->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/debugger/images/edb22-action-stepoveri.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Step_Over->setIcon(icon5);
        action_About = new QAction(Debugger);
        action_About->setObjectName(QString::fromUtf8("action_About"));
        QIcon icon6(QIcon::fromTheme(QString::fromUtf8("help-about")));
        action_About->setIcon(icon6);
        action_Help = new QAction(Debugger);
        action_Help->setObjectName(QString::fromUtf8("action_Help"));
        action_Help->setEnabled(true);
        QIcon icon7(QIcon::fromTheme(QString::fromUtf8("help-contents")));
        action_Help->setIcon(icon7);
        action_Configure_Debugger = new QAction(Debugger);
        action_Configure_Debugger->setObjectName(QString::fromUtf8("action_Configure_Debugger"));
        QIcon icon8(QIcon::fromTheme(QString::fromUtf8("configure")));
        action_Configure_Debugger->setIcon(icon8);
        actionAbout_QT = new QAction(Debugger);
        actionAbout_QT->setObjectName(QString::fromUtf8("actionAbout_QT"));
        action_Breakpoint_Manager = new QAction(Debugger);
        action_Breakpoint_Manager->setObjectName(QString::fromUtf8("action_Breakpoint_Manager"));
        actionApplication_Arguments = new QAction(Debugger);
        actionApplication_Arguments->setObjectName(QString::fromUtf8("actionApplication_Arguments"));
        actionRun_Until_Return = new QAction(Debugger);
        actionRun_Until_Return->setObjectName(QString::fromUtf8("actionRun_Until_Return"));
        actionRun_Until_Return->setEnabled(false);
        action_Step_Into_Pass_Signal_To_Application = new QAction(Debugger);
        action_Step_Into_Pass_Signal_To_Application->setObjectName(QString::fromUtf8("action_Step_Into_Pass_Signal_To_Application"));
        action_Step_Into_Pass_Signal_To_Application->setEnabled(false);
        action_Step_Into_Pass_Signal_To_Application->setIcon(icon4);
        action_Step_Over_Pass_Signal_To_Application = new QAction(Debugger);
        action_Step_Over_Pass_Signal_To_Application->setObjectName(QString::fromUtf8("action_Step_Over_Pass_Signal_To_Application"));
        action_Step_Over_Pass_Signal_To_Application->setEnabled(false);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/debugger/images/edb22-action-stepover.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Step_Over_Pass_Signal_To_Application->setIcon(icon9);
        action_Run_Pass_Signal_To_Application = new QAction(Debugger);
        action_Run_Pass_Signal_To_Application->setObjectName(QString::fromUtf8("action_Run_Pass_Signal_To_Application"));
        action_Run_Pass_Signal_To_Application->setEnabled(false);
        action_Run_Pass_Signal_To_Application->setIcon(icon2);
        action_Recent_Files = new QAction(Debugger);
        action_Recent_Files->setObjectName(QString::fromUtf8("action_Recent_Files"));
        QIcon icon10(QIcon::fromTheme(QString::fromUtf8("document-open-recent")));
        action_Recent_Files->setIcon(icon10);
        actionApplication_Working_Directory = new QAction(Debugger);
        actionApplication_Working_Directory->setObjectName(QString::fromUtf8("actionApplication_Working_Directory"));
        action_Kill = new QAction(Debugger);
        action_Kill->setObjectName(QString::fromUtf8("action_Kill"));
        action_Kill->setEnabled(false);
        action_Plugins = new QAction(Debugger);
        action_Plugins->setObjectName(QString::fromUtf8("action_Plugins"));
        action_Threads = new QAction(Debugger);
        action_Threads->setObjectName(QString::fromUtf8("action_Threads"));
        actionStep_Out = new QAction(Debugger);
        actionStep_Out->setObjectName(QString::fromUtf8("actionStep_Out"));
        actionStep_Out->setEnabled(false);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/debugger/images/edb22-action-stepout.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStep_Out->setIcon(icon11);
        centralwidget = new QWidget(Debugger);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        cpuView = new QDisassemblyView(centralwidget);
        cpuView->setObjectName(QString::fromUtf8("cpuView"));

        verticalLayout->addWidget(cpuView);

        listView = new QListView(centralwidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        font.setPointSize(10);
        listView->setFont(font);
        listView->setEditTriggers(QAbstractItemView::NoEditTriggers);

        verticalLayout->addWidget(listView);

        Debugger->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Debugger);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menu_help = new QMenu(menubar);
        menu_help->setObjectName(QString::fromUtf8("menu_help"));
        menu_View = new QMenu(menubar);
        menu_View->setObjectName(QString::fromUtf8("menu_View"));
        menu_Plugins = new QMenu(menubar);
        menu_Plugins->setObjectName(QString::fromUtf8("menu_Plugins"));
        menu_Options = new QMenu(menubar);
        menu_Options->setObjectName(QString::fromUtf8("menu_Options"));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menu_Debug = new QMenu(menubar);
        menu_Debug->setObjectName(QString::fromUtf8("menu_Debug"));
        Debugger->setMenuBar(menubar);
        statusbar = new QStatusBar(Debugger);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Debugger->setStatusBar(statusbar);
        registersDock = new QDockWidget(Debugger);
        registersDock->setObjectName(QString::fromUtf8("registersDock"));
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QString::fromUtf8("dockWidgetContents_3"));
        gridLayout = new QGridLayout(dockWidgetContents_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        registerList = new RegisterListWidget(dockWidgetContents_3);
        registerList->setObjectName(QString::fromUtf8("registerList"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Monospace"));
        font1.setPointSize(9);
        registerList->setFont(font1);

        gridLayout->addWidget(registerList, 0, 0, 1, 1);

        registersDock->setWidget(dockWidgetContents_3);
        Debugger->addDockWidget(static_cast<Qt::DockWidgetArea>(2), registersDock);
        dataDock = new QDockWidget(Debugger);
        dataDock->setObjectName(QString::fromUtf8("dataDock"));
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QString::fromUtf8("dockWidgetContents_4"));
        gridLayout1 = new QGridLayout(dockWidgetContents_4);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        tabWidget = new TabWidget(dockWidgetContents_4);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout2 = new QGridLayout(tab);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        tabWidget->addTab(tab, QString());

        gridLayout1->addWidget(tabWidget, 0, 0, 1, 1);

        dataDock->setWidget(dockWidgetContents_4);
        Debugger->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dataDock);
        stackDock = new QDockWidget(Debugger);
        stackDock->setObjectName(QString::fromUtf8("stackDock"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        gridLayout3 = new QGridLayout(dockWidgetContents);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        stackDock->setWidget(dockWidgetContents);
        Debugger->addDockWidget(static_cast<Qt::DockWidgetArea>(8), stackDock);
        toolBar = new QToolBar(Debugger);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
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
        Debugger->setWindowTitle(QApplication::translate("Debugger", "edb", 0, QApplication::UnicodeUTF8));
        action_Open->setText(QApplication::translate("Debugger", "&Open", 0, QApplication::UnicodeUTF8));
        action_Open->setShortcut(QApplication::translate("Debugger", "F3", 0, QApplication::UnicodeUTF8));
        action_Attach->setText(QApplication::translate("Debugger", "&Attach", 0, QApplication::UnicodeUTF8));
        actionE_xit->setText(QApplication::translate("Debugger", "E&xit", 0, QApplication::UnicodeUTF8));
        actionE_xit->setShortcut(QApplication::translate("Debugger", "Alt+X", 0, QApplication::UnicodeUTF8));
        action_Memory_Regions->setText(QApplication::translate("Debugger", "&Memory Regions", 0, QApplication::UnicodeUTF8));
        action_Memory_Regions->setShortcut(QApplication::translate("Debugger", "Ctrl+M", 0, QApplication::UnicodeUTF8));
        action_Single_Step->setText(QApplication::translate("Debugger", "&Step Into", 0, QApplication::UnicodeUTF8));
        action_Single_Step->setShortcut(QString());
        action_Run->setText(QApplication::translate("Debugger", "&Run", 0, QApplication::UnicodeUTF8));
        action_Run->setShortcut(QApplication::translate("Debugger", "F9", 0, QApplication::UnicodeUTF8));
        action_Pause->setText(QApplication::translate("Debugger", "&Pause", 0, QApplication::UnicodeUTF8));
        action_Pause->setShortcut(QApplication::translate("Debugger", "F11", 0, QApplication::UnicodeUTF8));
        action_Restart->setText(QApplication::translate("Debugger", "&Restart", 0, QApplication::UnicodeUTF8));
        action_Restart->setShortcut(QApplication::translate("Debugger", "Ctrl+F2", 0, QApplication::UnicodeUTF8));
        action_Detach->setText(QApplication::translate("Debugger", "&Detach", 0, QApplication::UnicodeUTF8));
        action_Detach->setIconText(QApplication::translate("Debugger", "Detach", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_Detach->setToolTip(QApplication::translate("Debugger", "Detach", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_Step_Into->setText(QApplication::translate("Debugger", "&Step Into", 0, QApplication::UnicodeUTF8));
        action_Step_Into->setShortcut(QApplication::translate("Debugger", "F7", 0, QApplication::UnicodeUTF8));
        action_Step_Over->setText(QApplication::translate("Debugger", "&Step Over", 0, QApplication::UnicodeUTF8));
        action_Step_Over->setShortcut(QApplication::translate("Debugger", "F8", 0, QApplication::UnicodeUTF8));
        action_About->setText(QApplication::translate("Debugger", "&About", 0, QApplication::UnicodeUTF8));
        action_Help->setText(QApplication::translate("Debugger", "&Help", 0, QApplication::UnicodeUTF8));
        action_Help->setShortcut(QApplication::translate("Debugger", "F1", 0, QApplication::UnicodeUTF8));
        action_Configure_Debugger->setText(QApplication::translate("Debugger", "&Preferences", 0, QApplication::UnicodeUTF8));
        actionAbout_QT->setText(QApplication::translate("Debugger", "About &QT", 0, QApplication::UnicodeUTF8));
        action_Breakpoint_Manager->setText(QApplication::translate("Debugger", "&Breakpoint Manager", 0, QApplication::UnicodeUTF8));
        actionApplication_Arguments->setText(QApplication::translate("Debugger", "Application &Arguments", 0, QApplication::UnicodeUTF8));
        actionRun_Until_Return->setText(QApplication::translate("Debugger", "Run &Until Return", 0, QApplication::UnicodeUTF8));
        actionRun_Until_Return->setShortcut(QApplication::translate("Debugger", "Ctrl+F9", 0, QApplication::UnicodeUTF8));
        action_Step_Into_Pass_Signal_To_Application->setText(QApplication::translate("Debugger", "&Step Into (Pass Signal To Application)", 0, QApplication::UnicodeUTF8));
        action_Step_Into_Pass_Signal_To_Application->setShortcut(QApplication::translate("Debugger", "Shift+F7", 0, QApplication::UnicodeUTF8));
        action_Step_Over_Pass_Signal_To_Application->setText(QApplication::translate("Debugger", "&Step Over (Pass Signal To Application)", 0, QApplication::UnicodeUTF8));
        action_Step_Over_Pass_Signal_To_Application->setShortcut(QApplication::translate("Debugger", "Shift+F8", 0, QApplication::UnicodeUTF8));
        action_Run_Pass_Signal_To_Application->setText(QApplication::translate("Debugger", "&Run (Pass Signal To Application)", 0, QApplication::UnicodeUTF8));
        action_Run_Pass_Signal_To_Application->setShortcut(QApplication::translate("Debugger", "Shift+F9", 0, QApplication::UnicodeUTF8));
        action_Recent_Files->setText(QApplication::translate("Debugger", "&Recent Files", 0, QApplication::UnicodeUTF8));
        actionApplication_Working_Directory->setText(QApplication::translate("Debugger", "Application &Working Directory", 0, QApplication::UnicodeUTF8));
        action_Kill->setText(QApplication::translate("Debugger", "&Kill", 0, QApplication::UnicodeUTF8));
        action_Plugins->setText(QApplication::translate("Debugger", "&Plugins", 0, QApplication::UnicodeUTF8));
        action_Threads->setText(QApplication::translate("Debugger", "&Threads", 0, QApplication::UnicodeUTF8));
        action_Threads->setShortcut(QApplication::translate("Debugger", "Ctrl+T", 0, QApplication::UnicodeUTF8));
        actionStep_Out->setText(QApplication::translate("Debugger", "Step &Out", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionStep_Out->setToolTip(QApplication::translate("Debugger", "Step Out", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        menu_help->setTitle(QApplication::translate("Debugger", "&Help", 0, QApplication::UnicodeUTF8));
        menu_View->setTitle(QApplication::translate("Debugger", "&View", 0, QApplication::UnicodeUTF8));
        menu_Plugins->setTitle(QApplication::translate("Debugger", "&Plugins", 0, QApplication::UnicodeUTF8));
        menu_Options->setTitle(QApplication::translate("Debugger", "&Options", 0, QApplication::UnicodeUTF8));
        menu_File->setTitle(QApplication::translate("Debugger", "&File", 0, QApplication::UnicodeUTF8));
        menu_Debug->setTitle(QApplication::translate("Debugger", "&Debug", 0, QApplication::UnicodeUTF8));
        registersDock->setWindowTitle(QApplication::translate("Debugger", "Register Tree", 0, QApplication::UnicodeUTF8));
        dataDock->setWindowTitle(QApplication::translate("Debugger", "Data Dump", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Debugger", "00000000-00000000", 0, QApplication::UnicodeUTF8));
        stackDock->setWindowTitle(QApplication::translate("Debugger", "Stack", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("Debugger", "ToolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Debugger: public Ui_Debugger {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBUGGER_H
