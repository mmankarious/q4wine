/****************************************************************************
** Meta object code from reading C++ file 'process.h'
**
** Created: Tue Jan 13 11:39:00 2009
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/gui/process.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'process.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Process[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      11,    9,    8,    8, 0x08,
      50,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Process[] = {
    "Process\0\0,\0slotFinished(int,QProcess::ExitStatus)\0"
    "cmdCancel_clicked()\0"
};

const QMetaObject Process::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Process,
      qt_meta_data_Process, 0 }
};

const QMetaObject *Process::metaObject() const
{
    return &staticMetaObject;
}

void *Process::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Process))
        return static_cast<void*>(const_cast< Process*>(this));
    if (!strcmp(_clname, "Ui::Process"))
        return static_cast< Ui::Process*>(const_cast< Process*>(this));
    return QDialog::qt_metacast(_clname);
}

int Process::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 1: cmdCancel_clicked(); break;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE