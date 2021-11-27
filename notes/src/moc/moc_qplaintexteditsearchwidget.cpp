/****************************************************************************
** Meta object code from reading C++ file 'qplaintexteditsearchwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Third-party/qmarkdowntextedit/qplaintexteditsearchwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qplaintexteditsearchwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QPlainTextEditSearchWidget_t {
    QByteArrayData data[23];
    char stringdata0[335];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPlainTextEditSearchWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPlainTextEditSearchWidget_t qt_meta_stringdata_QPlainTextEditSearchWidget = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QPlainTextEditSearchWidget"
QT_MOC_LITERAL(1, 27, 8), // "activate"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 10), // "deactivate"
QT_MOC_LITERAL(4, 48, 12), // "doSearchDown"
QT_MOC_LITERAL(5, 61, 10), // "doSearchUp"
QT_MOC_LITERAL(6, 72, 14), // "setReplaceMode"
QT_MOC_LITERAL(7, 87, 7), // "enabled"
QT_MOC_LITERAL(8, 95, 15), // "activateReplace"
QT_MOC_LITERAL(9, 111, 9), // "doReplace"
QT_MOC_LITERAL(10, 121, 6), // "forAll"
QT_MOC_LITERAL(11, 128, 12), // "doReplaceAll"
QT_MOC_LITERAL(12, 141, 5), // "reset"
QT_MOC_LITERAL(13, 147, 13), // "doSearchCount"
QT_MOC_LITERAL(14, 161, 25), // "searchLineEditTextChanged"
QT_MOC_LITERAL(15, 187, 4), // "arg1"
QT_MOC_LITERAL(16, 192, 26), // "updateSearchCountLabelText"
QT_MOC_LITERAL(17, 219, 23), // "setSearchSelectionColor"
QT_MOC_LITERAL(18, 243, 5), // "color"
QT_MOC_LITERAL(19, 249, 35), // "on_modeComboBox_currentIndexC..."
QT_MOC_LITERAL(20, 285, 5), // "index"
QT_MOC_LITERAL(21, 291, 35), // "on_matchCaseSensitiveButton_t..."
QT_MOC_LITERAL(22, 327, 7) // "checked"

    },
    "QPlainTextEditSearchWidget\0activate\0"
    "\0deactivate\0doSearchDown\0doSearchUp\0"
    "setReplaceMode\0enabled\0activateReplace\0"
    "doReplace\0forAll\0doReplaceAll\0reset\0"
    "doSearchCount\0searchLineEditTextChanged\0"
    "arg1\0updateSearchCountLabelText\0"
    "setSearchSelectionColor\0color\0"
    "on_modeComboBox_currentIndexChanged\0"
    "index\0on_matchCaseSensitiveButton_toggled\0"
    "checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPlainTextEditSearchWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x0a /* Public */,
       3,    0,   95,    2, 0x0a /* Public */,
       4,    0,   96,    2, 0x0a /* Public */,
       5,    0,   97,    2, 0x0a /* Public */,
       6,    1,   98,    2, 0x0a /* Public */,
       8,    0,  101,    2, 0x0a /* Public */,
       9,    1,  102,    2, 0x0a /* Public */,
       9,    0,  105,    2, 0x2a /* Public | MethodCloned */,
      11,    0,  106,    2, 0x0a /* Public */,
      12,    0,  107,    2, 0x0a /* Public */,
      13,    0,  108,    2, 0x0a /* Public */,
      14,    1,  109,    2, 0x09 /* Protected */,
      16,    0,  112,    2, 0x09 /* Protected */,
      17,    1,  113,    2, 0x09 /* Protected */,
      19,    1,  116,    2, 0x08 /* Private */,
      21,    1,  119,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::Bool,   10,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,   18,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Bool,   22,

       0        // eod
};

void QPlainTextEditSearchWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QPlainTextEditSearchWidget *_t = static_cast<QPlainTextEditSearchWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activate(); break;
        case 1: _t->deactivate(); break;
        case 2: _t->doSearchDown(); break;
        case 3: _t->doSearchUp(); break;
        case 4: _t->setReplaceMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->activateReplace(); break;
        case 6: { bool _r = _t->doReplace((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->doReplace();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->doReplaceAll(); break;
        case 9: _t->reset(); break;
        case 10: _t->doSearchCount(); break;
        case 11: _t->searchLineEditTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->updateSearchCountLabelText(); break;
        case 13: _t->setSearchSelectionColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 14: _t->on_modeComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->on_matchCaseSensitiveButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QPlainTextEditSearchWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QPlainTextEditSearchWidget.data,
      qt_meta_data_QPlainTextEditSearchWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QPlainTextEditSearchWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPlainTextEditSearchWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QPlainTextEditSearchWidget.stringdata0))
        return static_cast<void*>(const_cast< QPlainTextEditSearchWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QPlainTextEditSearchWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
