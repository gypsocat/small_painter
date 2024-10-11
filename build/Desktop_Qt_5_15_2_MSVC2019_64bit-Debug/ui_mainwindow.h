/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionLight;
    QAction *actionDark;
    QAction *actionSaveAs;
    QAction *action1_pixel;
    QAction *action2_pixel;
    QAction *action5_pixel;
    QAction *action10_pixel;
    QAction *actionExImage;
    QAction *actionExPDF;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menuTools;
    QMenu *menuTheme;
    QMenu *menuGrid;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *btnText;
    QPushButton *btnLine;
    QPushButton *btnRect;
    QPushButton *btnEllipse;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(779, 573);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/images/New.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/images/Open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/images/Save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionLight = new QAction(MainWindow);
        actionLight->setObjectName(QString::fromUtf8("actionLight"));
        actionDark = new QAction(MainWindow);
        actionDark->setObjectName(QString::fromUtf8("actionDark"));
        actionSaveAs = new QAction(MainWindow);
        actionSaveAs->setObjectName(QString::fromUtf8("actionSaveAs"));
        action1_pixel = new QAction(MainWindow);
        action1_pixel->setObjectName(QString::fromUtf8("action1_pixel"));
        action2_pixel = new QAction(MainWindow);
        action2_pixel->setObjectName(QString::fromUtf8("action2_pixel"));
        action5_pixel = new QAction(MainWindow);
        action5_pixel->setObjectName(QString::fromUtf8("action5_pixel"));
        action10_pixel = new QAction(MainWindow);
        action10_pixel->setObjectName(QString::fromUtf8("action10_pixel"));
        actionExImage = new QAction(MainWindow);
        actionExImage->setObjectName(QString::fromUtf8("actionExImage"));
        actionExPDF = new QAction(MainWindow);
        actionExPDF->setObjectName(QString::fromUtf8("actionExPDF"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 779, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menu);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuTheme = new QMenu(menuTools);
        menuTheme->setObjectName(QString::fromUtf8("menuTheme"));
        menuGrid = new QMenu(menuTools);
        menuGrid->setObjectName(QString::fromUtf8("menuGrid"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        gridLayout_2 = new QGridLayout(dockWidgetContents);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btnText = new QPushButton(dockWidgetContents);
        btnText->setObjectName(QString::fromUtf8("btnText"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnText->sizePolicy().hasHeightForWidth());
        btnText->setSizePolicy(sizePolicy);
        btnText->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(btnText);

        btnLine = new QPushButton(dockWidgetContents);
        btnLine->setObjectName(QString::fromUtf8("btnLine"));
        sizePolicy.setHeightForWidth(btnLine->sizePolicy().hasHeightForWidth());
        btnLine->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(btnLine);

        btnRect = new QPushButton(dockWidgetContents);
        btnRect->setObjectName(QString::fromUtf8("btnRect"));
        sizePolicy.setHeightForWidth(btnRect->sizePolicy().hasHeightForWidth());
        btnRect->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(btnRect);

        btnEllipse = new QPushButton(dockWidgetContents);
        btnEllipse->setObjectName(QString::fromUtf8("btnEllipse"));
        sizePolicy.setHeightForWidth(btnEllipse->sizePolicy().hasHeightForWidth());
        btnEllipse->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(btnEllipse);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(Qt::LeftDockWidgetArea, dockWidget);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menu->addAction(actionNew);
        menu->addSeparator();
        menu->addAction(actionOpen);
        menu->addSeparator();
        menu->addAction(actionSave);
        menu->addSeparator();
        menu->addAction(actionSaveAs);
        menu->addSeparator();
        menu->addAction(menu_2->menuAction());
        menu_2->addAction(actionExImage);
        menu_2->addSeparator();
        menu_2->addAction(actionExPDF);
        menuTools->addAction(menuTheme->menuAction());
        menuTools->addSeparator();
        menuTools->addAction(menuGrid->menuAction());
        menuTheme->addAction(actionLight);
        menuTheme->addAction(actionDark);
        menuGrid->addAction(action1_pixel);
        menuGrid->addSeparator();
        menuGrid->addAction(action2_pixel);
        menuGrid->addSeparator();
        menuGrid->addAction(action5_pixel);
        menuGrid->addSeparator();
        menuGrid->addAction(action10_pixel);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\351\241\265\351\235\242", nullptr));
#if QT_CONFIG(tooltip)
        actionNew->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\344\270\200\345\274\240\345\233\276\347\272\270", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
#if QT_CONFIG(tooltip)
        actionOpen->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\351\241\265\351\235\242", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
#if QT_CONFIG(tooltip)
        actionSave->setToolTip(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\351\241\265\351\235\242", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLight->setText(QCoreApplication::translate("MainWindow", "\346\230\216\344\272\256", nullptr));
        actionDark->setText(QCoreApplication::translate("MainWindow", "\346\232\227\351\273\221", nullptr));
        actionSaveAs->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\344\270\272", nullptr));
        action1_pixel->setText(QCoreApplication::translate("MainWindow", "1 pixel", nullptr));
        action2_pixel->setText(QCoreApplication::translate("MainWindow", "2 pixel", nullptr));
        action5_pixel->setText(QCoreApplication::translate("MainWindow", "5 pixel", nullptr));
        action10_pixel->setText(QCoreApplication::translate("MainWindow", "10 pixel", nullptr));
        actionExImage->setText(QCoreApplication::translate("MainWindow", "\345\257\274\345\207\272\345\233\276\347\211\207", nullptr));
        actionExPDF->setText(QCoreApplication::translate("MainWindow", "\345\257\274\345\207\272PDF", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\346\211\223\345\215\260\351\241\265\351\235\242", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "\351\205\215\347\275\256", nullptr));
        menuTheme->setTitle(QCoreApplication::translate("MainWindow", "\344\270\273\351\242\230", nullptr));
        menuGrid->setTitle(QCoreApplication::translate("MainWindow", "\346\240\205\346\240\274\345\244\247\345\260\217", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
        btnText->setText(QString());
        btnLine->setText(QString());
        btnRect->setText(QString());
        btnEllipse->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
