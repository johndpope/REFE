/****************************************************************************
** Meta object code from reading C++ file 'QDisassemblyView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/widgets/QDisassemblyView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QDisassemblyView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QDisassemblyView_t {
    QByteArrayData data[24];
    char stringdata0[280];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDisassemblyView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDisassemblyView_t qt_meta_stringdata_QDisassemblyView = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QDisassemblyView"
QT_MOC_LITERAL(1, 17, 14), // "signal_updated"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 17), // "breakPointToggled"
QT_MOC_LITERAL(4, 51, 14), // "edb::address_t"
QT_MOC_LITERAL(5, 66, 7), // "address"
QT_MOC_LITERAL(6, 74, 13), // "regionChanged"
QT_MOC_LITERAL(7, 88, 7), // "setFont"
QT_MOC_LITERAL(8, 96, 1), // "f"
QT_MOC_LITERAL(9, 98, 11), // "resizeEvent"
QT_MOC_LITERAL(10, 110, 13), // "QResizeEvent*"
QT_MOC_LITERAL(11, 124, 5), // "event"
QT_MOC_LITERAL(12, 130, 8), // "scrollTo"
QT_MOC_LITERAL(13, 139, 16), // "setAddressOffset"
QT_MOC_LITERAL(14, 156, 9), // "setRegion"
QT_MOC_LITERAL(15, 166, 16), // "IRegion::pointer"
QT_MOC_LITERAL(16, 183, 1), // "r"
QT_MOC_LITERAL(17, 185, 17), // "setCurrentAddress"
QT_MOC_LITERAL(18, 203, 5), // "clear"
QT_MOC_LITERAL(19, 209, 6), // "update"
QT_MOC_LITERAL(20, 216, 23), // "setShowAddressSeparator"
QT_MOC_LITERAL(21, 240, 5), // "value"
QT_MOC_LITERAL(22, 246, 26), // "scrollbar_action_triggered"
QT_MOC_LITERAL(23, 273, 6) // "action"

    },
    "QDisassemblyView\0signal_updated\0\0"
    "breakPointToggled\0edb::address_t\0"
    "address\0regionChanged\0setFont\0f\0"
    "resizeEvent\0QResizeEvent*\0event\0"
    "scrollTo\0setAddressOffset\0setRegion\0"
    "IRegion::pointer\0r\0setCurrentAddress\0"
    "clear\0update\0setShowAddressSeparator\0"
    "value\0scrollbar_action_triggered\0"
    "action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDisassemblyView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    1,   80,    2, 0x06 /* Public */,
       6,    0,   83,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   84,    2, 0x0a /* Public */,
       9,    1,   87,    2, 0x0a /* Public */,
      12,    1,   90,    2, 0x0a /* Public */,
      13,    1,   93,    2, 0x0a /* Public */,
      14,    1,   96,    2, 0x0a /* Public */,
      17,    1,   99,    2, 0x0a /* Public */,
      18,    0,  102,    2, 0x0a /* Public */,
      19,    0,  103,    2, 0x0a /* Public */,
      20,    1,  104,    2, 0x0a /* Public */,
      22,    1,  107,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QFont,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::Int,   23,

       0        // eod
};

void QDisassemblyView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDisassemblyView *_t = static_cast<QDisassemblyView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_updated(); break;
        case 1: _t->breakPointToggled((*reinterpret_cast< edb::address_t(*)>(_a[1]))); break;
        case 2: _t->regionChanged(); break;
        case 3: _t->setFont((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 4: _t->resizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 5: _t->scrollTo((*reinterpret_cast< edb::address_t(*)>(_a[1]))); break;
        case 6: _t->setAddressOffset((*reinterpret_cast< edb::address_t(*)>(_a[1]))); break;
        case 7: _t->setRegion((*reinterpret_cast< const IRegion::pointer(*)>(_a[1]))); break;
        case 8: _t->setCurrentAddress((*reinterpret_cast< edb::address_t(*)>(_a[1]))); break;
        case 9: _t->clear(); break;
        case 10: _t->update(); break;
        case 11: _t->setShowAddressSeparator((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->scrollbar_action_triggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QDisassemblyView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDisassemblyView::signal_updated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDisassemblyView::*_t)(edb::address_t );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDisassemblyView::breakPointToggled)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QDisassemblyView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDisassemblyView::regionChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QDisassemblyView::staticMetaObject = {
    { &QAbstractScrollArea::staticMetaObject, qt_meta_stringdata_QDisassemblyView.data,
      qt_meta_data_QDisassemblyView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QDisassemblyView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDisassemblyView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QDisassemblyView.stringdata0))
        return static_cast<void*>(const_cast< QDisassemblyView*>(this));
    return QAbstractScrollArea::qt_metacast(_clname);
}

int QDisassemblyView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void QDisassemblyView::signal_updated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QDisassemblyView::breakPointToggled(edb::address_t _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QDisassemblyView::regionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
