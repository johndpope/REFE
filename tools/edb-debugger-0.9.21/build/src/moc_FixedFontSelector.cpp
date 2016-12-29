/****************************************************************************
** Meta object code from reading C++ file 'FixedFontSelector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/FixedFontSelector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FixedFontSelector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FixedFontSelector_t {
    QByteArrayData data[8];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FixedFontSelector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FixedFontSelector_t qt_meta_stringdata_FixedFontSelector = {
    {
QT_MOC_LITERAL(0, 0, 17), // "FixedFontSelector"
QT_MOC_LITERAL(1, 18, 18), // "currentFontChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 4), // "font"
QT_MOC_LITERAL(4, 43, 14), // "setCurrentFont"
QT_MOC_LITERAL(5, 58, 31), // "on_fontCombo_currentFontChanged"
QT_MOC_LITERAL(6, 90, 31), // "on_fontSize_currentIndexChanged"
QT_MOC_LITERAL(7, 122, 5) // "index"

    },
    "FixedFontSelector\0currentFontChanged\0"
    "\0font\0setCurrentFont\0"
    "on_fontCombo_currentFontChanged\0"
    "on_fontSize_currentIndexChanged\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FixedFontSelector[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   42,    2, 0x0a /* Public */,
       4,    1,   45,    2, 0x0a /* Public */,
       5,    1,   48,    2, 0x08 /* Private */,
       6,    1,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QFont,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QFont,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QFont,    3,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void FixedFontSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FixedFontSelector *_t = static_cast<FixedFontSelector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentFontChanged((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 1: _t->setCurrentFont((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 2: _t->setCurrentFont((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_fontCombo_currentFontChanged((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 4: _t->on_fontSize_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FixedFontSelector::*_t)(const QFont & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FixedFontSelector::currentFontChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject FixedFontSelector::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FixedFontSelector.data,
      qt_meta_data_FixedFontSelector,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FixedFontSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FixedFontSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FixedFontSelector.stringdata0))
        return static_cast<void*>(const_cast< FixedFontSelector*>(this));
    return QWidget::qt_metacast(_clname);
}

int FixedFontSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void FixedFontSelector::currentFontChanged(const QFont & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
