/****************************************************************************
** Meta object code from reading C++ file 'HardwareBreakpoints.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/HardwareBreakpoints/HardwareBreakpoints.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HardwareBreakpoints.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HardwareBreakpoints__HardwareBreakpoints_t {
    QByteArrayData data[19];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HardwareBreakpoints__HardwareBreakpoints_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HardwareBreakpoints__HardwareBreakpoints_t qt_meta_stringdata_HardwareBreakpoints__HardwareBreakpoints = {
    {
QT_MOC_LITERAL(0, 0, 40), // "HardwareBreakpoints::Hardware..."
QT_MOC_LITERAL(1, 41, 6), // "author"
QT_MOC_LITERAL(2, 48, 10), // "Evan Teran"
QT_MOC_LITERAL(3, 59, 3), // "url"
QT_MOC_LITERAL(4, 63, 22), // "http://www.codef00.com"
QT_MOC_LITERAL(5, 86, 9), // "show_menu"
QT_MOC_LITERAL(6, 96, 0), // ""
QT_MOC_LITERAL(7, 97, 9), // "set_exec1"
QT_MOC_LITERAL(8, 107, 9), // "set_exec2"
QT_MOC_LITERAL(9, 117, 9), // "set_exec3"
QT_MOC_LITERAL(10, 127, 9), // "set_exec4"
QT_MOC_LITERAL(11, 137, 10), // "set_write1"
QT_MOC_LITERAL(12, 148, 10), // "set_write2"
QT_MOC_LITERAL(13, 159, 10), // "set_write3"
QT_MOC_LITERAL(14, 170, 10), // "set_write4"
QT_MOC_LITERAL(15, 181, 11), // "set_access1"
QT_MOC_LITERAL(16, 193, 11), // "set_access2"
QT_MOC_LITERAL(17, 205, 11), // "set_access3"
QT_MOC_LITERAL(18, 217, 11) // "set_access4"

    },
    "HardwareBreakpoints::HardwareBreakpoints\0"
    "author\0Evan Teran\0url\0http://www.codef00.com\0"
    "show_menu\0\0set_exec1\0set_exec2\0set_exec3\0"
    "set_exec4\0set_write1\0set_write2\0"
    "set_write3\0set_write4\0set_access1\0"
    "set_access2\0set_access3\0set_access4"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HardwareBreakpoints__HardwareBreakpoints[] = {

 // content:
       7,       // revision
       0,       // classname
       2,   14, // classinfo
      13,   18, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // slots: name, argc, parameters, tag, flags
       5,    0,   83,    6, 0x0a /* Public */,
       7,    0,   84,    6, 0x0a /* Public */,
       8,    0,   85,    6, 0x0a /* Public */,
       9,    0,   86,    6, 0x0a /* Public */,
      10,    0,   87,    6, 0x0a /* Public */,
      11,    0,   88,    6, 0x0a /* Public */,
      12,    0,   89,    6, 0x0a /* Public */,
      13,    0,   90,    6, 0x0a /* Public */,
      14,    0,   91,    6, 0x0a /* Public */,
      15,    0,   92,    6, 0x0a /* Public */,
      16,    0,   93,    6, 0x0a /* Public */,
      17,    0,   94,    6, 0x0a /* Public */,
      18,    0,   95,    6, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HardwareBreakpoints::HardwareBreakpoints::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HardwareBreakpoints *_t = static_cast<HardwareBreakpoints *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->show_menu(); break;
        case 1: _t->set_exec1(); break;
        case 2: _t->set_exec2(); break;
        case 3: _t->set_exec3(); break;
        case 4: _t->set_exec4(); break;
        case 5: _t->set_write1(); break;
        case 6: _t->set_write2(); break;
        case 7: _t->set_write3(); break;
        case 8: _t->set_write4(); break;
        case 9: _t->set_access1(); break;
        case 10: _t->set_access2(); break;
        case 11: _t->set_access3(); break;
        case 12: _t->set_access4(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject HardwareBreakpoints::HardwareBreakpoints::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HardwareBreakpoints__HardwareBreakpoints.data,
      qt_meta_data_HardwareBreakpoints__HardwareBreakpoints,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HardwareBreakpoints::HardwareBreakpoints::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HardwareBreakpoints::HardwareBreakpoints::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HardwareBreakpoints__HardwareBreakpoints.stringdata0))
        return static_cast<void*>(const_cast< HardwareBreakpoints*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< HardwareBreakpoints*>(this));
    if (!strcmp(_clname, "IDebugEventHandler"))
        return static_cast< IDebugEventHandler*>(const_cast< HardwareBreakpoints*>(this));
    if (!strcmp(_clname, "edb.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< HardwareBreakpoints*>(this));
    return QObject::qt_metacast(_clname);
}

int HardwareBreakpoints::HardwareBreakpoints::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xa0, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x8c, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    0x0f, 0x00, 'e',  'd',  'b',  '.',  'I',  'P', 
    'l',  'u',  'g',  'i',  'n',  '/',  '1',  '.', 
    '0',  0x00, 0x00, 0x00, 0x9b, 0x07, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x13, 0x00, 'H',  'a', 
    'r',  'd',  'w',  'a',  'r',  'e',  'B',  'r', 
    'e',  'a',  'k',  'p',  'o',  'i',  'n',  't', 
    's',  0x00, 0x00, 0x00, 0x1a, 0xe0, 0xa0, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0x15, 0x10, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    'p',  0x00, 0x00, 0x00, ',',  0x00, 0x00, 0x00,
    'd',  0x00, 0x00, 0x00, 'T',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xa0, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x8c, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    0x0f, 0x00, 'e',  'd',  'b',  '.',  'I',  'P', 
    'l',  'u',  'g',  'i',  'n',  '/',  '1',  '.', 
    '0',  0x00, 0x00, 0x00, 0x95, 0x07, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x1b, 0x0b, 0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x13, 0x00, 'H',  'a',  'r',  'd',  'w',  'a', 
    'r',  'e',  'B',  'r',  'e',  'a',  'k',  'p', 
    'o',  'i',  'n',  't',  's',  0x00, 0x00, 0x00,
    '1',  0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x1a, 0xe0, 0xa0, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    ',',  0x00, 0x00, 0x00, 'H',  0x00, 0x00, 0x00,
    'p',  0x00, 0x00, 0x00, '|',  0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

using namespace HardwareBreakpoints;
QT_MOC_EXPORT_PLUGIN(HardwareBreakpoints::HardwareBreakpoints, HardwareBreakpoints)

QT_END_MOC_NAMESPACE
