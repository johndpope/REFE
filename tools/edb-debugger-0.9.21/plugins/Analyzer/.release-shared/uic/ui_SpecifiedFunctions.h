/********************************************************************************
** Form generated from reading UI file 'SpecifiedFunctions.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPECIFIEDFUNCTIONS_H
#define UI_SPECIFIEDFUNCTIONS_H

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

namespace Analyzer {

class Ui_SpecifiedFunctions
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *filter;
    QListView *function_list;
    QHBoxLayout *hboxLayout;
    QPushButton *close_button;
    QPushButton *help_button;
    QSpacerItem *spacerItem;
    QPushButton *refresh_button;

    void setupUi(QDialog *SpecifiedFunctions)
    {
        if (SpecifiedFunctions->objectName().isEmpty())
            SpecifiedFunctions->setObjectName(QString::fromUtf8("SpecifiedFunctions"));
        SpecifiedFunctions->resize(455, 283);
        gridLayout = new QGridLayout(SpecifiedFunctions);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(SpecifiedFunctions);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        label_2 = new QLabel(SpecifiedFunctions);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        filter = new QLineEdit(SpecifiedFunctions);
        filter->setObjectName(QString::fromUtf8("filter"));

        gridLayout->addWidget(filter, 1, 1, 1, 1);

        function_list = new QListView(SpecifiedFunctions);
        function_list->setObjectName(QString::fromUtf8("function_list"));
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        function_list->setFont(font);
        function_list->setEditTriggers(QAbstractItemView::NoEditTriggers);
        function_list->setProperty("showDropIndicator", QVariant(false));
        function_list->setAlternatingRowColors(true);

        gridLayout->addWidget(function_list, 2, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        close_button = new QPushButton(SpecifiedFunctions);
        close_button->setObjectName(QString::fromUtf8("close_button"));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("dialog-close")));
        close_button->setIcon(icon);

        hboxLayout->addWidget(close_button);

        help_button = new QPushButton(SpecifiedFunctions);
        help_button->setObjectName(QString::fromUtf8("help_button"));
        help_button->setEnabled(false);
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("help-browser")));
        help_button->setIcon(icon1);

        hboxLayout->addWidget(help_button);

        spacerItem = new QSpacerItem(361, 29, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        refresh_button = new QPushButton(SpecifiedFunctions);
        refresh_button->setObjectName(QString::fromUtf8("refresh_button"));
        QIcon icon2(QIcon::fromTheme(QString::fromUtf8("view-refresh")));
        refresh_button->setIcon(icon2);

        hboxLayout->addWidget(refresh_button);


        gridLayout->addLayout(hboxLayout, 3, 0, 1, 2);


        retranslateUi(SpecifiedFunctions);
        QObject::connect(close_button, SIGNAL(clicked()), SpecifiedFunctions, SLOT(reject()));

        QMetaObject::connectSlotsByName(SpecifiedFunctions);
    } // setupUi

    void retranslateUi(QDialog *SpecifiedFunctions)
    {
        SpecifiedFunctions->setWindowTitle(QApplication::translate("Analyzer::SpecifiedFunctions", "Specified Functions", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Analyzer::SpecifiedFunctions", "Specified Functions", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Analyzer::SpecifiedFunctions", "Filter", 0, QApplication::UnicodeUTF8));
        close_button->setText(QApplication::translate("Analyzer::SpecifiedFunctions", "&Close", 0, QApplication::UnicodeUTF8));
        help_button->setText(QApplication::translate("Analyzer::SpecifiedFunctions", "&Help", 0, QApplication::UnicodeUTF8));
        refresh_button->setText(QApplication::translate("Analyzer::SpecifiedFunctions", "&Refresh", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace Analyzer

namespace Analyzer {
namespace Ui {
    class SpecifiedFunctions: public Ui_SpecifiedFunctions {};
} // namespace Ui
} // namespace Analyzer

#endif // UI_SPECIFIEDFUNCTIONS_H
