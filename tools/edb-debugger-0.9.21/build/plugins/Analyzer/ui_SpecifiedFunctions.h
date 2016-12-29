/********************************************************************************
** Form generated from reading UI file 'SpecifiedFunctions.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPECIFIEDFUNCTIONS_H
#define UI_SPECIFIEDFUNCTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

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
            SpecifiedFunctions->setObjectName(QStringLiteral("SpecifiedFunctions"));
        SpecifiedFunctions->resize(455, 283);
        gridLayout = new QGridLayout(SpecifiedFunctions);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(SpecifiedFunctions);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        label_2 = new QLabel(SpecifiedFunctions);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        filter = new QLineEdit(SpecifiedFunctions);
        filter->setObjectName(QStringLiteral("filter"));

        gridLayout->addWidget(filter, 1, 1, 1, 1);

        function_list = new QListView(SpecifiedFunctions);
        function_list->setObjectName(QStringLiteral("function_list"));
        QFont font;
        font.setFamily(QStringLiteral("Monospace"));
        function_list->setFont(font);
        function_list->setEditTriggers(QAbstractItemView::NoEditTriggers);
        function_list->setProperty("showDropIndicator", QVariant(false));
        function_list->setAlternatingRowColors(true);

        gridLayout->addWidget(function_list, 2, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        close_button = new QPushButton(SpecifiedFunctions);
        close_button->setObjectName(QStringLiteral("close_button"));
        QIcon icon(QIcon::fromTheme(QStringLiteral("dialog-close")));
        close_button->setIcon(icon);

        hboxLayout->addWidget(close_button);

        help_button = new QPushButton(SpecifiedFunctions);
        help_button->setObjectName(QStringLiteral("help_button"));
        help_button->setEnabled(false);
        QIcon icon1(QIcon::fromTheme(QStringLiteral("help-browser")));
        help_button->setIcon(icon1);

        hboxLayout->addWidget(help_button);

        spacerItem = new QSpacerItem(361, 29, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        refresh_button = new QPushButton(SpecifiedFunctions);
        refresh_button->setObjectName(QStringLiteral("refresh_button"));
        QIcon icon2(QIcon::fromTheme(QStringLiteral("view-refresh")));
        refresh_button->setIcon(icon2);

        hboxLayout->addWidget(refresh_button);


        gridLayout->addLayout(hboxLayout, 3, 0, 1, 2);


        retranslateUi(SpecifiedFunctions);
        QObject::connect(close_button, SIGNAL(clicked()), SpecifiedFunctions, SLOT(reject()));

        QMetaObject::connectSlotsByName(SpecifiedFunctions);
    } // setupUi

    void retranslateUi(QDialog *SpecifiedFunctions)
    {
        SpecifiedFunctions->setWindowTitle(QApplication::translate("Analyzer::SpecifiedFunctions", "Specified Functions", 0));
        label->setText(QApplication::translate("Analyzer::SpecifiedFunctions", "Specified Functions", 0));
        label_2->setText(QApplication::translate("Analyzer::SpecifiedFunctions", "Filter", 0));
        close_button->setText(QApplication::translate("Analyzer::SpecifiedFunctions", "&Close", 0));
        help_button->setText(QApplication::translate("Analyzer::SpecifiedFunctions", "&Help", 0));
        refresh_button->setText(QApplication::translate("Analyzer::SpecifiedFunctions", "&Refresh", 0));
    } // retranslateUi

};

} // namespace Analyzer

namespace Analyzer {
namespace Ui {
    class SpecifiedFunctions: public Ui_SpecifiedFunctions {};
} // namespace Ui
} // namespace Analyzer

#endif // UI_SPECIFIEDFUNCTIONS_H
