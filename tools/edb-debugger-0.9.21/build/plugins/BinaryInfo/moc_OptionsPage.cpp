/****************************************************************************
** Meta object code from reading C++ file 'OptionsPage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/BinaryInfo/OptionsPage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OptionsPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BinaryInfo__OptionsPage_t {
    QByteArrayData data[7];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BinaryInfo__OptionsPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BinaryInfo__OptionsPage_t qt_meta_stringdata_BinaryInfo__OptionsPage = {
    {
QT_MOC_LITERAL(0, 0, 23), // "BinaryInfo::OptionsPage"
QT_MOC_LITERAL(1, 24, 19), // "on_checkBox_toggled"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 7), // "checked"
QT_MOC_LITERAL(4, 53, 26), // "on_txtDebugDir_textChanged"
QT_MOC_LITERAL(5, 80, 4), // "text"
QT_MOC_LITERAL(6, 85, 22) // "on_btnDebugDir_clicked"

    },
    "BinaryInfo::OptionsPage\0on_checkBox_toggled\0"
    "\0checked\0on_txtDebugDir_textChanged\0"
    "text\0on_btnDebugDir_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BinaryInfo__OptionsPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       1,    0,   37,    2, 0x2a /* Public | MethodCloned */,
       4,    1,   38,    2, 0x0a /* Public */,
       6,    0,   41,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,

       0        // eod
};

void BinaryInfo::OptionsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OptionsPage *_t = static_cast<OptionsPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_checkBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_checkBox_toggled(); break;
        case 2: _t->on_txtDebugDir_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_btnDebugDir_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject BinaryInfo::OptionsPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BinaryInfo__OptionsPage.data,
      qt_meta_data_BinaryInfo__OptionsPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BinaryInfo::OptionsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BinaryInfo::OptionsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BinaryInfo__OptionsPage.stringdata0))
        return static_cast<void*>(const_cast< OptionsPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int BinaryInfo::OptionsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
