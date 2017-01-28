/****************************************************************************
** Meta object code from reading C++ file 'painel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../escultor/painel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'painel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Painel_t {
    QByteArrayData data[10];
    char stringdata[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Painel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Painel_t qt_meta_stringdata_Painel = {
    {
QT_MOC_LITERAL(0, 0, 6),
QT_MOC_LITERAL(1, 7, 5),
QT_MOC_LITERAL(2, 13, 0),
QT_MOC_LITERAL(3, 14, 10),
QT_MOC_LITERAL(4, 25, 12),
QT_MOC_LITERAL(5, 38, 10),
QT_MOC_LITERAL(6, 49, 22),
QT_MOC_LITERAL(7, 72, 15),
QT_MOC_LITERAL(8, 88, 12),
QT_MOC_LITERAL(9, 101, 1)
    },
    "Painel\0click\0\0paintEvent\0QPaintEvent*\0"
    "loadMatrix\0vector<vector<Voxel> >\0"
    "mousePressEvent\0QMouseEvent*\0e\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Painel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       3,    1,   39,    2, 0x0a,
       5,    1,   42,    2, 0x0a,
       7,    1,   45,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void Painel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Painel *_t = static_cast<Painel *>(_o);
        switch (_id) {
        case 0: _t->click((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->paintEvent((*reinterpret_cast< QPaintEvent*(*)>(_a[1]))); break;
        case 2: _t->loadMatrix((*reinterpret_cast< vector<vector<Voxel> >(*)>(_a[1]))); break;
        case 3: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Painel::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Painel::click)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject Painel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Painel.data,
      qt_meta_data_Painel,  qt_static_metacall, 0, 0}
};


const QMetaObject *Painel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Painel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Painel.stringdata))
        return static_cast<void*>(const_cast< Painel*>(this));
    return QWidget::qt_metacast(_clname);
}

int Painel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void Painel::click(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
