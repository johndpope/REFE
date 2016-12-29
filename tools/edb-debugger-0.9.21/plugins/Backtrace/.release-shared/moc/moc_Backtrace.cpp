/****************************************************************************
** Meta object code from reading C++ file 'Backtrace.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Backtrace.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Backtrace.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Backtrace__Backtrace[] = {

 // content:
       6,       // revision
       0,       // classname
       2,   14, // classinfo
       1,   18, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
      38,   21,
      80,   45,

 // slots: signature, parameters, type, tag, flags
      85,   84,   84,   84, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Backtrace__Backtrace[] = {
    "Backtrace::Backtrace\0Armen Boursalian\0"
    "author\0https://github.com/Northern-Lights\0"
    "url\0\0show_menu()\0"
};

void Backtrace::Backtrace::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Backtrace *_t = static_cast<Backtrace *>(_o);
        switch (_id) {
        case 0: _t->show_menu(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Backtrace::Backtrace::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Backtrace::Backtrace::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Backtrace__Backtrace,
      qt_meta_data_Backtrace__Backtrace, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Backtrace::Backtrace::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Backtrace::Backtrace::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Backtrace::Backtrace::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Backtrace__Backtrace))
        return static_cast<void*>(const_cast< Backtrace*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< Backtrace*>(this));
    if (!strcmp(_clname, "edb.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< Backtrace*>(this));
    return QObject::qt_metacast(_clname);
}

int Backtrace::Backtrace::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
