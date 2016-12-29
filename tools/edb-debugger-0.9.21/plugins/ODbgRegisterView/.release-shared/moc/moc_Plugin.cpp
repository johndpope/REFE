/****************************************************************************
** Meta object code from reading C++ file 'Plugin.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Plugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Plugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ODbgRegisterView__Plugin[] = {

 // content:
       6,       // revision
       0,       // classname
       2,   14, // classinfo
       7,   18, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
      43,   25,
      72,   50,

 // slots: signature, parameters, type, tag, flags
      79,   78,   78,   78, 0x08,
     100,   78,   78,   78, 0x08,
     120,  112,   78,   78, 0x08,
     137,  112,   78,   78, 0x08,
     156,  112,   78,   78, 0x08,
     173,  112,   78,   78, 0x08,
     192,   78,   78,   78, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ODbgRegisterView__Plugin[] = {
    "ODbgRegisterView::Plugin\0Ruslan Kabatsayev\0"
    "author\0b7.10110111@gmail.com\0email\0\0"
    "createRegisterView()\0saveState()\0"
    "checked\0expandRSUp(bool)\0expandRSDown(bool)\0"
    "expandLSUp(bool)\0expandLSDown(bool)\0"
    "removeDock(QWidget*)\0"
};

void ODbgRegisterView::Plugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Plugin *_t = static_cast<Plugin *>(_o);
        switch (_id) {
        case 0: _t->createRegisterView(); break;
        case 1: _t->saveState(); break;
        case 2: _t->expandRSUp((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->expandRSDown((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->expandLSUp((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->expandLSDown((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->removeDock((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ODbgRegisterView::Plugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ODbgRegisterView::Plugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ODbgRegisterView__Plugin,
      qt_meta_data_ODbgRegisterView__Plugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ODbgRegisterView::Plugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ODbgRegisterView::Plugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ODbgRegisterView::Plugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ODbgRegisterView__Plugin))
        return static_cast<void*>(const_cast< Plugin*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< Plugin*>(this));
    if (!strcmp(_clname, "edb.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< Plugin*>(this));
    return QObject::qt_metacast(_clname);
}

int ODbgRegisterView::Plugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
