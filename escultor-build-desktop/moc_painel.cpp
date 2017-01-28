/****************************************************************************
** Meta object code from reading C++ file 'painel.h'
**
** Created: Thu Jun 13 23:19:27 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../escultor/painel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'painel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Painel[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    8,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
      25,    7,    7,    7, 0x0a,
      50,    7,    7,    7, 0x0a,
      87,   85,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Painel[] = {
    "Painel\0\0,\0click(int,int)\0"
    "paintEvent(QPaintEvent*)\0"
    "loadMatrix(vector<vector<Voxel> >)\0e\0"
    "mousePressEvent(QMouseEvent*)\0"
};

const QMetaObject Painel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Painel,
      qt_meta_data_Painel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Painel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Painel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Painel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Painel))
        return static_cast<void*>(const_cast< Painel*>(this));
    return QWidget::qt_metacast(_clname);
}

int Painel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: click((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: paintEvent((*reinterpret_cast< QPaintEvent*(*)>(_a[1]))); break;
        case 2: loadMatrix((*reinterpret_cast< vector<vector<Voxel> >(*)>(_a[1]))); break;
        case 3: mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        default: ;
        }
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
