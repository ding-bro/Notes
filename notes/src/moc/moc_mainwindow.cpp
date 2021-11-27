/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[100];
    char stringdata0[1648];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 16), // "requestNotesList"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 20), // "requestOpenDBManager"
QT_MOC_LITERAL(4, 50, 4), // "path"
QT_MOC_LITERAL(5, 55, 8), // "doCreate"
QT_MOC_LITERAL(6, 64, 23), // "requestCreateUpdateNote"
QT_MOC_LITERAL(7, 88, 9), // "NoteData*"
QT_MOC_LITERAL(8, 98, 4), // "note"
QT_MOC_LITERAL(9, 103, 17), // "requestDeleteNote"
QT_MOC_LITERAL(10, 121, 19), // "requestRestoreNotes"
QT_MOC_LITERAL(11, 141, 16), // "QList<NoteData*>"
QT_MOC_LITERAL(12, 158, 8), // "noteList"
QT_MOC_LITERAL(13, 167, 18), // "requestImportNotes"
QT_MOC_LITERAL(14, 186, 18), // "requestExportNotes"
QT_MOC_LITERAL(15, 205, 8), // "fileName"
QT_MOC_LITERAL(16, 214, 19), // "requestMigrateNotes"
QT_MOC_LITERAL(17, 234, 19), // "requestMigrateTrash"
QT_MOC_LITERAL(18, 254, 29), // "requestForceLastRowIndexValue"
QT_MOC_LITERAL(19, 284, 5), // "index"
QT_MOC_LITERAL(20, 290, 8), // "InitData"
QT_MOC_LITERAL(21, 299, 9), // "loadNotes"
QT_MOC_LITERAL(22, 309, 11), // "noteCounter"
QT_MOC_LITERAL(23, 321, 22), // "onNewNoteButtonPressed"
QT_MOC_LITERAL(24, 344, 22), // "onNewNoteButtonClicked"
QT_MOC_LITERAL(25, 367, 20), // "onTrashButtonPressed"
QT_MOC_LITERAL(26, 388, 20), // "onTrashButtonClicked"
QT_MOC_LITERAL(27, 409, 19), // "onDotsButtonPressed"
QT_MOC_LITERAL(28, 429, 19), // "onDotsButtonClicked"
QT_MOC_LITERAL(29, 449, 26), // "onStyleEditorButtonPressed"
QT_MOC_LITERAL(30, 476, 26), // "onStyleEditorButtonClicked"
QT_MOC_LITERAL(31, 503, 13), // "onNotePressed"
QT_MOC_LITERAL(32, 517, 21), // "onTextEditTextChanged"
QT_MOC_LITERAL(33, 539, 23), // "onSearchEditTextChanged"
QT_MOC_LITERAL(34, 563, 7), // "keyword"
QT_MOC_LITERAL(35, 571, 20), // "onClearButtonClicked"
QT_MOC_LITERAL(36, 592, 28), // "onGreenMaximizeButtonPressed"
QT_MOC_LITERAL(37, 621, 29), // "onYellowMinimizeButtonPressed"
QT_MOC_LITERAL(38, 651, 23), // "onRedCloseButtonPressed"
QT_MOC_LITERAL(39, 675, 28), // "onGreenMaximizeButtonClicked"
QT_MOC_LITERAL(40, 704, 29), // "onYellowMinimizeButtonClicked"
QT_MOC_LITERAL(41, 734, 23), // "onRedCloseButtonClicked"
QT_MOC_LITERAL(42, 758, 13), // "createNewNote"
QT_MOC_LITERAL(43, 772, 10), // "deleteNote"
QT_MOC_LITERAL(44, 783, 9), // "noteIndex"
QT_MOC_LITERAL(45, 793, 10), // "isFromUser"
QT_MOC_LITERAL(46, 804, 18), // "deleteSelectedNote"
QT_MOC_LITERAL(47, 823, 21), // "setFocusOnCurrentNote"
QT_MOC_LITERAL(48, 845, 14), // "selectNoteDown"
QT_MOC_LITERAL(49, 860, 12), // "selectNoteUp"
QT_MOC_LITERAL(50, 873, 14), // "setFocusOnText"
QT_MOC_LITERAL(51, 888, 16), // "fullscreenWindow"
QT_MOC_LITERAL(52, 905, 14), // "maximizeWindow"
QT_MOC_LITERAL(53, 920, 14), // "minimizeWindow"
QT_MOC_LITERAL(54, 935, 15), // "QuitApplication"
QT_MOC_LITERAL(55, 951, 15), // "checkForUpdates"
QT_MOC_LITERAL(56, 967, 7), // "clicked"
QT_MOC_LITERAL(57, 975, 16), // "collapseNoteList"
QT_MOC_LITERAL(58, 992, 14), // "expandNoteList"
QT_MOC_LITERAL(59, 1007, 25), // "enableMarkdownHighlighter"
QT_MOC_LITERAL(60, 1033, 26), // "disableMarkdownHighlighter"
QT_MOC_LITERAL(61, 1060, 14), // "toggleNoteList"
QT_MOC_LITERAL(62, 1075, 15), // "importNotesFile"
QT_MOC_LITERAL(63, 1091, 15), // "exportNotesFile"
QT_MOC_LITERAL(64, 1107, 16), // "restoreNotesFile"
QT_MOC_LITERAL(65, 1124, 9), // "stayOnTop"
QT_MOC_LITERAL(66, 1134, 7), // "checked"
QT_MOC_LITERAL(67, 1142, 33), // "askBeforeSettingNativeWindowF..."
QT_MOC_LITERAL(68, 1176, 23), // "setUseNativeWindowFrame"
QT_MOC_LITERAL(69, 1200, 20), // "useNativeWindowFrame"
QT_MOC_LITERAL(70, 1221, 15), // "toggleStayOnTop"
QT_MOC_LITERAL(71, 1237, 25), // "onSearchEditReturnPressed"
QT_MOC_LITERAL(72, 1263, 36), // "changeEditorFontTypeFromStyle..."
QT_MOC_LITERAL(73, 1300, 12), // "FontTypeface"
QT_MOC_LITERAL(74, 1313, 8), // "fontType"
QT_MOC_LITERAL(75, 1322, 36), // "changeEditorFontSizeFromStyle..."
QT_MOC_LITERAL(76, 1359, 14), // "FontSizeAction"
QT_MOC_LITERAL(77, 1374, 14), // "fontSizeAction"
QT_MOC_LITERAL(78, 1389, 37), // "changeEditorTextWidthFromStyl..."
QT_MOC_LITERAL(79, 1427, 15), // "EditorTextWidth"
QT_MOC_LITERAL(80, 1443, 15), // "editorTextWidth"
QT_MOC_LITERAL(81, 1459, 28), // "resetEditorToDefaultSettings"
QT_MOC_LITERAL(82, 1488, 8), // "setTheme"
QT_MOC_LITERAL(83, 1497, 5), // "Theme"
QT_MOC_LITERAL(84, 1503, 5), // "theme"
QT_MOC_LITERAL(85, 1509, 23), // "createOrSelectFirstNote"
QT_MOC_LITERAL(86, 1533, 10), // "ShadowType"
QT_MOC_LITERAL(87, 1544, 6), // "Linear"
QT_MOC_LITERAL(88, 1551, 6), // "Radial"
QT_MOC_LITERAL(89, 1558, 10), // "ShadowSide"
QT_MOC_LITERAL(90, 1569, 4), // "Left"
QT_MOC_LITERAL(91, 1574, 5), // "Right"
QT_MOC_LITERAL(92, 1580, 3), // "Top"
QT_MOC_LITERAL(93, 1584, 6), // "Bottom"
QT_MOC_LITERAL(94, 1591, 7), // "TopLeft"
QT_MOC_LITERAL(95, 1599, 8), // "TopRight"
QT_MOC_LITERAL(96, 1608, 10), // "BottomLeft"
QT_MOC_LITERAL(97, 1619, 11), // "BottomRight"
QT_MOC_LITERAL(98, 1631, 11), // "StretchSide"
QT_MOC_LITERAL(99, 1643, 4) // "None"

    },
    "MainWindow\0requestNotesList\0\0"
    "requestOpenDBManager\0path\0doCreate\0"
    "requestCreateUpdateNote\0NoteData*\0"
    "note\0requestDeleteNote\0requestRestoreNotes\0"
    "QList<NoteData*>\0noteList\0requestImportNotes\0"
    "requestExportNotes\0fileName\0"
    "requestMigrateNotes\0requestMigrateTrash\0"
    "requestForceLastRowIndexValue\0index\0"
    "InitData\0loadNotes\0noteCounter\0"
    "onNewNoteButtonPressed\0onNewNoteButtonClicked\0"
    "onTrashButtonPressed\0onTrashButtonClicked\0"
    "onDotsButtonPressed\0onDotsButtonClicked\0"
    "onStyleEditorButtonPressed\0"
    "onStyleEditorButtonClicked\0onNotePressed\0"
    "onTextEditTextChanged\0onSearchEditTextChanged\0"
    "keyword\0onClearButtonClicked\0"
    "onGreenMaximizeButtonPressed\0"
    "onYellowMinimizeButtonPressed\0"
    "onRedCloseButtonPressed\0"
    "onGreenMaximizeButtonClicked\0"
    "onYellowMinimizeButtonClicked\0"
    "onRedCloseButtonClicked\0createNewNote\0"
    "deleteNote\0noteIndex\0isFromUser\0"
    "deleteSelectedNote\0setFocusOnCurrentNote\0"
    "selectNoteDown\0selectNoteUp\0setFocusOnText\0"
    "fullscreenWindow\0maximizeWindow\0"
    "minimizeWindow\0QuitApplication\0"
    "checkForUpdates\0clicked\0collapseNoteList\0"
    "expandNoteList\0enableMarkdownHighlighter\0"
    "disableMarkdownHighlighter\0toggleNoteList\0"
    "importNotesFile\0exportNotesFile\0"
    "restoreNotesFile\0stayOnTop\0checked\0"
    "askBeforeSettingNativeWindowFrame\0"
    "setUseNativeWindowFrame\0useNativeWindowFrame\0"
    "toggleStayOnTop\0onSearchEditReturnPressed\0"
    "changeEditorFontTypeFromStyleButtons\0"
    "FontTypeface\0fontType\0"
    "changeEditorFontSizeFromStyleButtons\0"
    "FontSizeAction\0fontSizeAction\0"
    "changeEditorTextWidthFromStyleButtons\0"
    "EditorTextWidth\0editorTextWidth\0"
    "resetEditorToDefaultSettings\0setTheme\0"
    "Theme\0theme\0createOrSelectFirstNote\0"
    "ShadowType\0Linear\0Radial\0ShadowSide\0"
    "Left\0Right\0Top\0Bottom\0TopLeft\0TopRight\0"
    "BottomLeft\0BottomRight\0StretchSide\0"
    "None"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      62,   14, // methods
       0,    0, // properties
       3,  440, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  324,    2, 0x06 /* Public */,
       3,    2,  325,    2, 0x06 /* Public */,
       6,    1,  330,    2, 0x06 /* Public */,
       9,    1,  333,    2, 0x06 /* Public */,
      10,    1,  336,    2, 0x06 /* Public */,
      13,    1,  339,    2, 0x06 /* Public */,
      14,    1,  342,    2, 0x06 /* Public */,
      16,    1,  345,    2, 0x06 /* Public */,
      17,    1,  348,    2, 0x06 /* Public */,
      18,    1,  351,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      20,    0,  354,    2, 0x08 /* Private */,
      21,    2,  355,    2, 0x08 /* Private */,
      23,    0,  360,    2, 0x08 /* Private */,
      24,    0,  361,    2, 0x08 /* Private */,
      25,    0,  362,    2, 0x08 /* Private */,
      26,    0,  363,    2, 0x08 /* Private */,
      27,    0,  364,    2, 0x08 /* Private */,
      28,    0,  365,    2, 0x08 /* Private */,
      29,    0,  366,    2, 0x08 /* Private */,
      30,    0,  367,    2, 0x08 /* Private */,
      31,    1,  368,    2, 0x08 /* Private */,
      32,    0,  371,    2, 0x08 /* Private */,
      33,    1,  372,    2, 0x08 /* Private */,
      35,    0,  375,    2, 0x08 /* Private */,
      36,    0,  376,    2, 0x08 /* Private */,
      37,    0,  377,    2, 0x08 /* Private */,
      38,    0,  378,    2, 0x08 /* Private */,
      39,    0,  379,    2, 0x08 /* Private */,
      40,    0,  380,    2, 0x08 /* Private */,
      41,    0,  381,    2, 0x08 /* Private */,
      42,    0,  382,    2, 0x08 /* Private */,
      43,    2,  383,    2, 0x08 /* Private */,
      43,    1,  388,    2, 0x28 /* Private | MethodCloned */,
      46,    0,  391,    2, 0x08 /* Private */,
      47,    0,  392,    2, 0x08 /* Private */,
      48,    0,  393,    2, 0x08 /* Private */,
      49,    0,  394,    2, 0x08 /* Private */,
      50,    0,  395,    2, 0x08 /* Private */,
      51,    0,  396,    2, 0x08 /* Private */,
      52,    0,  397,    2, 0x08 /* Private */,
      53,    0,  398,    2, 0x08 /* Private */,
      54,    0,  399,    2, 0x08 /* Private */,
      55,    1,  400,    2, 0x08 /* Private */,
      57,    0,  403,    2, 0x08 /* Private */,
      58,    0,  404,    2, 0x08 /* Private */,
      59,    0,  405,    2, 0x08 /* Private */,
      60,    0,  406,    2, 0x08 /* Private */,
      61,    0,  407,    2, 0x08 /* Private */,
      62,    1,  408,    2, 0x08 /* Private */,
      63,    1,  411,    2, 0x08 /* Private */,
      64,    1,  414,    2, 0x08 /* Private */,
      65,    1,  417,    2, 0x08 /* Private */,
      67,    0,  420,    2, 0x08 /* Private */,
      68,    1,  421,    2, 0x08 /* Private */,
      70,    0,  424,    2, 0x08 /* Private */,
      71,    0,  425,    2, 0x08 /* Private */,
      72,    1,  426,    2, 0x08 /* Private */,
      75,    1,  429,    2, 0x08 /* Private */,
      78,    1,  432,    2, 0x08 /* Private */,
      81,    0,  435,    2, 0x08 /* Private */,
      82,    1,  436,    2, 0x08 /* Private */,
      85,    0,  439,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::Int,   19,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Int,   12,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   34,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Bool,   44,   45,
    QMetaType::Void, QMetaType::QModelIndex,   44,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   56,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   56,
    QMetaType::Void, QMetaType::Bool,   56,
    QMetaType::Void, QMetaType::Bool,   56,
    QMetaType::Void, QMetaType::Bool,   66,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   69,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 73,   74,
    QMetaType::Void, 0x80000000 | 76,   77,
    QMetaType::Void, 0x80000000 | 79,   80,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 83,   84,
    QMetaType::Void,

 // enums: name, flags, count, data
      86, 0x2,    2,  452,
      89, 0x2,    8,  456,
      98, 0x2,    9,  472,

 // enum data: key, value
      87, uint(MainWindow::ShadowType::Linear),
      88, uint(MainWindow::ShadowType::Radial),
      90, uint(MainWindow::ShadowSide::Left),
      91, uint(MainWindow::ShadowSide::Right),
      92, uint(MainWindow::ShadowSide::Top),
      93, uint(MainWindow::ShadowSide::Bottom),
      94, uint(MainWindow::ShadowSide::TopLeft),
      95, uint(MainWindow::ShadowSide::TopRight),
      96, uint(MainWindow::ShadowSide::BottomLeft),
      97, uint(MainWindow::ShadowSide::BottomRight),
      99, uint(MainWindow::StretchSide::None),
      90, uint(MainWindow::StretchSide::Left),
      91, uint(MainWindow::StretchSide::Right),
      92, uint(MainWindow::StretchSide::Top),
      93, uint(MainWindow::StretchSide::Bottom),
      94, uint(MainWindow::StretchSide::TopLeft),
      95, uint(MainWindow::StretchSide::TopRight),
      96, uint(MainWindow::StretchSide::BottomLeft),
      97, uint(MainWindow::StretchSide::BottomRight),

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestNotesList(); break;
        case 1: _t->requestOpenDBManager((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->requestCreateUpdateNote((*reinterpret_cast< NoteData*(*)>(_a[1]))); break;
        case 3: _t->requestDeleteNote((*reinterpret_cast< NoteData*(*)>(_a[1]))); break;
        case 4: _t->requestRestoreNotes((*reinterpret_cast< QList<NoteData*>(*)>(_a[1]))); break;
        case 5: _t->requestImportNotes((*reinterpret_cast< QList<NoteData*>(*)>(_a[1]))); break;
        case 6: _t->requestExportNotes((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->requestMigrateNotes((*reinterpret_cast< QList<NoteData*>(*)>(_a[1]))); break;
        case 8: _t->requestMigrateTrash((*reinterpret_cast< QList<NoteData*>(*)>(_a[1]))); break;
        case 9: _t->requestForceLastRowIndexValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->InitData(); break;
        case 11: _t->loadNotes((*reinterpret_cast< QList<NoteData*>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->onNewNoteButtonPressed(); break;
        case 13: _t->onNewNoteButtonClicked(); break;
        case 14: _t->onTrashButtonPressed(); break;
        case 15: _t->onTrashButtonClicked(); break;
        case 16: _t->onDotsButtonPressed(); break;
        case 17: _t->onDotsButtonClicked(); break;
        case 18: _t->onStyleEditorButtonPressed(); break;
        case 19: _t->onStyleEditorButtonClicked(); break;
        case 20: _t->onNotePressed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 21: _t->onTextEditTextChanged(); break;
        case 22: _t->onSearchEditTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: _t->onClearButtonClicked(); break;
        case 24: _t->onGreenMaximizeButtonPressed(); break;
        case 25: _t->onYellowMinimizeButtonPressed(); break;
        case 26: _t->onRedCloseButtonPressed(); break;
        case 27: _t->onGreenMaximizeButtonClicked(); break;
        case 28: _t->onYellowMinimizeButtonClicked(); break;
        case 29: _t->onRedCloseButtonClicked(); break;
        case 30: _t->createNewNote(); break;
        case 31: _t->deleteNote((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 32: _t->deleteNote((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 33: _t->deleteSelectedNote(); break;
        case 34: _t->setFocusOnCurrentNote(); break;
        case 35: _t->selectNoteDown(); break;
        case 36: _t->selectNoteUp(); break;
        case 37: _t->setFocusOnText(); break;
        case 38: _t->fullscreenWindow(); break;
        case 39: _t->maximizeWindow(); break;
        case 40: _t->minimizeWindow(); break;
        case 41: _t->QuitApplication(); break;
        case 42: _t->checkForUpdates((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 43: _t->collapseNoteList(); break;
        case 44: _t->expandNoteList(); break;
        case 45: _t->enableMarkdownHighlighter(); break;
        case 46: _t->disableMarkdownHighlighter(); break;
        case 47: _t->toggleNoteList(); break;
        case 48: _t->importNotesFile((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 49: _t->exportNotesFile((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 50: _t->restoreNotesFile((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 51: _t->stayOnTop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 52: _t->askBeforeSettingNativeWindowFrame(); break;
        case 53: _t->setUseNativeWindowFrame((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 54: _t->toggleStayOnTop(); break;
        case 55: _t->onSearchEditReturnPressed(); break;
        case 56: _t->changeEditorFontTypeFromStyleButtons((*reinterpret_cast< FontTypeface(*)>(_a[1]))); break;
        case 57: _t->changeEditorFontSizeFromStyleButtons((*reinterpret_cast< FontSizeAction(*)>(_a[1]))); break;
        case 58: _t->changeEditorTextWidthFromStyleButtons((*reinterpret_cast< EditorTextWidth(*)>(_a[1]))); break;
        case 59: _t->resetEditorToDefaultSettings(); break;
        case 60: _t->setTheme((*reinterpret_cast< Theme(*)>(_a[1]))); break;
        case 61: _t->createOrSelectFirstNote(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< NoteData* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< NoteData* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<NoteData*> >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<NoteData*> >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<NoteData*> >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<NoteData*> >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<NoteData*> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::requestNotesList)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QString , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::requestOpenDBManager)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(NoteData * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::requestCreateUpdateNote)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(NoteData * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::requestDeleteNote)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QList<NoteData*> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::requestRestoreNotes)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QList<NoteData*> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::requestImportNotes)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::requestExportNotes)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QList<NoteData*> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::requestMigrateNotes)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QList<NoteData*> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::requestMigrateTrash)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::requestForceLastRowIndexValue)) {
                *result = 9;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &CFramelessWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return CFramelessWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CFramelessWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 62)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 62;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 62)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 62;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::requestNotesList()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWindow::requestOpenDBManager(QString _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::requestCreateUpdateNote(NoteData * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::requestDeleteNote(NoteData * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainWindow::requestRestoreNotes(QList<NoteData*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainWindow::requestImportNotes(QList<NoteData*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MainWindow::requestExportNotes(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MainWindow::requestMigrateNotes(QList<NoteData*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MainWindow::requestMigrateTrash(QList<NoteData*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MainWindow::requestForceLastRowIndexValue(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
