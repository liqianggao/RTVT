/****************************************************************************
** Meta object code from reading C++ file 'rtvttriggermodel.h'
**
** Created: Wed Feb 15 16:26:54 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "rtvttriggermodel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rtvttriggermodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RTVTTriggerModel[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   18,   17,   17, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_RTVTTriggerModel[] = {
    "RTVTTriggerModel\0\0,\0"
    "refreshAttachedWidget(QModelIndex,QModelIndex)\0"
};

const QMetaObject RTVTTriggerModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_RTVTTriggerModel,
      qt_meta_data_RTVTTriggerModel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RTVTTriggerModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RTVTTriggerModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RTVTTriggerModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RTVTTriggerModel))
        return static_cast<void*>(const_cast< RTVTTriggerModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int RTVTTriggerModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: refreshAttachedWidget((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void RTVTTriggerModel::refreshAttachedWidget(QModelIndex _t1, QModelIndex _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
