/****************************************************************************
** Meta object code from reading C++ file 'ROPTool.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ROPTool.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ROPTool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ROPTool__ROPTool[] = {

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
      28,   17,
      58,   35,

 // slots: signature, parameters, type, tag, flags
      63,   62,   62,   62, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ROPTool__ROPTool[] = {
    "ROPTool::ROPTool\0Evan Teran\0author\0"
    "http://www.codef00.com\0url\0\0show_menu()\0"
};

void ROPTool::ROPTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ROPTool *_t = static_cast<ROPTool *>(_o);
        switch (_id) {
        case 0: _t->show_menu(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ROPTool::ROPTool::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ROPTool::ROPTool::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ROPTool__ROPTool,
      qt_meta_data_ROPTool__ROPTool, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ROPTool::ROPTool::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ROPTool::ROPTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ROPTool::ROPTool::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ROPTool__ROPTool))
        return static_cast<void*>(const_cast< ROPTool*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< ROPTool*>(this));
    if (!strcmp(_clname, "edb.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< ROPTool*>(this));
    return QObject::qt_metacast(_clname);
}

int ROPTool::ROPTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
