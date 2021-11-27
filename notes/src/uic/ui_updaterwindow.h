/********************************************************************************
** Form generated from reading UI file 'updaterwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATERWINDOW_H
#define UI_UPDATERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UpdaterWindow
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *headerWidget;
    QHBoxLayout *horizontalLayout_2;
    QWidget *titleWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *title;
    QWidget *versionsWidget;
    QGridLayout *gridLayout;
    QLabel *availableVersion;
    QLabel *availableVersion_Label;
    QSpacerItem *horizontalSpacer_3;
    QLabel *installedVersion;
    QSpacerItem *horizontalSpacer_2;
    QLabel *installedVersion_Label;
    QSpacerItem *verticalSpacer_2;
    QWidget *changesWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *whatsNewLabel;
    QTextBrowser *changelog;
    QSpacerItem *verticalSpacer;
    QWidget *progressControls;
    QVBoxLayout *verticalLayout_3;
    QLabel *downloadLabel;
    QSpacerItem *verticalSpacer_4;
    QProgressBar *progressBar;
    QLabel *timeLabel;
    QSpacerItem *verticalSpacer_3;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QCheckBox *checkBox;
    QLabel *label;
    QSpacerItem *horizontalSpacer_5;
    QWidget *buttonsWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeButton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *updateButton;

    void setupUi(QWidget *UpdaterWindow)
    {
        if (UpdaterWindow->objectName().isEmpty())
            UpdaterWindow->setObjectName(QStringLiteral("UpdaterWindow"));
        UpdaterWindow->resize(420, 514);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(UpdaterWindow->sizePolicy().hasHeightForWidth());
        UpdaterWindow->setSizePolicy(sizePolicy);
        UpdaterWindow->setMinimumSize(QSize(420, 0));
        UpdaterWindow->setMaximumSize(QSize(420, 16777215));
        verticalLayout = new QVBoxLayout(UpdaterWindow);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(20, 20, 20, 20);
        headerWidget = new QWidget(UpdaterWindow);
        headerWidget->setObjectName(QStringLiteral("headerWidget"));
        horizontalLayout_2 = new QHBoxLayout(headerWidget);
        horizontalLayout_2->setSpacing(12);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        titleWidget = new QWidget(headerWidget);
        titleWidget->setObjectName(QStringLiteral("titleWidget"));
        verticalLayout_4 = new QVBoxLayout(titleWidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        title = new QLabel(titleWidget);
        title->setObjectName(QStringLiteral("title"));

        verticalLayout_4->addWidget(title);

        versionsWidget = new QWidget(titleWidget);
        versionsWidget->setObjectName(QStringLiteral("versionsWidget"));
        gridLayout = new QGridLayout(versionsWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(8);
        gridLayout->setVerticalSpacing(2);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        availableVersion = new QLabel(versionsWidget);
        availableVersion->setObjectName(QStringLiteral("availableVersion"));
        availableVersion->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(availableVersion, 1, 1, 1, 1);

        availableVersion_Label = new QLabel(versionsWidget);
        availableVersion_Label->setObjectName(QStringLiteral("availableVersion_Label"));
        availableVersion_Label->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(availableVersion_Label, 1, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 2, 1, 1);

        installedVersion = new QLabel(versionsWidget);
        installedVersion->setObjectName(QStringLiteral("installedVersion"));
        installedVersion->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(installedVersion, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        installedVersion_Label = new QLabel(versionsWidget);
        installedVersion_Label->setObjectName(QStringLiteral("installedVersion_Label"));
        installedVersion_Label->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(installedVersion_Label, 0, 0, 1, 1);


        verticalLayout_4->addWidget(versionsWidget);


        horizontalLayout_2->addWidget(titleWidget);


        verticalLayout->addWidget(headerWidget);

        verticalSpacer_2 = new QSpacerItem(20, 19, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer_2);

        changesWidget = new QWidget(UpdaterWindow);
        changesWidget->setObjectName(QStringLiteral("changesWidget"));
        verticalLayout_2 = new QVBoxLayout(changesWidget);
        verticalLayout_2->setSpacing(4);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        whatsNewLabel = new QLabel(changesWidget);
        whatsNewLabel->setObjectName(QStringLiteral("whatsNewLabel"));

        verticalLayout_2->addWidget(whatsNewLabel);

        changelog = new QTextBrowser(changesWidget);
        changelog->setObjectName(QStringLiteral("changelog"));
        changelog->setMinimumSize(QSize(0, 128));
        changelog->setStyleSheet(QStringLiteral(""));
        changelog->setFrameShape(QFrame::NoFrame);
        changelog->setFrameShadow(QFrame::Plain);
        changelog->setOpenExternalLinks(true);

        verticalLayout_2->addWidget(changelog);


        verticalLayout->addWidget(changesWidget);

        verticalSpacer = new QSpacerItem(20, 19, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer);

        progressControls = new QWidget(UpdaterWindow);
        progressControls->setObjectName(QStringLiteral("progressControls"));
        verticalLayout_3 = new QVBoxLayout(progressControls);
        verticalLayout_3->setSpacing(4);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        downloadLabel = new QLabel(progressControls);
        downloadLabel->setObjectName(QStringLiteral("downloadLabel"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        downloadLabel->setFont(font);

        verticalLayout_3->addWidget(downloadLabel);

        verticalSpacer_4 = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        progressBar = new QProgressBar(progressControls);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);
        progressBar->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(progressBar);

        timeLabel = new QLabel(progressControls);
        timeLabel->setObjectName(QStringLiteral("timeLabel"));

        verticalLayout_3->addWidget(timeLabel);

        verticalSpacer_3 = new QSpacerItem(0, 8, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_3->addItem(verticalSpacer_3);


        verticalLayout->addWidget(progressControls);

        frame = new QFrame(UpdaterWindow);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(0, 0));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(5);
        gridLayout_2->setVerticalSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 8);
        checkBox = new QCheckBox(frame);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setMaximumSize(QSize(20, 16777215));

        gridLayout_2->addWidget(checkBox, 0, 0, 1, 1);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setWordWrap(true);

        gridLayout_2->addWidget(label, 0, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 0, 1, 1, 1);


        verticalLayout->addWidget(frame);

        buttonsWidget = new QWidget(UpdaterWindow);
        buttonsWidget->setObjectName(QStringLiteral("buttonsWidget"));
        horizontalLayout = new QHBoxLayout(buttonsWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        closeButton = new QPushButton(buttonsWidget);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setCursor(QCursor(Qt::PointingHandCursor));
        closeButton->setFocusPolicy(Qt::TabFocus);
        closeButton->setStyleSheet(QLatin1String("QPushButton { \n"
"	border: none; \n"
"	padding: 0px; \n"
"}"));
        closeButton->setFlat(true);

        horizontalLayout->addWidget(closeButton);

        horizontalSpacer_4 = new QSpacerItem(25, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        updateButton = new QPushButton(buttonsWidget);
        updateButton->setObjectName(QStringLiteral("updateButton"));
        updateButton->setCursor(QCursor(Qt::PointingHandCursor));
        updateButton->setFocusPolicy(Qt::TabFocus);
        updateButton->setStyleSheet(QLatin1String("QPushButton { \n"
"	border: none; \n"
"	padding: 0px; \n"
"}"));
        updateButton->setFlat(true);

        horizontalLayout->addWidget(updateButton);


        verticalLayout->addWidget(buttonsWidget);


        retranslateUi(UpdaterWindow);

        QMetaObject::connectSlotsByName(UpdaterWindow);
    } // setupUi

    void retranslateUi(QWidget *UpdaterWindow)
    {
        UpdaterWindow->setWindowTitle(QString());
        title->setText(QApplication::translate("UpdaterWindow", "Checking for updates....", Q_NULLPTR));
        versionsWidget->setStyleSheet(QString());
        availableVersion->setText(QApplication::translate("UpdaterWindow", "%1", Q_NULLPTR));
        availableVersion_Label->setText(QApplication::translate("UpdaterWindow", "Latest Version    :", Q_NULLPTR));
        installedVersion->setText(QApplication::translate("UpdaterWindow", "%1", Q_NULLPTR));
        installedVersion_Label->setText(QApplication::translate("UpdaterWindow", "Installed Version: ", Q_NULLPTR));
        whatsNewLabel->setText(QApplication::translate("UpdaterWindow", "What's New:", Q_NULLPTR));
        changelog->setHtml(QApplication::translate("UpdaterWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Arimo Regular'; font-size:14pt;\"><br /></p></body></html>", Q_NULLPTR));
        downloadLabel->setText(QApplication::translate("UpdaterWindow", "Downloading Updates...", Q_NULLPTR));
        timeLabel->setText(QApplication::translate("UpdaterWindow", "%1 minutes remaining...", Q_NULLPTR));
        checkBox->setText(QString());
        label->setText(QApplication::translate("UpdaterWindow", "Don't notify me automatically every time there's a new update.", Q_NULLPTR));
        closeButton->setText(QApplication::translate("UpdaterWindow", "Close", Q_NULLPTR));
        updateButton->setText(QApplication::translate("UpdaterWindow", "Update", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UpdaterWindow: public Ui_UpdaterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATERWINDOW_H
