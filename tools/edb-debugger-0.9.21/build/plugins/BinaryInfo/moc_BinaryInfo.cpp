/****************************************************************************
** Meta object code from reading C++ file 'BinaryInfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/BinaryInfo/BinaryInfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BinaryInfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BinaryInfo__BinaryInfo_t {
    QByteArrayData data[7];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BinaryInfo__BinaryInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BinaryInfo__BinaryInfo_t qt_meta_stringdata_BinaryInfo__BinaryInfo = {
    {
QT_MOC_LITERAL(0, 0, 22), // "BinaryInfo::BinaryInfo"
QT_MOC_LITERAL(1, 23, 6), // "author"
QT_MOC_LITERAL(2, 30, 10), // "Evan Teran"
QT_MOC_LITERAL(3, 41, 3), // "url"
QT_MOC_LITERAL(4, 45, 22), // "http://www.codef00.com"
QT_MOC_LITERAL(5, 68, 14), // "explore_header"
QT_MOC_LITERAL(6, 83, 0) // ""

    },
    "BinaryInfo::BinaryInfo\0author\0Evan Teran\0"
    "url\0http://www.codef00.com\0explore_header\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BinaryInfo__BinaryInfo[] = {

 // content:
       7,       // revision
       0,       // classname
       2,   14, // classinfo
       1,   18, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // slots: name, argc, parameters, tag, flags
       5,    0,   23,    6, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void BinaryInfo::BinaryInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BinaryInfo *_t = static_cast<BinaryInfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->explore_header(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject BinaryInfo::BinaryInfo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BinaryInfo__BinaryInfo.data,
      qt_meta_data_BinaryInfo__BinaryInfo,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BinaryInfo::BinaryInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BinaryInfo::BinaryInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BinaryInfo__BinaryInfo.stringdata0))
        return static_cast<void*>(const_cast< BinaryInfo*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< BinaryInfo*>(this));
    if (!strcmp(_clname, "ISymbolGenerator"))
        return static_cast< ISymbolGenerator*>(const_cast< BinaryInfo*>(this));
    if (!strcmp(_clname, "edb.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< BinaryInfo*>(this));
    return QObject::qt_metacast(_clname);
}

int BinaryInfo::BinaryInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0x94, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x80, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    0x0f, 0x00, 'e',  'd',  'b',  '.',  'I',  'P', 
    'l',  'u',  'g',  'i',  'n',  '/',  '1',  '.', 
    '0',  0x00, 0x00, 0x00, 0x9b, 0x07, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x0a, 0x00, 'B',  'i', 
    'n',  'a',  'r',  'y',  'I',  'n',  'f',  'o', 
    0x1a, 0xe0, 0xa0, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x11, 0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x95, 0x0e, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 'd',  0x00, 0x00, 0x00,
    ',',  0x00, 0x00, 0x00, 'X',  0x00, 0x00, 0x00,
    'H',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0x94, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x80, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    0x0f, 0x00, 'e',  'd',  'b',  '.',  'I',  'P', 
    'l',  'u',  'g',  'i',  'n',  '/',  '1',  '.', 
    '0',  0x00, 0x00, 0x00, 0x95, 0x07, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x1b, 0x0b, 0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x0a, 0x00, 'B',  'i',  'n',  'a',  'r',  'y', 
    'I',  'n',  'f',  'o',  '1',  0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0x1a, 0xe0, 0xa0, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, ',',  0x00, 0x00, 0x00,
    'H',  0x00, 0x00, 0x00, 'd',  0x00, 0x00, 0x00,
    'p',  0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

using namespace BinaryInfo;
QT_MOC_EXPORT_PLUGIN(BinaryInfo::BinaryInfo, BinaryInfo)

QT_END_MOC_NAMESPACE
