/****************************************************************************
** Meta object code from reading C++ file 'cores.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../escultor/cores.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cores.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Cores_t {
    QByteArrayData data[14];
    char stringdata[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Cores_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Cores_t qt_meta_stringdata_Cores = {
    {
QT_MOC_LITERAL(0, 0, 5),
QT_MOC_LITERAL(1, 6, 10),
QT_MOC_LITERAL(2, 17, 0),
QT_MOC_LITERAL(3, 18, 12),
QT_MOC_LITERAL(4, 31, 10),
QT_MOC_LITERAL(5, 42, 22),
QT_MOC_LITERAL(6, 65, 11),
QT_MOC_LITERAL(7, 77, 5),
QT_MOC_LITERAL(8, 83, 11),
QT_MOC_LITERAL(9, 95, 5),
QT_MOC_LITERAL(10, 101, 11),
QT_MOC_LITERAL(11, 113, 5),
QT_MOC_LITERAL(12, 119, 20),
QT_MOC_LITERAL(13, 140, 14)
    },
    "Cores\0paintEvent\0\0QPaintEvent*\0"
    "loadMatrix\0vector<vector<Voxel> >\0"
    "recebe_verm\0_verm\0recebe_verd\0_verd\0"
    "recebe_azul\0_azul\0recebe_transparencia\0"
    "_transparencia\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cores[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a,
       4,    1,   47,    2, 0x0a,
       6,    1,   50,    2, 0x0a,
       8,    1,   53,    2, 0x0a,
      10,    1,   56,    2, 0x0a,
      12,    1,   59,    2, 0x0a,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   13,

       0        // eod
};

void Cores::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Cores *_t = static_cast<Cores *>(_o);
        switch (_id) {
        case 0: _t->paintEvent((*reinterpret_cast< QPaintEvent*(*)>(_a[1]))); break;
        case 1: _t->loadMatrix((*reinterpret_cast< vector<vector<Voxel> >(*)>(_a[1]))); break;
        case 2: _t->recebe_verm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->recebe_verd((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->recebe_azul((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->recebe_transparencia((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Cores::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Cores.data,
      qt_meta_data_Cores,  qt_static_metacall, 0, 0}
};


const QMetaObject *Cores::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cores::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Cores.stringdata))
        return static_cast<void*>(const_cast< Cores*>(this));
    return QWidget::qt_metacast(_clname);
}

int Cores::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
