/********************************************************************************
** Form generated from reading UI file 'BinaryString.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BINARYSTRING_H
#define UI_BINARYSTRING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BinaryStringWidget
{
public:
    QGridLayout *gridLayout;
    QLineEdit *txtHex;
    QLineEdit *txtAscii;
    QLabel *lblUTF16;
    QLabel *lblAscii;
    QLineEdit *txtUTF16;
    QLabel *lblHex;
    QCheckBox *keepSize;

    void setupUi(QWidget *BinaryStringWidget)
    {
        if (BinaryStringWidget->objectName().isEmpty())
            BinaryStringWidget->setObjectName(QStringLiteral("BinaryStringWidget"));
        BinaryStringWidget->resize(344, 105);
        gridLayout = new QGridLayout(BinaryStringWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        txtHex = new QLineEdit(BinaryStringWidget);
        txtHex->setObjectName(QStringLiteral("txtHex"));
        QFont font;
        font.setFamily(QStringLiteral("Monospace"));
        txtHex->setFont(font);

        gridLayout->addWidget(txtHex, 2, 1, 1, 1);

        txtAscii = new QLineEdit(BinaryStringWidget);
        txtAscii->setObjectName(QStringLiteral("txtAscii"));
        txtAscii->setFont(font);

        gridLayout->addWidget(txtAscii, 0, 1, 1, 1);

        lblUTF16 = new QLabel(BinaryStringWidget);
        lblUTF16->setObjectName(QStringLiteral("lblUTF16"));

        gridLayout->addWidget(lblUTF16, 1, 0, 1, 1);

        lblAscii = new QLabel(BinaryStringWidget);
        lblAscii->setObjectName(QStringLiteral("lblAscii"));

        gridLayout->addWidget(lblAscii, 0, 0, 1, 1);

        txtUTF16 = new QLineEdit(BinaryStringWidget);
        txtUTF16->setObjectName(QStringLiteral("txtUTF16"));
        txtUTF16->setFont(font);

        gridLayout->addWidget(txtUTF16, 1, 1, 1, 1);

        lblHex = new QLabel(BinaryStringWidget);
        lblHex->setObjectName(QStringLiteral("lblHex"));

        gridLayout->addWidget(lblHex, 2, 0, 1, 1);

        keepSize = new QCheckBox(BinaryStringWidget);
        keepSize->setObjectName(QStringLiteral("keepSize"));
        keepSize->setChecked(true);

        gridLayout->addWidget(keepSize, 3, 0, 1, 2);

#ifndef QT_NO_SHORTCUT
        lblUTF16->setBuddy(txtUTF16);
        lblAscii->setBuddy(txtAscii);
        lblHex->setBuddy(txtHex);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(txtAscii, txtUTF16);
        QWidget::setTabOrder(txtUTF16, txtHex);

        retranslateUi(BinaryStringWidget);

        QMetaObject::connectSlotsByName(BinaryStringWidget);
    } // setupUi

    void retranslateUi(QWidget *BinaryStringWidget)
    {
        BinaryStringWidget->setWindowTitle(QApplication::translate("BinaryStringWidget", "BinaryString", 0));
        lblUTF16->setText(QApplication::translate("BinaryStringWidget", "UTF-16", 0));
        lblAscii->setText(QApplication::translate("BinaryStringWidget", "ASCII", 0));
        lblHex->setText(QApplication::translate("BinaryStringWidget", "Hex", 0));
        keepSize->setText(QApplication::translate("BinaryStringWidget", "&Keep size", 0));
    } // retranslateUi

};

namespace Ui {
    class BinaryStringWidget: public Ui_BinaryStringWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BINARYSTRING_H
