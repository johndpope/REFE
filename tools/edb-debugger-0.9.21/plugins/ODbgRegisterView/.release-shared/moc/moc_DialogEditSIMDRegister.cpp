/****************************************************************************
** Meta object code from reading C++ file 'DialogEditSIMDRegister.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DialogEditSIMDRegister.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogEditSIMDRegister.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DialogEditSIMDRegister[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x08,
      39,   23,   23,   23, 0x08,
      54,   23,   23,   23, 0x08,
      70,   23,   23,   23, 0x08,
      86,   23,   23,   23, 0x08,
     104,   23,   23,   23, 0x08,
     130,  122,   23,   23, 0x08,
     149,  122,   23,   23, 0x08,
     171,  122,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DialogEditSIMDRegister[] = {
    "DialogEditSIMDRegister\0\0onByteEdited()\0"
    "onWordEdited()\0onDwordEdited()\0"
    "onQwordEdited()\0onFloat32Edited()\0"
    "onFloat64Edited()\0checked\0onHexToggled(bool)\0"
    "onSignedToggled(bool)\0onUnsignedToggled(bool)\0"
};

void DialogEditSIMDRegister::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DialogEditSIMDRegister *_t = static_cast<DialogEditSIMDRegister *>(_o);
        switch (_id) {
        case 0: _t->onByteEdited(); break;
        case 1: _t->onWordEdited(); break;
        case 2: _t->onDwordEdited(); break;
        case 3: _t->onQwordEdited(); break;
        case 4: _t->onFloat32Edited(); break;
        case 5: _t->onFloat64Edited(); break;
        case 6: _t->onHexToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->onSignedToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->onUnsignedToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DialogEditSIMDRegister::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DialogEditSIMDRegister::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogEditSIMDRegister,
      qt_meta_data_DialogEditSIMDRegister, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DialogEditSIMDRegister::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DialogEditSIMDRegister::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DialogEditSIMDRegister::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogEditSIMDRegister))
        return static_cast<void*>(const_cast< DialogEditSIMDRegister*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogEditSIMDRegister::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
