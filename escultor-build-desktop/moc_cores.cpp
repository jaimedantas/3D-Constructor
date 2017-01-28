/****************************************************************************
** Meta object code from reading C++ file 'cores.h'
**
** Created: Thu Jun 13 23:19:28 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../escultor/cores.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cores.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Cores[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x0a,
      32,    6,    6,    6, 0x0a,
      73,   67,    6,    6, 0x0a,
      96,   90,    6,    6, 0x0a,
     119,  113,    6,    6, 0x0a,
     151,  136,    6,    6, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Cores[] = {
    "Cores\0\0paintEvent(QPaintEvent*)\0"
    "loadMatrix(vector<vector<Voxel> >)\0"
    "_verm\0recebe_verm(int)\0_verd\0"
    "recebe_verd(int)\0_azul\0recebe_azul(int)\0"
    "_transparencia\0recebe_transparencia(int)\0"
};

const QMetaObject Cores::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Cores,
      qt_meta_data_Cores, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Cores::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Cores::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Cores::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Cores))
        return static_cast<void*>(const_cast< Cores*>(this));
    return QWidget::qt_metacast(_clname);
}

int Cores::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: paintEvent((*reinterpret_cast< QPaintEvent*(*)>(_a[1]))); break;
        case 1: loadMatrix((*reinterpret_cast< vector<vector<Voxel> >(*)>(_a[1]))); break;
        case 2: recebe_verm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: recebe_verd((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: recebe_azul((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: recebe_transparencia((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
