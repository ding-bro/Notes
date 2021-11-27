/****************************************************************************
** Meta object code from reading C++ file 'styleeditorwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../styleeditorwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'styleeditorwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StyleEditorWindow_t {
    QByteArrayData data[16];
    char stringdata0[231];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StyleEditorWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StyleEditorWindow_t qt_meta_stringdata_StyleEditorWindow = {
    {
QT_MOC_LITERAL(0, 0, 17), // "StyleEditorWindow"
QT_MOC_LITERAL(1, 18, 14), // "changeFontType"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 12), // "FontTypeface"
QT_MOC_LITERAL(4, 47, 8), // "fontType"
QT_MOC_LITERAL(5, 56, 14), // "changeFontSize"
QT_MOC_LITERAL(6, 71, 14), // "FontSizeAction"
QT_MOC_LITERAL(7, 86, 14), // "fontSizeAction"
QT_MOC_LITERAL(8, 101, 21), // "changeEditorTextWidth"
QT_MOC_LITERAL(9, 123, 15), // "EditorTextWidth"
QT_MOC_LITERAL(10, 139, 15), // "editorTextWidth"
QT_MOC_LITERAL(11, 155, 11), // "changeTheme"
QT_MOC_LITERAL(12, 167, 5), // "Theme"
QT_MOC_LITERAL(13, 173, 5), // "theme"
QT_MOC_LITERAL(14, 179, 28), // "resetEditorToDefaultSettings"
QT_MOC_LITERAL(15, 208, 22) // "toggleWindowVisibility"

    },
    "StyleEditorWindow\0changeFontType\0\0"
    "FontTypeface\0fontType\0changeFontSize\0"
    "FontSizeAction\0fontSizeAction\0"
    "changeEditorTextWidth\0EditorTextWidth\0"
    "editorTextWidth\0changeTheme\0Theme\0"
    "theme\0resetEditorToDefaultSettings\0"
    "toggleWindowVisibility"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StyleEditorWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,
       8,    1,   50,    2, 0x06 /* Public */,
      11,    1,   53,    2, 0x06 /* Public */,
      14,    0,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    0,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void StyleEditorWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StyleEditorWindow *_t = static_cast<StyleEditorWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeFontType((*reinterpret_cast< FontTypeface(*)>(_a[1]))); break;
        case 1: _t->changeFontSize((*reinterpret_cast< FontSizeAction(*)>(_a[1]))); break;
        case 2: _t->changeEditorTextWidth((*reinterpret_cast< EditorTextWidth(*)>(_a[1]))); break;
        case 3: _t->changeTheme((*reinterpret_cast< Theme(*)>(_a[1]))); break;
        case 4: _t->resetEditorToDefaultSettings(); break;
        case 5: _t->toggleWindowVisibility(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (StyleEditorWindow::*_t)(FontTypeface );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StyleEditorWindow::changeFontType)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (StyleEditorWindow::*_t)(FontSizeAction );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StyleEditorWindow::changeFontSize)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (StyleEditorWindow::*_t)(EditorTextWidth );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StyleEditorWindow::changeEditorTextWidth)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (StyleEditorWindow::*_t)(Theme );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StyleEditorWindow::changeTheme)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (StyleEditorWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StyleEditorWindow::resetEditorToDefaultSettings)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject StyleEditorWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_StyleEditorWindow.data,
      qt_meta_data_StyleEditorWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *StyleEditorWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StyleEditorWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StyleEditorWindow.stringdata0))
        return static_cast<void*>(const_cast< StyleEditorWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int StyleEditorWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void StyleEditorWindow::changeFontType(FontTypeface _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StyleEditorWindow::changeFontSize(FontSizeAction _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StyleEditorWindow::changeEditorTextWidth(EditorTextWidth _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void StyleEditorWindow::changeTheme(Theme _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void StyleEditorWindow::resetEditorToDefaultSettings()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
