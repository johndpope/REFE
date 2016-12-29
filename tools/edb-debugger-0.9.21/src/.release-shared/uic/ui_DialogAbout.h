/********************************************************************************
** Form generated from reading UI file 'DialogAbout.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGABOUT_H
#define UI_DIALOGABOUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogAbout
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *labelVersion;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QPlainTextEdit *plainTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogAbout)
    {
        if (DialogAbout->objectName().isEmpty())
            DialogAbout->setObjectName(QString::fromUtf8("DialogAbout"));
        DialogAbout->resize(600, 410);
        verticalLayout = new QVBoxLayout(DialogAbout);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(DialogAbout);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/debugger/images/edb100-logo.png")));

        horizontalLayout->addWidget(label);

        labelVersion = new QLabel(DialogAbout);
        labelVersion->setObjectName(QString::fromUtf8("labelVersion"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelVersion->setFont(font);
        labelVersion->setTextFormat(Qt::RichText);
        labelVersion->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        labelVersion->setOpenExternalLinks(true);

        horizontalLayout->addWidget(labelVersion);


        verticalLayout->addLayout(horizontalLayout);

        tabWidget = new QTabWidget(DialogAbout);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setTextFormat(Qt::AutoText);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_2->setWordWrap(true);
        label_2->setOpenExternalLinks(true);
        label_2->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        plainTextEdit = new QPlainTextEdit(tab_2);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setReadOnly(true);
        plainTextEdit->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(plainTextEdit, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(DialogAbout);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DialogAbout);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogAbout, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogAbout, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DialogAbout);
    } // setupUi

    void retranslateUi(QDialog *DialogAbout)
    {
        DialogAbout->setWindowTitle(QApplication::translate("DialogAbout", "About edb", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        labelVersion->setText(QApplication::translate("DialogAbout", "Version: %1\n"
"Compiled: %2\n"
"Git Commit: %3", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DialogAbout", "<p>edb (Evan's Debugger) is designed to be an easy to use, modular, and cross platform debugger.</p>\n"
"<p>More information and updates can be found at <a href=\"https://github.com/eteran/edb-debugger\">https://github.com/eteran/edb-debugger</a></p>\n"
"<p>You can also report bugs an feature requests at <a href=\"https://github.com/eteran/edb-debugger/issues\">https://github.com/eteran/edb-debugger/issues</a></p>\n"
"<p>Written by <a href=\"mailto:evan.teran@gmail.com\">Evan Teran</a>.</p>", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("DialogAbout", "About", 0, QApplication::UnicodeUTF8));
        plainTextEdit->setPlainText(QApplication::translate("DialogAbout", "Original Author\n"
"--------------------\n"
"\n"
"Evan teran <evan.teran@gmail.com>\n"
"\n"
"Contributors\n"
"-----------------\n"
"\n"
"Ruslan Kabatsayev <https://github.com/10110111>\n"
"Fernando Merc\303\252s <http://mentebinaria.com.br>\n"
"Nicoleau Fabien\n"
"\"Northern-Lights\" <https://github.com/Northern-Lights>", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("DialogAbout", "Contributors", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogAbout: public Ui_DialogAbout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGABOUT_H
