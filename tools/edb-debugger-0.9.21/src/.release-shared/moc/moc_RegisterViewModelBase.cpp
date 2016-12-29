/****************************************************************************
** Meta object code from reading C++ file 'RegisterViewModelBase.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/RegisterViewModelBase.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RegisterViewModelBase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RegisterViewModelBase__Model[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x05,
      57,   29,   29,   29, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_RegisterViewModelBase__Model[] = {
    "RegisterViewModelBase::Model\0\0"
    "SIMDDisplayFormatChanged()\0"
    "FPUDisplayFormatChanged()\0"
};

void RegisterViewModelBase::Model::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Model *_t = static_cast<Model *>(_o);
        switch (_id) {
        case 0: _t->SIMDDisplayFormatChanged(); break;
        case 1: _t->FPUDisplayFormatChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData RegisterViewModelBase::Model::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RegisterViewModelBase::Model::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_RegisterViewModelBase__Model,
      qt_meta_data_RegisterViewModelBase__Model, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RegisterViewModelBase::Model::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RegisterViewModelBase::Model::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RegisterViewModelBase::Model::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RegisterViewModelBase__Model))
        return static_cast<void*>(const_cast< Model*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int RegisterViewModelBase::Model::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void RegisterViewModelBase::Model::SIMDDisplayFormatChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void RegisterViewModelBase::Model::FPUDisplayFormatChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
