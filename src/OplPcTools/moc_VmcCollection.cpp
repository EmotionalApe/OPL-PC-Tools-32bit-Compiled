/****************************************************************************
** Meta object code from reading C++ file 'VmcCollection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/OplPcTools/VmcCollection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VmcCollection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OplPcTools__VmcCollection_t {
    QByteArrayData data[8];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OplPcTools__VmcCollection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OplPcTools__VmcCollection_t qt_meta_stringdata_OplPcTools__VmcCollection = {
    {
QT_MOC_LITERAL(0, 0, 25), // "OplPcTools::VmcCollection"
QT_MOC_LITERAL(1, 26, 8), // "vmcAdded"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 4), // "Uuid"
QT_MOC_LITERAL(4, 41, 5), // "_uuid"
QT_MOC_LITERAL(5, 47, 10), // "vmcRenamed"
QT_MOC_LITERAL(6, 58, 19), // "vmcAboutToBeDeleted"
QT_MOC_LITERAL(7, 78, 10) // "vmcDeleted"

    },
    "OplPcTools::VmcCollection\0vmcAdded\0\0"
    "Uuid\0_uuid\0vmcRenamed\0vmcAboutToBeDeleted\0"
    "vmcDeleted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OplPcTools__VmcCollection[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,
       6,    1,   40,    2, 0x06 /* Public */,
       7,    1,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void OplPcTools::VmcCollection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VmcCollection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->vmcAdded((*reinterpret_cast< const Uuid(*)>(_a[1]))); break;
        case 1: _t->vmcRenamed((*reinterpret_cast< const Uuid(*)>(_a[1]))); break;
        case 2: _t->vmcAboutToBeDeleted((*reinterpret_cast< const Uuid(*)>(_a[1]))); break;
        case 3: _t->vmcDeleted((*reinterpret_cast< const Uuid(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VmcCollection::*)(const Uuid & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VmcCollection::vmcAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VmcCollection::*)(const Uuid & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VmcCollection::vmcRenamed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VmcCollection::*)(const Uuid & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VmcCollection::vmcAboutToBeDeleted)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (VmcCollection::*)(const Uuid & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VmcCollection::vmcDeleted)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OplPcTools::VmcCollection::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OplPcTools__VmcCollection.data,
    qt_meta_data_OplPcTools__VmcCollection,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OplPcTools::VmcCollection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OplPcTools::VmcCollection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OplPcTools__VmcCollection.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OplPcTools::VmcCollection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void OplPcTools::VmcCollection::vmcAdded(const Uuid & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OplPcTools::VmcCollection::vmcRenamed(const Uuid & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OplPcTools::VmcCollection::vmcAboutToBeDeleted(const Uuid & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OplPcTools::VmcCollection::vmcDeleted(const Uuid & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
