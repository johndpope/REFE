/****************************************************************************
** Meta object code from reading C++ file 'RegisterViewModelBase.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/RegisterViewModelBase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RegisterViewModelBase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RegisterViewModelBase__Model_t {
    QByteArrayData data[4];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RegisterViewModelBase__Model_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RegisterViewModelBase__Model_t qt_meta_stringdata_RegisterViewModelBase__Model = {
    {
QT_MOC_LITERAL(0, 0, 28), // "RegisterViewModelBase::Model"
QT_MOC_LITERAL(1, 29, 24), // "SIMDDisplayFormatChanged"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 23) // "FPUDisplayFormatChanged"

    },
    "RegisterViewModelBase::Model\0"
    "SIMDDisplayFormatChanged\0\0"
    "FPUDisplayFormatChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RegisterViewModelBase__Model[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RegisterViewModelBase::Model::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Model *_t = static_cast<Model *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SIMDDisplayFormatChanged(); break;
        case 1: _t->FPUDisplayFormatChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Model::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Model::SIMDDisplayFormatChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Model::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Model::FPUDisplayFormatChanged)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject RegisterViewModelBase::Model::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_RegisterViewModelBase__Model.data,
      qt_meta_data_RegisterViewModelBase__Model,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RegisterViewModelBase::Model::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RegisterViewModelBase::Model::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RegisterViewModelBase__Model.stringdata0))
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
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void RegisterViewModelBase::Model::SIMDDisplayFormatChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void RegisterViewModelBase::Model::FPUDisplayFormatChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
