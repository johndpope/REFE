/****************************************************************************
** Meta object code from reading C++ file 'DebuggerCore.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/DebuggerCore/unix/linux/DebuggerCore.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DebuggerCore.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DebuggerCore__DebuggerCore_t {
    QByteArrayData data[5];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DebuggerCore__DebuggerCore_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DebuggerCore__DebuggerCore_t qt_meta_stringdata_DebuggerCore__DebuggerCore = {
    {
QT_MOC_LITERAL(0, 0, 26), // "DebuggerCore::DebuggerCore"
QT_MOC_LITERAL(1, 27, 6), // "author"
QT_MOC_LITERAL(2, 34, 10), // "Evan Teran"
QT_MOC_LITERAL(3, 45, 3), // "url"
QT_MOC_LITERAL(4, 49, 22) // "http://www.codef00.com"

    },
    "DebuggerCore::DebuggerCore\0author\0"
    "Evan Teran\0url\0http://www.codef00.com"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DebuggerCore__DebuggerCore[] = {

 // content:
       7,       // revision
       0,       // classname
       2,   14, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

       0        // eod
};

void DebuggerCore::DebuggerCore::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject DebuggerCore::DebuggerCore::staticMetaObject = {
    { &DebuggerCoreUNIX::staticMetaObject, qt_meta_stringdata_DebuggerCore__DebuggerCore.data,
      qt_meta_data_DebuggerCore__DebuggerCore,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DebuggerCore::DebuggerCore::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DebuggerCore::DebuggerCore::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DebuggerCore__DebuggerCore.stringdata0))
        return static_cast<void*>(const_cast< DebuggerCore*>(this));
    if (!strcmp(_clname, "EDB.IDebugger/1.0"))
        return static_cast< IDebugger*>(const_cast< DebuggerCore*>(this));
    return DebuggerCoreUNIX::qt_metacast(_clname);
}

int DebuggerCore::DebuggerCore::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DebuggerCoreUNIX::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0x98, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x84, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    0x11, 0x00, 'e',  'd',  'b',  '.',  'I',  'D', 
    'e',  'b',  'u',  'g',  'g',  'e',  'r',  '/', 
    '1',  '.',  '0',  0x00, 0x9b, 0x07, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x0c, 0x00, 'D',  'e', 
    'b',  'u',  'g',  'g',  'e',  'r',  'C',  'o', 
    'r',  'e',  0x00, 0x00, 0x1a, 0xe0, 0xa0, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0x15, 0x0f, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    'h',  0x00, 0x00, 0x00, ',',  0x00, 0x00, 0x00,
    '\\', 0x00, 0x00, 0x00, 'L',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0x98, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x84, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    0x11, 0x00, 'e',  'd',  'b',  '.',  'I',  'D', 
    'e',  'b',  'u',  'g',  'g',  'e',  'r',  '/', 
    '1',  '.',  '0',  0x00, 0x95, 0x07, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x1b, 0x0b, 0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x0c, 0x00, 'D',  'e',  'b',  'u',  'g',  'g', 
    'e',  'r',  'C',  'o',  'r',  'e',  0x00, 0x00,
    '1',  0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x1a, 0xe0, 0xa0, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    ',',  0x00, 0x00, 0x00, 'H',  0x00, 0x00, 0x00,
    'h',  0x00, 0x00, 0x00, 't',  0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

using namespace DebuggerCore;
QT_MOC_EXPORT_PLUGIN(DebuggerCore::DebuggerCore, DebuggerCore)

QT_END_MOC_NAMESPACE
