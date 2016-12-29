/****************************************************************************
** Meta object code from reading C++ file 'qhexview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/qhexview/qhexview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhexview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QHexView_t {
    QByteArrayData data[19];
    char stringdata0[209];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QHexView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QHexView_t qt_meta_stringdata_QHexView = {
    {
QT_MOC_LITERAL(0, 0, 8), // "QHexView"
QT_MOC_LITERAL(1, 9, 14), // "setShowAddress"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 16), // "setShowAsciiDump"
QT_MOC_LITERAL(4, 42, 14), // "setShowHexDump"
QT_MOC_LITERAL(5, 57, 15), // "setShowComments"
QT_MOC_LITERAL(6, 73, 12), // "setWordWidth"
QT_MOC_LITERAL(7, 86, 11), // "setRowWidth"
QT_MOC_LITERAL(8, 98, 7), // "setFont"
QT_MOC_LITERAL(9, 106, 4), // "font"
QT_MOC_LITERAL(10, 111, 23), // "setShowAddressSeparator"
QT_MOC_LITERAL(11, 135, 5), // "value"
QT_MOC_LITERAL(12, 141, 7), // "repaint"
QT_MOC_LITERAL(13, 149, 5), // "clear"
QT_MOC_LITERAL(14, 155, 9), // "selectAll"
QT_MOC_LITERAL(15, 165, 8), // "deselect"
QT_MOC_LITERAL(16, 174, 15), // "hasSelectedText"
QT_MOC_LITERAL(17, 190, 10), // "mnuSetFont"
QT_MOC_LITERAL(18, 201, 7) // "mnuCopy"

    },
    "QHexView\0setShowAddress\0\0setShowAsciiDump\0"
    "setShowHexDump\0setShowComments\0"
    "setWordWidth\0setRowWidth\0setFont\0font\0"
    "setShowAddressSeparator\0value\0repaint\0"
    "clear\0selectAll\0deselect\0hasSelectedText\0"
    "mnuSetFont\0mnuCopy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QHexView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x0a /* Public */,
       3,    1,   92,    2, 0x0a /* Public */,
       4,    1,   95,    2, 0x0a /* Public */,
       5,    1,   98,    2, 0x0a /* Public */,
       6,    1,  101,    2, 0x0a /* Public */,
       7,    1,  104,    2, 0x0a /* Public */,
       8,    1,  107,    2, 0x0a /* Public */,
      10,    1,  110,    2, 0x0a /* Public */,
      12,    0,  113,    2, 0x0a /* Public */,
      13,    0,  114,    2, 0x0a /* Public */,
      14,    0,  115,    2, 0x0a /* Public */,
      15,    0,  116,    2, 0x0a /* Public */,
      16,    0,  117,    2, 0x0a /* Public */,
      17,    0,  118,    2, 0x0a /* Public */,
      18,    0,  119,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QFont,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QHexView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QHexView *_t = static_cast<QHexView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setShowAddress((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setShowAsciiDump((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setShowHexDump((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setShowComments((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setWordWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setRowWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setFont((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 7: _t->setShowAddressSeparator((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->repaint(); break;
        case 9: _t->clear(); break;
        case 10: _t->selectAll(); break;
        case 11: _t->deselect(); break;
        case 12: { bool _r = _t->hasSelectedText();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: _t->mnuSetFont(); break;
        case 14: _t->mnuCopy(); break;
        default: ;
        }
    }
}

const QMetaObject QHexView::staticMetaObject = {
    { &QAbstractScrollArea::staticMetaObject, qt_meta_stringdata_QHexView.data,
      qt_meta_data_QHexView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QHexView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QHexView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QHexView.stringdata0))
        return static_cast<void*>(const_cast< QHexView*>(this));
    return QAbstractScrollArea::qt_metacast(_clname);
}

int QHexView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
