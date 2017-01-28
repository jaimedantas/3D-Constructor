/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Tue Jun 18 10:32:39 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../escultor/mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   12,   11,   11, 0x0a,
      40,   37,   11,   11, 0x0a,
      54,   51,   11,   11, 0x0a,
      68,   65,   11,   11, 0x0a,
      79,   11,   11,   11, 0x0a,
      89,   11,   11,   11, 0x0a,
     104,   98,   11,   11, 0x0a,
     119,   11,   11,   11, 0x08,
     154,   11,   11,   11, 0x08,
     180,   11,   11,   11, 0x08,
     208,   11,   11,   11, 0x08,
     235,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0x,y\0recebeClick(int,int)\0"
    "_r\0mudaR(int)\0_g\0mudaG(int)\0_b\0"
    "mudaB(int)\0mudaRGB()\0salvar()\0plano\0"
    "mudaPlano(int)\0on_actionNovo_Escultor_triggered()\0"
    "on_actionSair_triggered()\0"
    "on_actionSalvar_triggered()\0"
    "on_actionAjuda_triggered()\0"
    "on_actionSobre_triggered()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: recebeClick((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: mudaR((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: mudaG((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: mudaB((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: mudaRGB(); break;
        case 5: salvar(); break;
        case 6: mudaPlano((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: on_actionNovo_Escultor_triggered(); break;
        case 8: on_actionSair_triggered(); break;
        case 9: on_actionSalvar_triggered(); break;
        case 10: on_actionAjuda_triggered(); break;
        case 11: on_actionSobre_triggered(); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
