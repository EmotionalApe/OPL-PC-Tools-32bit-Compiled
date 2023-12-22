/****************************************************************************
** Meta object code from reading C++ file 'VmcExportThread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/OplPcTools/UI/VmcExportThread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VmcExportThread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OplPcTools__UI__VmcExportThreadWorker_t {
    QByteArrayData data[7];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OplPcTools__UI__VmcExportThreadWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OplPcTools__UI__VmcExportThreadWorker_t qt_meta_stringdata_OplPcTools__UI__VmcExportThreadWorker = {
    {
QT_MOC_LITERAL(0, 0, 37), // "OplPcTools::UI::VmcExportThre..."
QT_MOC_LITERAL(1, 38, 11), // "askQuestion"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 9), // "_question"
QT_MOC_LITERAL(4, 61, 8), // "finished"
QT_MOC_LITERAL(5, 70, 9), // "exception"
QT_MOC_LITERAL(6, 80, 8) // "_message"

    },
    "OplPcTools::UI::VmcExportThreadWorker\0"
    "askQuestion\0\0_question\0finished\0"
    "exception\0_message"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OplPcTools__UI__VmcExportThreadWorker[] = {

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
       1,    1,   29,    2, 0x06 /* Public */,
       4,    0,   32,    2, 0x06 /* Public */,
       5,    1,   33,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void OplPcTools::UI::VmcExportThreadWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VmcExportThreadWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->askQuestion((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->finished(); break;
        case 2: _t->exception((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VmcExportThreadWorker::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VmcExportThreadWorker::askQuestion)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VmcExportThreadWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VmcExportThreadWorker::finished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VmcExportThreadWorker::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VmcExportThreadWorker::exception)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OplPcTools::UI::VmcExportThreadWorker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OplPcTools__UI__VmcExportThreadWorker.data,
    qt_meta_data_OplPcTools__UI__VmcExportThreadWorker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OplPcTools::UI::VmcExportThreadWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OplPcTools::UI::VmcExportThreadWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OplPcTools__UI__VmcExportThreadWorker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OplPcTools::UI::VmcExportThreadWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void OplPcTools::UI::VmcExportThreadWorker::askQuestion(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OplPcTools::UI::VmcExportThreadWorker::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OplPcTools::UI::VmcExportThreadWorker::exception(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_OplPcTools__UI__VmcExportThread_t {
    QByteArrayData data[5];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OplPcTools__UI__VmcExportThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OplPcTools__UI__VmcExportThread_t qt_meta_stringdata_OplPcTools__UI__VmcExportThread = {
    {
QT_MOC_LITERAL(0, 0, 31), // "OplPcTools::UI::VmcExportThread"
QT_MOC_LITERAL(1, 32, 8), // "finished"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 9), // "exception"
QT_MOC_LITERAL(4, 52, 8) // "_message"

    },
    "OplPcTools::UI::VmcExportThread\0"
    "finished\0\0exception\0_message"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OplPcTools__UI__VmcExportThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    1,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

       0        // eod
};

void OplPcTools::UI::VmcExportThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VmcExportThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->exception((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VmcExportThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VmcExportThread::finished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VmcExportThread::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VmcExportThread::exception)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OplPcTools::UI::VmcExportThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OplPcTools__UI__VmcExportThread.data,
    qt_meta_data_OplPcTools__UI__VmcExportThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OplPcTools::UI::VmcExportThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OplPcTools::UI::VmcExportThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OplPcTools__UI__VmcExportThread.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OplPcTools::UI::VmcExportThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void OplPcTools::UI::VmcExportThread::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OplPcTools::UI::VmcExportThread::exception(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
