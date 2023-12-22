/****************************************************************************
** Meta object code from reading C++ file 'IsoRestorerActivity.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/OplPcTools/UI/IsoRestorerActivity.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IsoRestorerActivity.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OplPcTools__UI__IsoRestorerActivity_t {
    QByteArrayData data[10];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OplPcTools__UI__IsoRestorerActivity_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OplPcTools__UI__IsoRestorerActivity_t qt_meta_stringdata_OplPcTools__UI__IsoRestorerActivity = {
    {
QT_MOC_LITERAL(0, 0, 35), // "OplPcTools::UI::IsoRestorerAc..."
QT_MOC_LITERAL(1, 36, 10), // "onProgress"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 12), // "_total_bytes"
QT_MOC_LITERAL(4, 61, 16), // "_processed_bytes"
QT_MOC_LITERAL(5, 78, 17), // "onRollbackStarted"
QT_MOC_LITERAL(6, 96, 11), // "onException"
QT_MOC_LITERAL(7, 108, 8), // "_message"
QT_MOC_LITERAL(8, 117, 16), // "onThreadFinished"
QT_MOC_LITERAL(9, 134, 8) // "onCancel"

    },
    "OplPcTools::UI::IsoRestorerActivity\0"
    "onProgress\0\0_total_bytes\0_processed_bytes\0"
    "onRollbackStarted\0onException\0_message\0"
    "onThreadFinished\0onCancel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OplPcTools__UI__IsoRestorerActivity[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x08 /* Private */,
       5,    0,   44,    2, 0x08 /* Private */,
       6,    1,   45,    2, 0x08 /* Private */,
       8,    0,   48,    2, 0x08 /* Private */,
       9,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong,    3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OplPcTools::UI::IsoRestorerActivity::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IsoRestorerActivity *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onProgress((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 1: _t->onRollbackStarted(); break;
        case 2: _t->onException((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->onThreadFinished(); break;
        case 4: _t->onCancel(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OplPcTools::UI::IsoRestorerActivity::staticMetaObject = { {
    QMetaObject::SuperData::link<Activity::staticMetaObject>(),
    qt_meta_stringdata_OplPcTools__UI__IsoRestorerActivity.data,
    qt_meta_data_OplPcTools__UI__IsoRestorerActivity,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OplPcTools::UI::IsoRestorerActivity::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OplPcTools::UI::IsoRestorerActivity::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OplPcTools__UI__IsoRestorerActivity.stringdata0))
        return static_cast<void*>(this);
    return Activity::qt_metacast(_clname);
}

int OplPcTools::UI::IsoRestorerActivity::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Activity::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
