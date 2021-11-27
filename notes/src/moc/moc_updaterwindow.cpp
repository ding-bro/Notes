/****************************************************************************
** Meta object code from reading C++ file 'updaterwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../updaterwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'updaterwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UpdaterWindow_t {
    QByteArrayData data[24];
    char stringdata0[329];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UpdaterWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UpdaterWindow_t qt_meta_stringdata_UpdaterWindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "UpdaterWindow"
QT_MOC_LITERAL(1, 14, 27), // "dontShowUpdateWindowChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 5), // "state"
QT_MOC_LITERAL(4, 49, 15), // "checkForUpdates"
QT_MOC_LITERAL(5, 65, 5), // "force"
QT_MOC_LITERAL(6, 71, 13), // "resetControls"
QT_MOC_LITERAL(7, 85, 16), // "updateTitleLabel"
QT_MOC_LITERAL(8, 102, 17), // "onUpdateAvailable"
QT_MOC_LITERAL(9, 120, 23), // "onDownloadButtonClicked"
QT_MOC_LITERAL(10, 144, 13), // "startDownload"
QT_MOC_LITERAL(11, 158, 3), // "url"
QT_MOC_LITERAL(12, 162, 12), // "openDownload"
QT_MOC_LITERAL(13, 175, 4), // "file"
QT_MOC_LITERAL(14, 180, 15), // "onCheckFinished"
QT_MOC_LITERAL(15, 196, 17), // "onXdgOpenFinished"
QT_MOC_LITERAL(16, 214, 8), // "exitCode"
QT_MOC_LITERAL(17, 223, 18), // "openDownloadFolder"
QT_MOC_LITERAL(18, 242, 14), // "calculateSizes"
QT_MOC_LITERAL(19, 257, 8), // "received"
QT_MOC_LITERAL(20, 266, 5), // "total"
QT_MOC_LITERAL(21, 272, 14), // "updateProgress"
QT_MOC_LITERAL(22, 287, 22), // "calculateTimeRemaining"
QT_MOC_LITERAL(23, 310, 18) // "onDownloadFinished"

    },
    "UpdaterWindow\0dontShowUpdateWindowChanged\0"
    "\0state\0checkForUpdates\0force\0resetControls\0"
    "updateTitleLabel\0onUpdateAvailable\0"
    "onDownloadButtonClicked\0startDownload\0"
    "url\0openDownload\0file\0onCheckFinished\0"
    "onXdgOpenFinished\0exitCode\0"
    "openDownloadFolder\0calculateSizes\0"
    "received\0total\0updateProgress\0"
    "calculateTimeRemaining\0onDownloadFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UpdaterWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   92,    2, 0x0a /* Public */,
       6,    0,   95,    2, 0x08 /* Private */,
       7,    0,   96,    2, 0x08 /* Private */,
       8,    0,   97,    2, 0x08 /* Private */,
       9,    0,   98,    2, 0x08 /* Private */,
      10,    1,   99,    2, 0x08 /* Private */,
      12,    1,  102,    2, 0x08 /* Private */,
      14,    1,  105,    2, 0x08 /* Private */,
      15,    1,  108,    2, 0x08 /* Private */,
      17,    1,  111,    2, 0x08 /* Private */,
      18,    2,  114,    2, 0x08 /* Private */,
      21,    2,  119,    2, 0x08 /* Private */,
      22,    2,  124,    2, 0x08 /* Private */,
      23,    0,  129,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   19,   20,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   19,   20,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   19,   20,
    QMetaType::Void,

       0        // eod
};

void UpdaterWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UpdaterWindow *_t = static_cast<UpdaterWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dontShowUpdateWindowChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->checkForUpdates((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->resetControls(); break;
        case 3: _t->updateTitleLabel(); break;
        case 4: _t->onUpdateAvailable(); break;
        case 5: _t->onDownloadButtonClicked(); break;
        case 6: _t->startDownload((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 7: _t->openDownload((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->onCheckFinished((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->onXdgOpenFinished((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 10: _t->openDownloadFolder((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->calculateSizes((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 12: _t->updateProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 13: _t->calculateTimeRemaining((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 14: _t->onDownloadFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UpdaterWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UpdaterWindow::dontShowUpdateWindowChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject UpdaterWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UpdaterWindow.data,
      qt_meta_data_UpdaterWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UpdaterWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UpdaterWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UpdaterWindow.stringdata0))
        return static_cast<void*>(const_cast< UpdaterWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int UpdaterWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void UpdaterWindow::dontShowUpdateWindowChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
