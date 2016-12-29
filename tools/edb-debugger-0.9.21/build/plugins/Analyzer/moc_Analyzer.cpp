/****************************************************************************
** Meta object code from reading C++ file 'Analyzer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/Analyzer/Analyzer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Analyzer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Analyzer__Analyzer_t {
    QByteArrayData data[13];
    char stringdata0[186];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Analyzer__Analyzer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Analyzer__Analyzer_t qt_meta_stringdata_Analyzer__Analyzer = {
    {
QT_MOC_LITERAL(0, 0, 18), // "Analyzer::Analyzer"
QT_MOC_LITERAL(1, 19, 6), // "author"
QT_MOC_LITERAL(2, 26, 10), // "Evan Teran"
QT_MOC_LITERAL(3, 37, 3), // "url"
QT_MOC_LITERAL(4, 41, 22), // "http://www.codef00.com"
QT_MOC_LITERAL(5, 64, 15), // "update_progress"
QT_MOC_LITERAL(6, 80, 0), // ""
QT_MOC_LITERAL(7, 81, 14), // "do_ip_analysis"
QT_MOC_LITERAL(8, 96, 16), // "do_view_analysis"
QT_MOC_LITERAL(9, 113, 19), // "goto_function_start"
QT_MOC_LITERAL(10, 133, 17), // "goto_function_end"
QT_MOC_LITERAL(11, 151, 19), // "mark_function_start"
QT_MOC_LITERAL(12, 171, 14) // "show_specified"

    },
    "Analyzer::Analyzer\0author\0Evan Teran\0"
    "url\0http://www.codef00.com\0update_progress\0"
    "\0do_ip_analysis\0do_view_analysis\0"
    "goto_function_start\0goto_function_end\0"
    "mark_function_start\0show_specified"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Analyzer__Analyzer[] = {

 // content:
       7,       // revision
       0,       // classname
       2,   14, // classinfo
       7,   18, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // signals: name, argc, parameters, tag, flags
       5,    1,   53,    6, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   56,    6, 0x0a /* Public */,
       8,    0,   57,    6, 0x0a /* Public */,
       9,    0,   58,    6, 0x0a /* Public */,
      10,    0,   59,    6, 0x0a /* Public */,
      11,    0,   60,    6, 0x0a /* Public */,
      12,    0,   61,    6, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Analyzer::Analyzer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Analyzer *_t = static_cast<Analyzer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update_progress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->do_ip_analysis(); break;
        case 2: _t->do_view_analysis(); break;
        case 3: _t->goto_function_start(); break;
        case 4: _t->goto_function_end(); break;
        case 5: _t->mark_function_start(); break;
        case 6: _t->show_specified(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Analyzer::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Analyzer::update_progress)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Analyzer::Analyzer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Analyzer__Analyzer.data,
      qt_meta_data_Analyzer__Analyzer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Analyzer::Analyzer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Analyzer::Analyzer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Analyzer__Analyzer.stringdata0))
        return static_cast<void*>(const_cast< Analyzer*>(this));
    if (!strcmp(_clname, "IAnalyzer"))
        return static_cast< IAnalyzer*>(const_cast< Analyzer*>(this));
    if (!strcmp(_clname, "IPlugin"))
        return static_cast< IPlugin*>(const_cast< Analyzer*>(this));
    if (!strcmp(_clname, "edb.IPlugin/1.0"))
        return static_cast< IPlugin*>(const_cast< Analyzer*>(this));
    return QObject::qt_metacast(_clname);
}

int Analyzer::Analyzer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void Analyzer::Analyzer::update_progress(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
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
    'a',  'm',  'e',  0x00, 0x08, 0x00, 'A',  'n', 
    'a',  'l',  'y',  'z',  'e',  'r',  0x00, 0x00,
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
    0x08, 0x00, 'A',  'n',  'a',  'l',  'y',  'z', 
    'e',  'r',  0x00, 0x00, '1',  0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0x1a, 0xe0, 0xa0, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, ',',  0x00, 0x00, 0x00,
    'H',  0x00, 0x00, 0x00, 'd',  0x00, 0x00, 0x00,
    'p',  0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

using namespace Analyzer;
QT_MOC_EXPORT_PLUGIN(Analyzer::Analyzer, Analyzer)

QT_END_MOC_NAMESPACE
