/****************************************************************************
** Meta object code from reading C++ file 'SymbolViewer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SymbolViewer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SymbolViewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SymbolViewer__SymbolViewer[] = {

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
      38,   27,
      68,   45,

 // slots: signature, parameters, type, tag, flags
      73,   72,   72,   72, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SymbolViewer__SymbolViewer[] = {
    "SymbolViewer::SymbolViewer\0Evan Teran\0"
    "author\0http://www.codef00.com\0url\0\0"
    "show_menu()\0"
};

void SymbolViewer::SymbolViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SymbolViewer *_t = static_cast<SymbolViewer *>(_o);
        switch (_id) {
        case 0: _t->show_menu(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SymbolViewer::SymbolViewer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SymbolViewer::SymbolViewer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SymbolViewer__SymbolViewer,
      qt_meta_data_SymbolViewer__SymbolViewer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SymbolViewer::SymbolViewer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SymbolViewer::SymbolViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SymbolViewer::SymbolViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SymbolViewer__SymbolViewer))
        return static_cast<void*>(const_cast< SymbolViewer*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< SymbolViewer*>(this));
    if (!strcmp(_clname, "edb.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< SymbolViewer*>(this));
    return QObject::qt_metacast(_clname);
}

int SymbolViewer::SymbolViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
