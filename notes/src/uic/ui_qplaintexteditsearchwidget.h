/********************************************************************************
** Form generated from reading UI file 'qplaintexteditsearchwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QPLAINTEXTEDITSEARCHWIDGET_H
#define UI_QPLAINTEXTEDITSEARCHWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QPlainTextEditSearchWidget
{
public:
    QGridLayout *gridLayout;
    QLineEdit *searchLineEdit;
    QLineEdit *replaceLineEdit;
    QLabel *searchCountLabel;
    QLabel *searchLabel;
    QPushButton *searchUpButton;
    QLabel *replaceLabel;
    QPushButton *closeButton;
    QPushButton *replaceToggleButton;
    QPushButton *searchDownButton;
    QPushButton *matchCaseSensitiveButton;
    QLabel *modeLabel;
    QFrame *buttonFrame;
    QHBoxLayout *horizontalLayout;
    QComboBox *modeComboBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *replaceButton;
    QPushButton *replaceAllButton;

    void setupUi(QWidget *QPlainTextEditSearchWidget)
    {
        if (QPlainTextEditSearchWidget->objectName().isEmpty())
            QPlainTextEditSearchWidget->setObjectName(QStringLiteral("QPlainTextEditSearchWidget"));
        QPlainTextEditSearchWidget->resize(836, 142);
        QPlainTextEditSearchWidget->setAutoFillBackground(true);
        gridLayout = new QGridLayout(QPlainTextEditSearchWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        searchLineEdit = new QLineEdit(QPlainTextEditSearchWidget);
        searchLineEdit->setObjectName(QStringLiteral("searchLineEdit"));

        gridLayout->addWidget(searchLineEdit, 0, 3, 1, 1);

        replaceLineEdit = new QLineEdit(QPlainTextEditSearchWidget);
        replaceLineEdit->setObjectName(QStringLiteral("replaceLineEdit"));

        gridLayout->addWidget(replaceLineEdit, 1, 3, 1, 2);

        searchCountLabel = new QLabel(QPlainTextEditSearchWidget);
        searchCountLabel->setObjectName(QStringLiteral("searchCountLabel"));
        searchCountLabel->setText(QStringLiteral("-/-"));

        gridLayout->addWidget(searchCountLabel, 0, 4, 1, 1);

        searchLabel = new QLabel(QPlainTextEditSearchWidget);
        searchLabel->setObjectName(QStringLiteral("searchLabel"));
        searchLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(searchLabel, 0, 1, 1, 1);

        searchUpButton = new QPushButton(QPlainTextEditSearchWidget);
        searchUpButton->setObjectName(QStringLiteral("searchUpButton"));
        QIcon icon;
        QString iconThemeName = QStringLiteral("go-top");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QStringLiteral(":/media/go-top.svg"), QSize(), QIcon::Normal, QIcon::Off);
        }
        searchUpButton->setIcon(icon);
        searchUpButton->setFlat(true);

        gridLayout->addWidget(searchUpButton, 0, 6, 1, 1);

        replaceLabel = new QLabel(QPlainTextEditSearchWidget);
        replaceLabel->setObjectName(QStringLiteral("replaceLabel"));
        replaceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(replaceLabel, 1, 0, 1, 2);

        closeButton = new QPushButton(QPlainTextEditSearchWidget);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        QIcon icon1;
        iconThemeName = QStringLiteral("window-close");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QStringLiteral(":/media/window-close.svg"), QSize(), QIcon::Normal, QIcon::Off);
        }
        closeButton->setIcon(icon1);
        closeButton->setFlat(true);

        gridLayout->addWidget(closeButton, 0, 0, 1, 1);

        replaceToggleButton = new QPushButton(QPlainTextEditSearchWidget);
        replaceToggleButton->setObjectName(QStringLiteral("replaceToggleButton"));
        QIcon icon2;
        iconThemeName = QStringLiteral("edit-find-replace");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QStringLiteral(":/media/edit-find-replace.svg"), QSize(), QIcon::Normal, QIcon::Off);
        }
        replaceToggleButton->setIcon(icon2);
        replaceToggleButton->setCheckable(true);
        replaceToggleButton->setFlat(true);

        gridLayout->addWidget(replaceToggleButton, 0, 7, 1, 1);

        searchDownButton = new QPushButton(QPlainTextEditSearchWidget);
        searchDownButton->setObjectName(QStringLiteral("searchDownButton"));
        QIcon icon3;
        iconThemeName = QStringLiteral("go-bottom");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon3 = QIcon::fromTheme(iconThemeName);
        } else {
            icon3.addFile(QStringLiteral(":/media/go-bottom.svg"), QSize(), QIcon::Normal, QIcon::Off);
        }
        searchDownButton->setIcon(icon3);
        searchDownButton->setFlat(true);

        gridLayout->addWidget(searchDownButton, 0, 5, 1, 1);

        matchCaseSensitiveButton = new QPushButton(QPlainTextEditSearchWidget);
        matchCaseSensitiveButton->setObjectName(QStringLiteral("matchCaseSensitiveButton"));
        QIcon icon4;
        iconThemeName = QStringLiteral("format-text-superscript");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon4 = QIcon::fromTheme(iconThemeName);
        } else {
            icon4.addFile(QStringLiteral(":/media/format-text-superscript.svg"), QSize(), QIcon::Normal, QIcon::Off);
        }
        matchCaseSensitiveButton->setIcon(icon4);
        matchCaseSensitiveButton->setCheckable(true);
        matchCaseSensitiveButton->setFlat(true);

        gridLayout->addWidget(matchCaseSensitiveButton, 1, 5, 1, 1);

        modeLabel = new QLabel(QPlainTextEditSearchWidget);
        modeLabel->setObjectName(QStringLiteral("modeLabel"));
        modeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(modeLabel, 2, 0, 1, 2);

        buttonFrame = new QFrame(QPlainTextEditSearchWidget);
        buttonFrame->setObjectName(QStringLiteral("buttonFrame"));
        buttonFrame->setFrameShape(QFrame::NoFrame);
        horizontalLayout = new QHBoxLayout(buttonFrame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        modeComboBox = new QComboBox(buttonFrame);
        modeComboBox->setObjectName(QStringLiteral("modeComboBox"));

        horizontalLayout->addWidget(modeComboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        replaceButton = new QPushButton(buttonFrame);
        replaceButton->setObjectName(QStringLiteral("replaceButton"));
        replaceButton->setFlat(false);

        horizontalLayout->addWidget(replaceButton);

        replaceAllButton = new QPushButton(buttonFrame);
        replaceAllButton->setObjectName(QStringLiteral("replaceAllButton"));
        replaceAllButton->setFlat(false);

        horizontalLayout->addWidget(replaceAllButton);


        gridLayout->addWidget(buttonFrame, 2, 3, 1, 2);

        QWidget::setTabOrder(searchLineEdit, replaceLineEdit);
        QWidget::setTabOrder(replaceLineEdit, replaceButton);
        QWidget::setTabOrder(replaceButton, replaceAllButton);
        QWidget::setTabOrder(replaceAllButton, searchDownButton);
        QWidget::setTabOrder(searchDownButton, searchUpButton);
        QWidget::setTabOrder(searchUpButton, replaceToggleButton);
        QWidget::setTabOrder(replaceToggleButton, closeButton);

        retranslateUi(QPlainTextEditSearchWidget);

        QMetaObject::connectSlotsByName(QPlainTextEditSearchWidget);
    } // setupUi

    void retranslateUi(QWidget *QPlainTextEditSearchWidget)
    {
        searchLineEdit->setPlaceholderText(QApplication::translate("QPlainTextEditSearchWidget", "Find in text", Q_NULLPTR));
        replaceLineEdit->setPlaceholderText(QApplication::translate("QPlainTextEditSearchWidget", "Replace with", Q_NULLPTR));
        searchLabel->setText(QApplication::translate("QPlainTextEditSearchWidget", "Find:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        searchUpButton->setToolTip(QApplication::translate("QPlainTextEditSearchWidget", "Search backward", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        searchUpButton->setText(QString());
        replaceLabel->setText(QApplication::translate("QPlainTextEditSearchWidget", "Replace:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        closeButton->setToolTip(QApplication::translate("QPlainTextEditSearchWidget", "Close search", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        closeButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        replaceToggleButton->setToolTip(QApplication::translate("QPlainTextEditSearchWidget", "Advanced search / replace text", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        replaceToggleButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        searchDownButton->setToolTip(QApplication::translate("QPlainTextEditSearchWidget", "Search forward", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        searchDownButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        matchCaseSensitiveButton->setToolTip(QApplication::translate("QPlainTextEditSearchWidget", "Match case sensitive", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        matchCaseSensitiveButton->setText(QString());
        modeLabel->setText(QApplication::translate("QPlainTextEditSearchWidget", "Mode:", Q_NULLPTR));
        modeComboBox->clear();
        modeComboBox->insertItems(0, QStringList()
         << QApplication::translate("QPlainTextEditSearchWidget", "Plain text", Q_NULLPTR)
         << QApplication::translate("QPlainTextEditSearchWidget", "Whole words", Q_NULLPTR)
         << QApplication::translate("QPlainTextEditSearchWidget", "Regular expression", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        replaceButton->setToolTip(QApplication::translate("QPlainTextEditSearchWidget", "Replace one text occurrence", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        replaceButton->setText(QApplication::translate("QPlainTextEditSearchWidget", "Replace", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        replaceAllButton->setToolTip(QApplication::translate("QPlainTextEditSearchWidget", "Replace all text occurrences", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        replaceAllButton->setText(QApplication::translate("QPlainTextEditSearchWidget", "Replace all", Q_NULLPTR));
        Q_UNUSED(QPlainTextEditSearchWidget);
    } // retranslateUi

};

namespace Ui {
    class QPlainTextEditSearchWidget: public Ui_QPlainTextEditSearchWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QPLAINTEXTEDITSEARCHWIDGET_H
