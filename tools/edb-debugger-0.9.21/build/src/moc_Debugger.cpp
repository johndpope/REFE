/****************************************************************************
** Meta object code from reading C++ file 'Debugger.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/Debugger.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Debugger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Debugger_t {
    QByteArrayData data[97];
    char stringdata0[2041];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Debugger_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Debugger_t qt_meta_stringdata_Debugger = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Debugger"
QT_MOC_LITERAL(1, 9, 11), // "gui_updated"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 10), // "debugEvent"
QT_MOC_LITERAL(4, 33, 11), // "detachEvent"
QT_MOC_LITERAL(5, 45, 11), // "attachEvent"
QT_MOC_LITERAL(6, 57, 24), // "on_action_Help_triggered"
QT_MOC_LITERAL(7, 82, 27), // "on_actionAbout_QT_triggered"
QT_MOC_LITERAL(8, 110, 40), // "on_actionApplication_Argument..."
QT_MOC_LITERAL(9, 151, 48), // "on_actionApplication_Working_..."
QT_MOC_LITERAL(10, 200, 35), // "on_actionRun_Until_Return_tri..."
QT_MOC_LITERAL(11, 236, 25), // "on_action_About_triggered"
QT_MOC_LITERAL(12, 262, 26), // "on_action_Attach_triggered"
QT_MOC_LITERAL(13, 289, 38), // "on_action_Configure_Debugger_..."
QT_MOC_LITERAL(14, 328, 26), // "on_action_Detach_triggered"
QT_MOC_LITERAL(15, 355, 24), // "on_action_Kill_triggered"
QT_MOC_LITERAL(16, 380, 34), // "on_action_Memory_Regions_trig..."
QT_MOC_LITERAL(17, 415, 24), // "on_action_Open_triggered"
QT_MOC_LITERAL(18, 440, 25), // "on_action_Pause_triggered"
QT_MOC_LITERAL(19, 466, 27), // "on_action_Plugins_triggered"
QT_MOC_LITERAL(20, 494, 27), // "on_action_Restart_triggered"
QT_MOC_LITERAL(21, 522, 50), // "on_action_Run_Pass_Signal_To_..."
QT_MOC_LITERAL(22, 573, 23), // "on_action_Run_triggered"
QT_MOC_LITERAL(23, 597, 56), // "on_action_Step_Into_Pass_Sign..."
QT_MOC_LITERAL(24, 654, 29), // "on_action_Step_Into_triggered"
QT_MOC_LITERAL(25, 684, 56), // "on_action_Step_Over_Pass_Sign..."
QT_MOC_LITERAL(26, 741, 29), // "on_action_Step_Over_triggered"
QT_MOC_LITERAL(27, 771, 27), // "on_actionStep_Out_triggered"
QT_MOC_LITERAL(28, 799, 27), // "on_action_Threads_triggered"
QT_MOC_LITERAL(29, 827, 28), // "on_cpuView_breakPointToggled"
QT_MOC_LITERAL(30, 856, 14), // "edb::address_t"
QT_MOC_LITERAL(31, 871, 37), // "on_cpuView_customContextMenuR..."
QT_MOC_LITERAL(32, 909, 34), // "getCurrentRegisterContextMenu..."
QT_MOC_LITERAL(33, 944, 15), // "QList<QAction*>"
QT_MOC_LITERAL(34, 960, 15), // "active_register"
QT_MOC_LITERAL(35, 976, 8), // "Register"
QT_MOC_LITERAL(36, 985, 17), // "toggle_flag_carry"
QT_MOC_LITERAL(37, 1003, 18), // "toggle_flag_parity"
QT_MOC_LITERAL(38, 1022, 21), // "toggle_flag_auxiliary"
QT_MOC_LITERAL(39, 1044, 16), // "toggle_flag_zero"
QT_MOC_LITERAL(40, 1061, 16), // "toggle_flag_sign"
QT_MOC_LITERAL(41, 1078, 21), // "toggle_flag_direction"
QT_MOC_LITERAL(42, 1100, 20), // "toggle_flag_overflow"
QT_MOC_LITERAL(43, 1121, 14), // "mnuModifyBytes"
QT_MOC_LITERAL(44, 1136, 17), // "mnuCPUEditComment"
QT_MOC_LITERAL(45, 1154, 19), // "mnuCPURemoveComment"
QT_MOC_LITERAL(46, 1174, 19), // "mnuCPURunToThisLine"
QT_MOC_LITERAL(47, 1194, 29), // "mnuCPURunToThisLinePassSignal"
QT_MOC_LITERAL(48, 1224, 22), // "mnuCPUToggleBreakpoint"
QT_MOC_LITERAL(49, 1247, 30), // "mnuCPUAddConditionalBreakpoint"
QT_MOC_LITERAL(50, 1278, 13), // "mnuCPUFillNop"
QT_MOC_LITERAL(51, 1292, 14), // "mnuCPUFillZero"
QT_MOC_LITERAL(52, 1307, 12), // "mnuCPUFollow"
QT_MOC_LITERAL(53, 1320, 18), // "mnuCPUFollowInDump"
QT_MOC_LITERAL(54, 1339, 19), // "mnuCPUFollowInStack"
QT_MOC_LITERAL(55, 1359, 19), // "mnuCPUJumpToAddress"
QT_MOC_LITERAL(56, 1379, 15), // "mnuCPUJumpToEIP"
QT_MOC_LITERAL(57, 1395, 12), // "mnuCPUModify"
QT_MOC_LITERAL(58, 1408, 22), // "mnuCPURemoveBreakpoint"
QT_MOC_LITERAL(59, 1431, 12), // "mnuCPUSetEIP"
QT_MOC_LITERAL(60, 1444, 18), // "mnuCPULabelAddress"
QT_MOC_LITERAL(61, 1463, 23), // "mnuRegisterFollowInDump"
QT_MOC_LITERAL(62, 1487, 29), // "mnuRegisterFollowInDumpNewTab"
QT_MOC_LITERAL(63, 1517, 24), // "mnuRegisterFollowInStack"
QT_MOC_LITERAL(64, 1542, 18), // "mnuDumpContextMenu"
QT_MOC_LITERAL(65, 1561, 3), // "pos"
QT_MOC_LITERAL(66, 1565, 16), // "mnuDumpCreateTab"
QT_MOC_LITERAL(67, 1582, 16), // "mnuDumpDeleteTab"
QT_MOC_LITERAL(68, 1599, 18), // "mnuDumpFollowInCPU"
QT_MOC_LITERAL(69, 1618, 19), // "mnuDumpFollowInDump"
QT_MOC_LITERAL(70, 1638, 20), // "mnuDumpFollowInStack"
QT_MOC_LITERAL(71, 1659, 18), // "mnuDumpGotoAddress"
QT_MOC_LITERAL(72, 1678, 13), // "mnuDumpModify"
QT_MOC_LITERAL(73, 1692, 17), // "mnuDumpSaveToFile"
QT_MOC_LITERAL(74, 1710, 19), // "mnuStackContextMenu"
QT_MOC_LITERAL(75, 1730, 19), // "mnuStackFollowInCPU"
QT_MOC_LITERAL(76, 1750, 20), // "mnuStackFollowInDump"
QT_MOC_LITERAL(77, 1771, 21), // "mnuStackFollowInStack"
QT_MOC_LITERAL(78, 1793, 19), // "mnuStackGotoAddress"
QT_MOC_LITERAL(79, 1813, 15), // "mnuStackGotoEBP"
QT_MOC_LITERAL(80, 1829, 15), // "mnuStackGotoESP"
QT_MOC_LITERAL(81, 1845, 14), // "mnuStackModify"
QT_MOC_LITERAL(82, 1860, 11), // "mnuStackPop"
QT_MOC_LITERAL(83, 1872, 12), // "mnuStackPush"
QT_MOC_LITERAL(84, 1885, 18), // "mnuStackToggleLock"
QT_MOC_LITERAL(85, 1904, 6), // "locked"
QT_MOC_LITERAL(86, 1911, 14), // "goto_triggered"
QT_MOC_LITERAL(87, 1926, 16), // "next_debug_event"
QT_MOC_LITERAL(88, 1943, 9), // "open_file"
QT_MOC_LITERAL(89, 1953, 1), // "s"
QT_MOC_LITERAL(90, 1955, 1), // "a"
QT_MOC_LITERAL(91, 1957, 16), // "tab_context_menu"
QT_MOC_LITERAL(92, 1974, 5), // "index"
QT_MOC_LITERAL(93, 1980, 17), // "tty_proc_finished"
QT_MOC_LITERAL(94, 1998, 9), // "exit_code"
QT_MOC_LITERAL(95, 2008, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(96, 2029, 11) // "exit_status"

    },
    "Debugger\0gui_updated\0\0debugEvent\0"
    "detachEvent\0attachEvent\0"
    "on_action_Help_triggered\0"
    "on_actionAbout_QT_triggered\0"
    "on_actionApplication_Arguments_triggered\0"
    "on_actionApplication_Working_Directory_triggered\0"
    "on_actionRun_Until_Return_triggered\0"
    "on_action_About_triggered\0"
    "on_action_Attach_triggered\0"
    "on_action_Configure_Debugger_triggered\0"
    "on_action_Detach_triggered\0"
    "on_action_Kill_triggered\0"
    "on_action_Memory_Regions_triggered\0"
    "on_action_Open_triggered\0"
    "on_action_Pause_triggered\0"
    "on_action_Plugins_triggered\0"
    "on_action_Restart_triggered\0"
    "on_action_Run_Pass_Signal_To_Application_triggered\0"
    "on_action_Run_triggered\0"
    "on_action_Step_Into_Pass_Signal_To_Application_triggered\0"
    "on_action_Step_Into_triggered\0"
    "on_action_Step_Over_Pass_Signal_To_Application_triggered\0"
    "on_action_Step_Over_triggered\0"
    "on_actionStep_Out_triggered\0"
    "on_action_Threads_triggered\0"
    "on_cpuView_breakPointToggled\0"
    "edb::address_t\0on_cpuView_customContextMenuRequested\0"
    "getCurrentRegisterContextMenuItems\0"
    "QList<QAction*>\0active_register\0"
    "Register\0toggle_flag_carry\0"
    "toggle_flag_parity\0toggle_flag_auxiliary\0"
    "toggle_flag_zero\0toggle_flag_sign\0"
    "toggle_flag_direction\0toggle_flag_overflow\0"
    "mnuModifyBytes\0mnuCPUEditComment\0"
    "mnuCPURemoveComment\0mnuCPURunToThisLine\0"
    "mnuCPURunToThisLinePassSignal\0"
    "mnuCPUToggleBreakpoint\0"
    "mnuCPUAddConditionalBreakpoint\0"
    "mnuCPUFillNop\0mnuCPUFillZero\0mnuCPUFollow\0"
    "mnuCPUFollowInDump\0mnuCPUFollowInStack\0"
    "mnuCPUJumpToAddress\0mnuCPUJumpToEIP\0"
    "mnuCPUModify\0mnuCPURemoveBreakpoint\0"
    "mnuCPUSetEIP\0mnuCPULabelAddress\0"
    "mnuRegisterFollowInDump\0"
    "mnuRegisterFollowInDumpNewTab\0"
    "mnuRegisterFollowInStack\0mnuDumpContextMenu\0"
    "pos\0mnuDumpCreateTab\0mnuDumpDeleteTab\0"
    "mnuDumpFollowInCPU\0mnuDumpFollowInDump\0"
    "mnuDumpFollowInStack\0mnuDumpGotoAddress\0"
    "mnuDumpModify\0mnuDumpSaveToFile\0"
    "mnuStackContextMenu\0mnuStackFollowInCPU\0"
    "mnuStackFollowInDump\0mnuStackFollowInStack\0"
    "mnuStackGotoAddress\0mnuStackGotoEBP\0"
    "mnuStackGotoESP\0mnuStackModify\0"
    "mnuStackPop\0mnuStackPush\0mnuStackToggleLock\0"
    "locked\0goto_triggered\0next_debug_event\0"
    "open_file\0s\0a\0tab_context_menu\0index\0"
    "tty_proc_finished\0exit_code\0"
    "QProcess::ExitStatus\0exit_status"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Debugger[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      84,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  434,    2, 0x06 /* Public */,
       3,    0,  435,    2, 0x06 /* Public */,
       4,    0,  436,    2, 0x06 /* Public */,
       5,    0,  437,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,  438,    2, 0x0a /* Public */,
       7,    0,  439,    2, 0x0a /* Public */,
       8,    0,  440,    2, 0x0a /* Public */,
       9,    0,  441,    2, 0x0a /* Public */,
      10,    0,  442,    2, 0x0a /* Public */,
      11,    0,  443,    2, 0x0a /* Public */,
      12,    0,  444,    2, 0x0a /* Public */,
      13,    0,  445,    2, 0x0a /* Public */,
      14,    0,  446,    2, 0x0a /* Public */,
      15,    0,  447,    2, 0x0a /* Public */,
      16,    0,  448,    2, 0x0a /* Public */,
      17,    0,  449,    2, 0x0a /* Public */,
      18,    0,  450,    2, 0x0a /* Public */,
      19,    0,  451,    2, 0x0a /* Public */,
      20,    0,  452,    2, 0x0a /* Public */,
      21,    0,  453,    2, 0x0a /* Public */,
      22,    0,  454,    2, 0x0a /* Public */,
      23,    0,  455,    2, 0x0a /* Public */,
      24,    0,  456,    2, 0x0a /* Public */,
      25,    0,  457,    2, 0x0a /* Public */,
      26,    0,  458,    2, 0x0a /* Public */,
      27,    0,  459,    2, 0x0a /* Public */,
      28,    0,  460,    2, 0x0a /* Public */,
      29,    1,  461,    2, 0x0a /* Public */,
      31,    1,  464,    2, 0x0a /* Public */,
      32,    0,  467,    2, 0x0a /* Public */,
      34,    0,  468,    2, 0x0a /* Public */,
      36,    0,  469,    2, 0x0a /* Public */,
      37,    0,  470,    2, 0x0a /* Public */,
      38,    0,  471,    2, 0x0a /* Public */,
      39,    0,  472,    2, 0x0a /* Public */,
      40,    0,  473,    2, 0x0a /* Public */,
      41,    0,  474,    2, 0x0a /* Public */,
      42,    0,  475,    2, 0x0a /* Public */,
      43,    0,  476,    2, 0x08 /* Private */,
      44,    0,  477,    2, 0x08 /* Private */,
      45,    0,  478,    2, 0x08 /* Private */,
      46,    0,  479,    2, 0x08 /* Private */,
      47,    0,  480,    2, 0x08 /* Private */,
      48,    0,  481,    2, 0x08 /* Private */,
      49,    0,  482,    2, 0x08 /* Private */,
      50,    0,  483,    2, 0x08 /* Private */,
      51,    0,  484,    2, 0x08 /* Private */,
      52,    0,  485,    2, 0x08 /* Private */,
      53,    0,  486,    2, 0x08 /* Private */,
      54,    0,  487,    2, 0x08 /* Private */,
      55,    0,  488,    2, 0x08 /* Private */,
      56,    0,  489,    2, 0x08 /* Private */,
      57,    0,  490,    2, 0x08 /* Private */,
      58,    0,  491,    2, 0x08 /* Private */,
      59,    0,  492,    2, 0x08 /* Private */,
      60,    0,  493,    2, 0x08 /* Private */,
      61,    0,  494,    2, 0x08 /* Private */,
      62,    0,  495,    2, 0x08 /* Private */,
      63,    0,  496,    2, 0x08 /* Private */,
      64,    1,  497,    2, 0x08 /* Private */,
      66,    0,  500,    2, 0x08 /* Private */,
      67,    0,  501,    2, 0x08 /* Private */,
      68,    0,  502,    2, 0x08 /* Private */,
      69,    0,  503,    2, 0x08 /* Private */,
      70,    0,  504,    2, 0x08 /* Private */,
      71,    0,  505,    2, 0x08 /* Private */,
      72,    0,  506,    2, 0x08 /* Private */,
      73,    0,  507,    2, 0x08 /* Private */,
      74,    1,  508,    2, 0x08 /* Private */,
      75,    0,  511,    2, 0x08 /* Private */,
      76,    0,  512,    2, 0x08 /* Private */,
      77,    0,  513,    2, 0x08 /* Private */,
      78,    0,  514,    2, 0x08 /* Private */,
      79,    0,  515,    2, 0x08 /* Private */,
      80,    0,  516,    2, 0x08 /* Private */,
      81,    0,  517,    2, 0x08 /* Private */,
      82,    0,  518,    2, 0x08 /* Private */,
      83,    0,  519,    2, 0x08 /* Private */,
      84,    1,  520,    2, 0x08 /* Private */,
      86,    0,  523,    2, 0x08 /* Private */,
      87,    0,  524,    2, 0x08 /* Private */,
      88,    2,  525,    2, 0x08 /* Private */,
      91,    2,  530,    2, 0x08 /* Private */,
      93,    2,  535,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 30,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    0x80000000 | 33,
    0x80000000 | 35,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   65,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   85,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArrayList,   89,   90,
    QMetaType::Void, QMetaType::Int, QMetaType::QPoint,   92,   65,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 95,   94,   96,

       0        // eod
};

void Debugger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Debugger *_t = static_cast<Debugger *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gui_updated(); break;
        case 1: _t->debugEvent(); break;
        case 2: _t->detachEvent(); break;
        case 3: _t->attachEvent(); break;
        case 4: _t->on_action_Help_triggered(); break;
        case 5: _t->on_actionAbout_QT_triggered(); break;
        case 6: _t->on_actionApplication_Arguments_triggered(); break;
        case 7: _t->on_actionApplication_Working_Directory_triggered(); break;
        case 8: _t->on_actionRun_Until_Return_triggered(); break;
        case 9: _t->on_action_About_triggered(); break;
        case 10: _t->on_action_Attach_triggered(); break;
        case 11: _t->on_action_Configure_Debugger_triggered(); break;
        case 12: _t->on_action_Detach_triggered(); break;
        case 13: _t->on_action_Kill_triggered(); break;
        case 14: _t->on_action_Memory_Regions_triggered(); break;
        case 15: _t->on_action_Open_triggered(); break;
        case 16: _t->on_action_Pause_triggered(); break;
        case 17: _t->on_action_Plugins_triggered(); break;
        case 18: _t->on_action_Restart_triggered(); break;
        case 19: _t->on_action_Run_Pass_Signal_To_Application_triggered(); break;
        case 20: _t->on_action_Run_triggered(); break;
        case 21: _t->on_action_Step_Into_Pass_Signal_To_Application_triggered(); break;
        case 22: _t->on_action_Step_Into_triggered(); break;
        case 23: _t->on_action_Step_Over_Pass_Signal_To_Application_triggered(); break;
        case 24: _t->on_action_Step_Over_triggered(); break;
        case 25: _t->on_actionStep_Out_triggered(); break;
        case 26: _t->on_action_Threads_triggered(); break;
        case 27: _t->on_cpuView_breakPointToggled((*reinterpret_cast< edb::address_t(*)>(_a[1]))); break;
        case 28: _t->on_cpuView_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 29: { QList<QAction*> _r = _t->getCurrentRegisterContextMenuItems();
            if (_a[0]) *reinterpret_cast< QList<QAction*>*>(_a[0]) = _r; }  break;
        case 30: { Register _r = _t->active_register();
            if (_a[0]) *reinterpret_cast< Register*>(_a[0]) = _r; }  break;
        case 31: _t->toggle_flag_carry(); break;
        case 32: _t->toggle_flag_parity(); break;
        case 33: _t->toggle_flag_auxiliary(); break;
        case 34: _t->toggle_flag_zero(); break;
        case 35: _t->toggle_flag_sign(); break;
        case 36: _t->toggle_flag_direction(); break;
        case 37: _t->toggle_flag_overflow(); break;
        case 38: _t->mnuModifyBytes(); break;
        case 39: _t->mnuCPUEditComment(); break;
        case 40: _t->mnuCPURemoveComment(); break;
        case 41: _t->mnuCPURunToThisLine(); break;
        case 42: _t->mnuCPURunToThisLinePassSignal(); break;
        case 43: _t->mnuCPUToggleBreakpoint(); break;
        case 44: _t->mnuCPUAddConditionalBreakpoint(); break;
        case 45: _t->mnuCPUFillNop(); break;
        case 46: _t->mnuCPUFillZero(); break;
        case 47: _t->mnuCPUFollow(); break;
        case 48: _t->mnuCPUFollowInDump(); break;
        case 49: _t->mnuCPUFollowInStack(); break;
        case 50: _t->mnuCPUJumpToAddress(); break;
        case 51: _t->mnuCPUJumpToEIP(); break;
        case 52: _t->mnuCPUModify(); break;
        case 53: _t->mnuCPURemoveBreakpoint(); break;
        case 54: _t->mnuCPUSetEIP(); break;
        case 55: _t->mnuCPULabelAddress(); break;
        case 56: _t->mnuRegisterFollowInDump(); break;
        case 57: _t->mnuRegisterFollowInDumpNewTab(); break;
        case 58: _t->mnuRegisterFollowInStack(); break;
        case 59: _t->mnuDumpContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 60: _t->mnuDumpCreateTab(); break;
        case 61: _t->mnuDumpDeleteTab(); break;
        case 62: _t->mnuDumpFollowInCPU(); break;
        case 63: _t->mnuDumpFollowInDump(); break;
        case 64: _t->mnuDumpFollowInStack(); break;
        case 65: _t->mnuDumpGotoAddress(); break;
        case 66: _t->mnuDumpModify(); break;
        case 67: _t->mnuDumpSaveToFile(); break;
        case 68: _t->mnuStackContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 69: _t->mnuStackFollowInCPU(); break;
        case 70: _t->mnuStackFollowInDump(); break;
        case 71: _t->mnuStackFollowInStack(); break;
        case 72: _t->mnuStackGotoAddress(); break;
        case 73: _t->mnuStackGotoEBP(); break;
        case 74: _t->mnuStackGotoESP(); break;
        case 75: _t->mnuStackModify(); break;
        case 76: _t->mnuStackPop(); break;
        case 77: _t->mnuStackPush(); break;
        case 78: _t->mnuStackToggleLock((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 79: _t->goto_triggered(); break;
        case 80: _t->next_debug_event(); break;
        case 81: _t->open_file((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<QByteArray>(*)>(_a[2]))); break;
        case 82: _t->tab_context_menu((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2]))); break;
        case 83: _t->tty_proc_finished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Debugger::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Debugger::gui_updated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Debugger::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Debugger::debugEvent)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Debugger::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Debugger::detachEvent)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Debugger::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Debugger::attachEvent)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject Debugger::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Debugger.data,
      qt_meta_data_Debugger,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Debugger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Debugger::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Debugger.stringdata0))
        return static_cast<void*>(const_cast< Debugger*>(this));
    if (!strcmp(_clname, "IDebugEventHandler"))
        return static_cast< IDebugEventHandler*>(const_cast< Debugger*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Debugger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 84)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 84;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 84)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 84;
    }
    return _id;
}

// SIGNAL 0
void Debugger::gui_updated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Debugger::debugEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Debugger::detachEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void Debugger::attachEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
