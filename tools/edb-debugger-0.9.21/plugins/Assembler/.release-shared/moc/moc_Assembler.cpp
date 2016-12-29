/****************************************************************************
** Meta object code from reading C++ file 'Assembler.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Assembler.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Assembler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Assembler__Assembler[] = {

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
      32,   21,
      62,   39,

 // slots: signature, parameters, type, tag, flags
      67,   66,   66,   66, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Assembler__Assembler[] = {
    "Assembler::Assembler\0Evan Teran\0author\0"
    "http://www.codef00.com\0url\0\0show_dialog()\0"
};

void Assembler::Assembler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Assembler *_t = static_cast<Assembler *>(_o);
        switch (_id) {
        case 0: _t->show_dialog(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Assembler::Assembler::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Assembler::Assembler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Assembler__Assembler,
      qt_meta_data_Assembler__Assembler, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Assembler::Assembler::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Assembler::Assembler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Assembler::Assembler::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Assembler__Assembler))
        return static_cast<void*>(const_cast< Assembler*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< Assembler*>(this));
    if (!strcmp(_clname, "edb.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< Assembler*>(this));
    return QObject::qt_metacast(_clname);
}

int Assembler::Assembler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
