/****************************************************************************
** Meta object code from reading C++ file 'DialogBacktrace.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DialogBacktrace.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogBacktrace.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Backtrace__DialogBacktrace[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   27,   27,   27, 0x0a,
      45,   27,   27,   27, 0x08,
      79,   74,   27,   27, 0x08,
     151,  140,   27,   27, 0x08,
     196,   27,   27,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Backtrace__DialogBacktrace[] = {
    "Backtrace::DialogBacktrace\0\0"
    "populate_table()\0on_pushButtonClose_clicked()\0"
    "item\0on_tableWidgetCallStack_itemDoubleClicked(QTableWidgetItem*)\0"
    "row,column\0on_tableWidgetCallStack_cellClicked(int,int)\0"
    "on_pushButtonReturnTo_clicked()\0"
};

void Backtrace::DialogBacktrace::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DialogBacktrace *_t = static_cast<DialogBacktrace *>(_o);
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

const QMetaObjectExtraData Backtrace::DialogBacktrace::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Backtrace::DialogBacktrace::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Backtrace__DialogBacktrace,
      qt_meta_data_Backtrace__DialogBacktrace, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Backtrace::DialogBacktrace::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Backtrace::DialogBacktrace::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Backtrace::DialogBacktrace::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Backtrace__DialogBacktrace))
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
    }
    return _id;
}
QT_END_MOC_NAMESPACE
