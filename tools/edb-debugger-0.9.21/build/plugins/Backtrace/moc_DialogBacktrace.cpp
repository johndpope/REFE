/****************************************************************************
** Meta object code from reading C++ file 'DialogBacktrace.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/Backtrace/DialogBacktrace.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogBacktrace.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Backtrace__DialogBacktrace_t {
    QByteArrayData data[11];
    char stringdata0[212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Backtrace__DialogBacktrace_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Backtrace__DialogBacktrace_t qt_meta_stringdata_Backtrace__DialogBacktrace = {
    {
QT_MOC_LITERAL(0, 0, 26), // "Backtrace::DialogBacktrace"
QT_MOC_LITERAL(1, 27, 14), // "populate_table"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 26), // "on_pushButtonClose_clicked"
QT_MOC_LITERAL(4, 70, 41), // "on_tableWidgetCallStack_itemD..."
QT_MOC_LITERAL(5, 112, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(6, 130, 4), // "item"
QT_MOC_LITERAL(7, 135, 35), // "on_tableWidgetCallStack_cellC..."
QT_MOC_LITERAL(8, 171, 3), // "row"
QT_MOC_LITERAL(9, 175, 6), // "column"
QT_MOC_LITERAL(10, 182, 29) // "on_pushButtonReturnTo_clicked"

    },
    "Backtrace::DialogBacktrace\0populate_table\0"
    "\0on_pushButtonClose_clicked\0"
    "on_tableWidgetCallStack_itemDoubleClicked\0"
    "QTableWidgetItem*\0item\0"
    "on_tableWidgetCallStack_cellClicked\0"
    "row\0column\0on_pushButtonReturnTo_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Backtrace__DialogBacktrace[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    1,   41,    2, 0x08 /* Private */,
       7,    2,   44,    2, 0x08 /* Private */,
      10,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,
    QMetaType::Void,

       0        // eod
};

void Backtrace::DialogBacktrace::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DialogBacktrace *_t = static_cast<DialogBacktrace *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->populate_table(); break;
        case 1: _t->on_pushButtonClose_clicked(); break;
        case 2: _t->on_tableWidgetCallStack_itemDoubleClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->on_tableWidgetCallStack_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->on_pushButtonReturnTo_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Backtrace::DialogBacktrace::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Backtrace__DialogBacktrace.data,
      qt_meta_data_Backtrace__DialogBacktrace,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Backtrace::DialogBacktrace::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Backtrace::DialogBacktrace::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Backtrace__DialogBacktrace.stringdata0))
        return static_cast<void*>(const_cast< DialogBacktrace*>(this));
    return QDialog::qt_metacast(_clname);
}

int Backtrace::DialogBacktrace::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
