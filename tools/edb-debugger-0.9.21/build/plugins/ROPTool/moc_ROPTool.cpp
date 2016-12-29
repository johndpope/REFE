/****************************************************************************
** Meta object code from reading C++ file 'ROPTool.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/ROPTool/ROPTool.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ROPTool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ROPTool__ROPTool_t {
    QByteArrayData data[7];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ROPTool__ROPTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ROPTool__ROPTool_t qt_meta_stringdata_ROPTool__ROPTool = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ROPTool::ROPTool"
QT_MOC_LITERAL(1, 17, 6), // "author"
QT_MOC_LITERAL(2, 24, 10), // "Evan Teran"
QT_MOC_LITERAL(3, 35, 3), // "url"
QT_MOC_LITERAL(4, 39, 22), // "http://www.codef00.com"
QT_MOC_LITERAL(5, 62, 9), // "show_menu"
QT_MOC_LITERAL(6, 72, 0) // ""

    },
    "ROPTool::ROPTool\0author\0Evan Teran\0"
    "url\0http://www.codef00.com\0show_menu\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ROPTool__ROPTool[] = {

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

void ROPTool::ROPTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ROPTool *_t = static_cast<ROPTool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->show_menu(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ROPTool::ROPTool::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ROPTool__ROPTool.data,
      qt_meta_data_ROPTool__ROPTool,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ROPTool::ROPTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ROPTool::ROPTool::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ROPTool__ROPTool.stringdata0))
        return static_cast<void*>(const_cast< ROPTool*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< ROPTool*>(this));
    if (!strcmp(_clname, "edb.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< ROPTool*>(this));
    return QObject::qt_metacast(_clname);
}

int ROPTool::ROPTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    'a',  'm',  'e',  0x00, 0x07, 0x00, 'R',  'O', 
    'P',  'T',  'o',  'o',  'l',  0x00, 0x00, 0x00,
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
    0x07, 0x00, 'R',  'O',  'P',  'T',  'o',  'o', 
    'l',  0x00, 0x00, 0x00, '1',  0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0x1a, 0xe0, 0xa0, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, ',',  0x00, 0x00, 0x00,
    'H',  0x00, 0x00, 0x00, 'd',  0x00, 0x00, 0x00,
    'p',  0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

using namespace ROPTool;
QT_MOC_EXPORT_PLUGIN(ROPTool::ROPTool, ROPTool)

QT_END_MOC_NAMESPACE
