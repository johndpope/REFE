/****************************************************************************
** Meta object code from reading C++ file 'DialogBreakpoints.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/BreakpointManager/DialogBreakpoints.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogBreakpoints.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BreakpointManager__DialogBreakpoints_t {
    QByteArrayData data[11];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BreakpointManager__DialogBreakpoints_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BreakpointManager__DialogBreakpoints_t qt_meta_stringdata_BreakpointManager__DialogBreakpoints = {
    {
QT_MOC_LITERAL(0, 0, 36), // "BreakpointManager::DialogBrea..."
QT_MOC_LITERAL(1, 37, 10), // "updateList"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 17), // "on_btnAdd_clicked"
QT_MOC_LITERAL(4, 67, 20), // "on_btnRemove_clicked"
QT_MOC_LITERAL(5, 88, 23), // "on_btnCondition_clicked"
QT_MOC_LITERAL(6, 112, 32), // "on_tableWidget_cellDoubleClicked"
QT_MOC_LITERAL(7, 145, 3), // "row"
QT_MOC_LITERAL(8, 149, 3), // "col"
QT_MOC_LITERAL(9, 153, 20), // "on_btnImport_clicked"
QT_MOC_LITERAL(10, 174, 20) // "on_btnExport_clicked"

    },
    "BreakpointManager::DialogBreakpoints\0"
    "updateList\0\0on_btnAdd_clicked\0"
    "on_btnRemove_clicked\0on_btnCondition_clicked\0"
    "on_tableWidget_cellDoubleClicked\0row\0"
    "col\0on_btnImport_clicked\0on_btnExport_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BreakpointManager__DialogBreakpoints[] = {

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
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x0a /* Public */,
       5,    0,   52,    2, 0x0a /* Public */,
       6,    2,   53,    2, 0x0a /* Public */,
       9,    0,   58,    2, 0x0a /* Public */,
      10,    0,   59,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BreakpointManager::DialogBreakpoints::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DialogBreakpoints *_t = static_cast<DialogBreakpoints *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateList(); break;
        case 1: _t->on_btnAdd_clicked(); break;
        case 2: _t->on_btnRemove_clicked(); break;
        case 3: _t->on_btnCondition_clicked(); break;
        case 4: _t->on_tableWidget_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->on_btnImport_clicked(); break;
        case 6: _t->on_btnExport_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject BreakpointManager::DialogBreakpoints::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BreakpointManager__DialogBreakpoints.data,
      qt_meta_data_BreakpointManager__DialogBreakpoints,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BreakpointManager::DialogBreakpoints::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BreakpointManager::DialogBreakpoints::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BreakpointManager__DialogBreakpoints.stringdata0))
        return static_cast<void*>(const_cast< DialogBreakpoints*>(this));
    return QDialog::qt_metacast(_clname);
}

int BreakpointManager::DialogBreakpoints::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
