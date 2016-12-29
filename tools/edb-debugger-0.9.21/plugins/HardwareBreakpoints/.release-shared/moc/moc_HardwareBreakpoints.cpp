/****************************************************************************
** Meta object code from reading C++ file 'HardwareBreakpoints.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../HardwareBreakpoints.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HardwareBreakpoints.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HardwareBreakpoints__HardwareBreakpoints[] = {

 // content:
       6,       // revision
       0,       // classname
       2,   14, // classinfo
      13,   18, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
      52,   41,
      82,   59,

 // slots: signature, parameters, type, tag, flags
      87,   86,   86,   86, 0x0a,
      99,   86,   86,   86, 0x0a,
     111,   86,   86,   86, 0x0a,
     123,   86,   86,   86, 0x0a,
     135,   86,   86,   86, 0x0a,
     147,   86,   86,   86, 0x0a,
     160,   86,   86,   86, 0x0a,
     173,   86,   86,   86, 0x0a,
     186,   86,   86,   86, 0x0a,
     199,   86,   86,   86, 0x0a,
     213,   86,   86,   86, 0x0a,
     227,   86,   86,   86, 0x0a,
     241,   86,   86,   86, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_HardwareBreakpoints__HardwareBreakpoints[] = {
    "HardwareBreakpoints::HardwareBreakpoints\0"
    "Evan Teran\0author\0http://www.codef00.com\0"
    "url\0\0show_menu()\0set_exec1()\0set_exec2()\0"
    "set_exec3()\0set_exec4()\0set_write1()\0"
    "set_write2()\0set_write3()\0set_write4()\0"
    "set_access1()\0set_access2()\0set_access3()\0"
    "set_access4()\0"
};

void HardwareBreakpoints::HardwareBreakpoints::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HardwareBreakpoints *_t = static_cast<HardwareBreakpoints *>(_o);
        switch (_id) {
        case 0: _t->show_menu(); break;
        case 1: _t->set_exec1(); break;
        case 2: _t->set_exec2(); break;
        case 3: _t->set_exec3(); break;
        case 4: _t->set_exec4(); break;
        case 5: _t->set_write1(); break;
        case 6: _t->set_write2(); break;
        case 7: _t->set_write3(); break;
        case 8: _t->set_write4(); break;
        case 9: _t->set_access1(); break;
        case 10: _t->set_access2(); break;
        case 11: _t->set_access3(); break;
        case 12: _t->set_access4(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData HardwareBreakpoints::HardwareBreakpoints::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject HardwareBreakpoints::HardwareBreakpoints::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HardwareBreakpoints__HardwareBreakpoints,
      qt_meta_data_HardwareBreakpoints__HardwareBreakpoints, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HardwareBreakpoints::HardwareBreakpoints::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HardwareBreakpoints::HardwareBreakpoints::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HardwareBreakpoints::HardwareBreakpoints::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HardwareBreakpoints__HardwareBreakpoints))
        return static_cast<void*>(const_cast< HardwareBreakpoints*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< HardwareBreakpoints*>(this));
    if (!strcmp(_clname, "IDebugEventHandler"))
        return static_cast< IDebugEventHandler*>(const_cast< HardwareBreakpoints*>(this));
    if (!strcmp(_clname, "edb.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< HardwareBreakpoints*>(this));
    return QObject::qt_metacast(_clname);
}

int HardwareBreakpoints::HardwareBreakpoints::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
