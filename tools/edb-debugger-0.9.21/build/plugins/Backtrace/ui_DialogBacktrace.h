/********************************************************************************
** Form generated from reading UI file 'DialogBacktrace.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGBACKTRACE_H
#define UI_DIALOGBACKTRACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

namespace Backtrace {

class Ui_DialogBacktrace
{
public:
    QGridLayout *gridLayout;
    QTableWidget *tableWidgetCallStack;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonReturnTo;
    QPushButton *pushButtonClose;

    void setupUi(QDialog *DialogBacktrace)
    {
        if (DialogBacktrace->objectName().isEmpty())
            DialogBacktrace->setObjectName(QStringLiteral("DialogBacktrace"));
        DialogBacktrace->resize(850, 280);
        gridLayout = new QGridLayout(DialogBacktrace);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableWidgetCallStack = new QTableWidget(DialogBacktrace);
        if (tableWidgetCallStack->columnCount() < 2)
            tableWidgetCallStack->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetCallStack->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetCallStack->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidgetCallStack->setObjectName(QStringLiteral("tableWidgetCallStack"));
        QFont font;
        font.setFamily(QStringLiteral("Monospace"));
        tableWidgetCallStack->setFont(font);
        tableWidgetCallStack->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(tableWidgetCallStack, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonReturnTo = new QPushButton(DialogBacktrace);
        pushButtonReturnTo->setObjectName(QStringLiteral("pushButtonReturnTo"));
        QIcon icon(QIcon::fromTheme(QStringLiteral("edit-undo")));
        pushButtonReturnTo->setIcon(icon);

        horizontalLayout->addWidget(pushButtonReturnTo);

        pushButtonClose = new QPushButton(DialogBacktrace);
        pushButtonClose->setObjectName(QStringLiteral("pushButtonClose"));
        QIcon icon1;
        QString iconThemeName = QStringLiteral("dialog-close");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        pushButtonClose->setIcon(icon1);

        horizontalLayout->addWidget(pushButtonClose);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(DialogBacktrace);

        QMetaObject::connectSlotsByName(DialogBacktrace);
    } // setupUi

    void retranslateUi(QDialog *DialogBacktrace)
    {
        DialogBacktrace->setWindowTitle(QApplication::translate("Backtrace::DialogBacktrace", "Call Stack", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetCallStack->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Backtrace::DialogBacktrace", "Call From", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetCallStack->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Backtrace::DialogBacktrace", "Return To", 0));
        pushButtonReturnTo->setText(QApplication::translate("Backtrace::DialogBacktrace", "&Return To", 0));
        pushButtonClose->setText(QApplication::translate("Backtrace::DialogBacktrace", "&Close", 0));
    } // retranslateUi

};

} // namespace Backtrace

namespace Backtrace {
namespace Ui {
    class DialogBacktrace: public Ui_DialogBacktrace {};
} // namespace Ui
} // namespace Backtrace

#endif // UI_DIALOGBACKTRACE_H
