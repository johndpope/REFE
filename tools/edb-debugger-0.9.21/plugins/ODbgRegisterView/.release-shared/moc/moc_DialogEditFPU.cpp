/****************************************************************************
** Meta object code from reading C++ file 'DialogEditFPU.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DialogEditFPU.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogEditFPU.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DialogEditFPU[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      36,   14,   14,   14, 0x08,
      59,   14,   14,   14, 0x08,
      78,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DialogEditFPU[] = {
    "DialogEditFPU\0\0onHexEdited(QString)\0"
    "onFloatEdited(QString)\0updateFloatEntry()\0"
    "updateHexEntry()\0"
};

void DialogEditFPU::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DialogEditFPU *_t = static_cast<DialogEditFPU *>(_o);
        switch (_id) {
        case 0: _t->onHexEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->onFloatEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->updateFloatEntry(); break;
        case 3: _t->updateHexEntry(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DialogEditFPU::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DialogEditFPU::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogEditFPU,
      qt_meta_data_DialogEditFPU, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DialogEditFPU::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DialogEditFPU::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DialogEditFPU::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogEditFPU))
        return static_cast<void*>(const_cast< DialogEditFPU*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogEditFPU::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
