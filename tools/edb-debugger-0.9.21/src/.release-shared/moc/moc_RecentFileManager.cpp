/****************************************************************************
** Meta object code from reading C++ file 'RecentFileManager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../RecentFileManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RecentFileManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RecentFileManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   19,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      62,   18,   18,   18, 0x0a,
      80,   18,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_RecentFileManager[] = {
    "RecentFileManager\0\0,\0"
    "file_selected(QString,QList<QByteArray>)\0"
    "clear_file_list()\0item_selected()\0"
};

void RecentFileManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RecentFileManager *_t = static_cast<RecentFileManager *>(_o);
        switch (_id) {
        case 0: _t->file_selected((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<QByteArray>(*)>(_a[2]))); break;
        case 1: _t->clear_file_list(); break;
        case 2: _t->item_selected(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RecentFileManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RecentFileManager::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RecentFileManager,
      qt_meta_data_RecentFileManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RecentFileManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RecentFileManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RecentFileManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RecentFileManager))
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
    }
    return _id;
}

// SIGNAL 0
void RecentFileManager::file_selected(const QString & _t1, const QList<QByteArray> & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
