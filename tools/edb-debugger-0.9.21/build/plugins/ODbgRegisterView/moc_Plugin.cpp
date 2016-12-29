/****************************************************************************
** Meta object code from reading C++ file 'Plugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/ODbgRegisterView/Plugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Plugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ODbgRegisterView__Plugin_t {
    QByteArrayData data[15];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ODbgRegisterView__Plugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ODbgRegisterView__Plugin_t qt_meta_stringdata_ODbgRegisterView__Plugin = {
    {
QT_MOC_LITERAL(0, 0, 24), // "ODbgRegisterView::Plugin"
QT_MOC_LITERAL(1, 25, 6), // "author"
QT_MOC_LITERAL(2, 32, 17), // "Ruslan Kabatsayev"
QT_MOC_LITERAL(3, 50, 5), // "email"
QT_MOC_LITERAL(4, 56, 21), // "b7.10110111@gmail.com"
QT_MOC_LITERAL(5, 78, 18), // "createRegisterView"
QT_MOC_LITERAL(6, 97, 0), // ""
QT_MOC_LITERAL(7, 98, 9), // "saveState"
QT_MOC_LITERAL(8, 108, 10), // "expandRSUp"
QT_MOC_LITERAL(9, 119, 7), // "checked"
QT_MOC_LITERAL(10, 127, 12), // "expandRSDown"
QT_MOC_LITERAL(11, 140, 10), // "expandLSUp"
QT_MOC_LITERAL(12, 151, 12), // "expandLSDown"
QT_MOC_LITERAL(13, 164, 10), // "removeDock"
QT_MOC_LITERAL(14, 175, 8) // "QWidget*"

    },
    "ODbgRegisterView::Plugin\0author\0"
    "Ruslan Kabatsayev\0email\0b7.10110111@gmail.com\0"
    "createRegisterView\0\0saveState\0expandRSUp\0"
    "checked\0expandRSDown\0expandLSUp\0"
    "expandLSDown\0removeDock\0QWidget*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ODbgRegisterView__Plugin[] = {

 // content:
       7,       // revision
       0,       // classname
       2,   14, // classinfo
       7,   18, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // slots: name, argc, parameters, tag, flags
       5,    0,   53,    6, 0x08 /* Private */,
       7,    0,   54,    6, 0x08 /* Private */,
       8,    1,   55,    6, 0x08 /* Private */,
      10,    1,   58,    6, 0x08 /* Private */,
      11,    1,   61,    6, 0x08 /* Private */,
      12,    1,   64,    6, 0x08 /* Private */,
      13,    1,   67,    6, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, 0x80000000 | 14,    6,

       0        // eod
};

void ODbgRegisterView::Plugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Plugin *_t = static_cast<Plugin *>(_o);
        Q_UNUSED(_t)
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

const QMetaObject ODbgRegisterView::Plugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ODbgRegisterView__Plugin.data,
      qt_meta_data_ODbgRegisterView__Plugin,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ODbgRegisterView::Plugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ODbgRegisterView::Plugin::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ODbgRegisterView__Plugin.stringdata0))
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
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0x90, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    '|',  0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    0x0f, 0x00, 'e',  'd',  'b',  '.',  'I',  'P', 
    'l',  'u',  'g',  'i',  'n',  '/',  '1',  '.', 
    '0',  0x00, 0x00, 0x00, 0x9b, 0x07, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x06, 0x00, 'P',  'l', 
    'u',  'g',  'i',  'n',  0x1a, 0xe0, 0xa0, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0x15, 0x0e, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    '`',  0x00, 0x00, 0x00, ',',  0x00, 0x00, 0x00,
    'T',  0x00, 0x00, 0x00, 'D',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0x90, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    '|',  0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    0x0f, 0x00, 'e',  'd',  'b',  '.',  'I',  'P', 
    'l',  'u',  'g',  'i',  'n',  '/',  '1',  '.', 
    '0',  0x00, 0x00, 0x00, 0x95, 0x07, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x1b, 0x0b, 0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x06, 0x00, 'P',  'l',  'u',  'g',  'i',  'n', 
    '1',  0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x1a, 0xe0, 0xa0, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    ',',  0x00, 0x00, 0x00, 'H',  0x00, 0x00, 0x00,
    '`',  0x00, 0x00, 0x00, 'l',  0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

using namespace ODbgRegisterView;
QT_MOC_EXPORT_PLUGIN(ODbgRegisterView::Plugin, Plugin)

QT_END_MOC_NAMESPACE
