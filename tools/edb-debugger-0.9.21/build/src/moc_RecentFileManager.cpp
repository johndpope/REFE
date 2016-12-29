/****************************************************************************
** Meta object code from reading C++ file 'RecentFileManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/RecentFileManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RecentFileManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RecentFileManager_t {
    QByteArrayData data[5];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RecentFileManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RecentFileManager_t qt_meta_stringdata_RecentFileManager = {
    {
QT_MOC_LITERAL(0, 0, 17), // "RecentFileManager"
QT_MOC_LITERAL(1, 18, 13), // "file_selected"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 15), // "clear_file_list"
QT_MOC_LITERAL(4, 49, 13) // "item_selected"

    },
    "RecentFileManager\0file_selected\0\0"
    "clear_file_list\0item_selected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RecentFileManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   34,    2, 0x0a /* Public */,
       4,    0,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArrayList,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RecentFileManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RecentFileManager *_t = static_cast<RecentFileManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->file_selected((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<QByteArray>(*)>(_a[2]))); break;
        case 1: _t->clear_file_list(); break;
        case 2: _t->item_selected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RecentFileManager::*_t)(const QString & , const QList<QByteArray> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RecentFileManager::file_selected)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject RecentFileManager::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RecentFileManager.data,
      qt_meta_data_RecentFileManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RecentFileManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RecentFileManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RecentFileManager.stringdata0))
        return static_cast<void*>(const_cast< RecentFileManager*>(this));
    return QWidget::qt_metacast(_clname);
}

int RecentFileManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void RecentFileManager::file_selected(const QString & _t1, const QList<QByteArray> & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
