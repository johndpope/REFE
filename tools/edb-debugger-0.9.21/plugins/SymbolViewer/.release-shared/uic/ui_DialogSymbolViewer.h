/********************************************************************************
** Form generated from reading UI file 'DialogSymbolViewer.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSYMBOLVIEWER_H
#define UI_DIALOGSYMBOLVIEWER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

namespace SymbolViewer {

class Ui_DialogSymbolViewer
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *txtSearch;
    QListView *listView;
    QHBoxLayout *hboxLayout;
    QPushButton *btnClose;
    QPushButton *btnHelp;
    QSpacerItem *spacerItem;
    QPushButton *btnRefresh;

    void setupUi(QDialog *DialogSymbolViewer)
    {
        if (DialogSymbolViewer->objectName().isEmpty())
            DialogSymbolViewer->setObjectName(QString::fromUtf8("DialogSymbolViewer"));
        DialogSymbolViewer->resize(652, 521);
        gridLayout = new QGridLayout(DialogSymbolViewer);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(DialogSymbolViewer);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        label_2 = new QLabel(DialogSymbolViewer);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        txtSearch = new QLineEdit(DialogSymbolViewer);
        txtSearch->setObjectName(QString::fromUtf8("txtSearch"));

        gridLayout->addWidget(txtSearch, 1, 1, 1, 1);

        listView = new QListView(DialogSymbolViewer);
        listView->setObjectName(QString::fromUtf8("listView"));
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        listView->setFont(font);
        listView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listView->setProperty("showDropIndicator", QVariant(false));
        listView->setAlternatingRowColors(true);

        gridLayout->addWidget(listView, 2, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        btnClose = new QPushButton(DialogSymbolViewer);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("dialog-close")));
        btnClose->setIcon(icon);

        hboxLayout->addWidget(btnClose);

        btnHelp = new QPushButton(DialogSymbolViewer);
        btnHelp->setObjectName(QString::fromUtf8("btnHelp"));
        btnHelp->setEnabled(false);
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("help-browser")));
        btnHelp->setIcon(icon1);

        hboxLayout->addWidget(btnHelp);

        spacerItem = new QSpacerItem(361, 29, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        btnRefresh = new QPushButton(DialogSymbolViewer);
        btnRefresh->setObjectName(QString::fromUtf8("btnRefresh"));
        QIcon icon2(QIcon::fromTheme(QString::fromUtf8("view-refresh")));
        btnRefresh->setIcon(icon2);

        hboxLayout->addWidget(btnRefresh);


        gridLayout->addLayout(hboxLayout, 3, 0, 1, 2);


        retranslateUi(DialogSymbolViewer);
        QObject::connect(btnClose, SIGNAL(clicked()), DialogSymbolViewer, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogSymbolViewer);
    } // setupUi

    void retranslateUi(QDialog *DialogSymbolViewer)
    {
        DialogSymbolViewer->setWindowTitle(QApplication::translate("SymbolViewer::DialogSymbolViewer", "Symbols", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SymbolViewer::DialogSymbolViewer", "Loaded Symbols:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SymbolViewer::DialogSymbolViewer", "Filter", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("SymbolViewer::DialogSymbolViewer", "&Close", 0, QApplication::UnicodeUTF8));
        btnHelp->setText(QApplication::translate("SymbolViewer::DialogSymbolViewer", "&Help", 0, QApplication::UnicodeUTF8));
        btnRefresh->setText(QApplication::translate("SymbolViewer::DialogSymbolViewer", "&Refresh", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace SymbolViewer

namespace SymbolViewer {
namespace Ui {
    class DialogSymbolViewer: public Ui_DialogSymbolViewer {};
} // namespace Ui
} // namespace SymbolViewer

#endif // UI_DIALOGSYMBOLVIEWER_H
