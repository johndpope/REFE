/****************************************************************************
** Meta object code from reading C++ file 'DialogROPTool.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/ROPTool/DialogROPTool.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogROPTool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ROPTool__DialogROPTool_t {
    QByteArrayData data[11];
    char stringdata0[223];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ROPTool__DialogROPTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ROPTool__DialogROPTool_t qt_meta_stringdata_ROPTool__DialogROPTool = {
    {
QT_MOC_LITERAL(0, 0, 22), // "ROPTool::DialogROPTool"
QT_MOC_LITERAL(1, 23, 18), // "on_btnFind_clicked"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 25), // "on_listView_doubleClicked"
QT_MOC_LITERAL(4, 69, 5), // "index"
QT_MOC_LITERAL(5, 75, 26), // "on_chkShowALU_stateChanged"
QT_MOC_LITERAL(6, 102, 5), // "state"
QT_MOC_LITERAL(7, 108, 28), // "on_chkShowStack_stateChanged"
QT_MOC_LITERAL(8, 137, 28), // "on_chkShowLogic_stateChanged"
QT_MOC_LITERAL(9, 166, 27), // "on_chkShowData_stateChanged"
QT_MOC_LITERAL(10, 194, 28) // "on_chkShowOther_stateChanged"

    },
    "ROPTool::DialogROPTool\0on_btnFind_clicked\0"
    "\0on_listView_doubleClicked\0index\0"
    "on_chkShowALU_stateChanged\0state\0"
    "on_chkShowStack_stateChanged\0"
    "on_chkShowLogic_stateChanged\0"
    "on_chkShowData_stateChanged\0"
    "on_chkShowOther_stateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ROPTool__DialogROPTool[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    1,   50,    2, 0x0a /* Public */,
       5,    1,   53,    2, 0x0a /* Public */,
       7,    1,   56,    2, 0x0a /* Public */,
       8,    1,   59,    2, 0x0a /* Public */,
       9,    1,   62,    2, 0x0a /* Public */,
      10,    1,   65,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void ROPTool::DialogROPTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DialogROPTool *_t = static_cast<DialogROPTool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnFind_clicked(); break;
        case 1: _t->on_listView_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->on_chkShowALU_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_chkShowStack_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_chkShowLogic_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_chkShowData_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_chkShowOther_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ROPTool::DialogROPTool::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ROPTool__DialogROPTool.data,
      qt_meta_data_ROPTool__DialogROPTool,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ROPTool::DialogROPTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ROPTool::DialogROPTool::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ROPTool__DialogROPTool.stringdata0))
        return static_cast<void*>(const_cast< DialogROPTool*>(this));
    return QDialog::qt_metacast(_clname);
}

int ROPTool::DialogROPTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
