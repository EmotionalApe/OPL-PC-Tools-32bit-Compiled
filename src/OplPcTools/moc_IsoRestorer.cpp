/****************************************************************************
** Meta object code from reading C++ file 'IsoRestorer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/OplPcTools/IsoRestorer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IsoRestorer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OplPcTools__IsoRestorer_t {
    QByteArrayData data[7];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OplPcTools__IsoRestorer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OplPcTools__IsoRestorer_t qt_meta_stringdata_OplPcTools__IsoRestorer = {
    {
QT_MOC_LITERAL(0, 0, 23), // "OplPcTools::IsoRestorer"
QT_MOC_LITERAL(1, 24, 8), // "progress"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 12), // "_total_bytes"
QT_MOC_LITERAL(4, 47, 11), // "_done_bytes"
QT_MOC_LITERAL(5, 59, 15), // "rollbackStarted"
QT_MOC_LITERAL(6, 75, 16) // "rollbackFinished"

    },
    "OplPcTools::IsoRestorer\0progress\0\0"
    "_total_bytes\0_done_bytes\0rollbackStarted\0"
    "rollbackFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OplPcTools__IsoRestorer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       5,    0,   34,    2, 0x06 /* Public */,
       6,    0,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong,    3,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OplPcTools::IsoRestorer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IsoRestorer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->progress((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 1: _t->rollbackStarted(); break;
        case 2: _t->rollbackFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (IsoRestorer::*)(quint64 , quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IsoRestorer::progress)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (IsoRestorer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IsoRestorer::rollbackStarted)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (IsoRestorer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IsoRestorer::rollbackFinished)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OplPcTools::IsoRestorer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OplPcTools__IsoRestorer.data,
    qt_meta_data_OplPcTools__IsoRestorer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OplPcTools::IsoRestorer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OplPcTools::IsoRestorer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OplPcTools__IsoRestorer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OplPcTools::IsoRestorer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void OplPcTools::IsoRestorer::progress(quint64 _t1, quint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OplPcTools::IsoRestorer::rollbackStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OplPcTools::IsoRestorer::rollbackFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
