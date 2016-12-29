/********************************************************************************
** Form generated from reading UI file 'DialogBacktrace.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGBACKTRACE_H
#define UI_DIALOGBACKTRACE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>

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
            DialogBacktrace->setObjectName(QString::fromUtf8("DialogBacktrace"));
        DialogBacktrace->resize(850, 280);
        gridLayout = new QGridLayout(DialogBacktrace);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableWidgetCallStack = new QTableWidget(DialogBacktrace);
        if (tableWidgetCallStack->columnCount() < 2)
            tableWidgetCallStack->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetCallStack->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetCallStack->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidgetCallStack->setObjectName(QString::fromUtf8("tableWidgetCallStack"));
        QFont font;
        font.setFamily(QString::fromUtf8("Monospace"));
        tableWidgetCallStack->setFont(font);
        tableWidgetCallStack->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(tableWidgetCallStack, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonReturnTo = new QPushButton(DialogBacktrace);
        pushButtonReturnTo->setObjectName(QString::fromUtf8("pushButtonReturnTo"));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("edit-undo")));
        pushButtonReturnTo->setIcon(icon);

        horizontalLayout->addWidget(pushButtonReturnTo);

        pushButtonClose = new QPushButton(DialogBacktrace);
        pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
        QIcon icon1;
        QString iconThemeName = QString::fromUtf8("dialog-close");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        pushButtonClose->setIcon(icon1);

        horizontalLayout->addWidget(pushButtonClose);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(DialogBacktrace);

        QMetaObject::connectSlotsByName(DialogBacktrace);
    } // setupUi

    void retranslateUi(QDialog *DialogBacktrace)
    {
        DialogBacktrace->setWindowTitle(QApplication::translate("Backtrace::DialogBacktrace", "Call Stack", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetCallStack->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Backtrace::DialogBacktrace", "Call From", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetCallStack->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Backtrace::DialogBacktrace", "Return To", 0, QApplication::UnicodeUTF8));
        pushButtonReturnTo->setText(QApplication::translate("Backtrace::DialogBacktrace", "&Return To", 0, QApplication::UnicodeUTF8));
        pushButtonClose->setText(QApplication::translate("Backtrace::DialogBacktrace", "&Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace Backtrace

namespace Backtrace {
namespace Ui {
    class DialogBacktrace: public Ui_DialogBacktrace {};
} // namespace Ui
} // namespace Backtrace

#endif // UI_DIALOGBACKTRACE_H
