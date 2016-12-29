/********************************************************************************
** Form generated from reading UI file 'DialogHWBreakpoints.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGHWBREAKPOINTS_H
#define UI_DIALOGHWBREAKPOINTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>

namespace HardwareBreakpoints {

class Ui_DialogHWBreakpoints
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *txtBP1;
    QComboBox *cmbType1;
    QComboBox *cmbSize1;
    QCheckBox *chkBP1;
    QLabel *label_5;
    QLineEdit *txtBP2;
    QComboBox *cmbType2;
    QComboBox *cmbSize2;
    QCheckBox *chkBP2;
    QLabel *label_6;
    QLineEdit *txtBP3;
    QComboBox *cmbType3;
    QComboBox *cmbSize3;
    QCheckBox *chkBP3;
    QLabel *label_7;
    QLineEdit *txtBP4;
    QComboBox *cmbType4;
    QComboBox *cmbSize4;
    QCheckBox *chkBP4;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogHWBreakpoints)
    {
        if (DialogHWBreakpoints->objectName().isEmpty())
            DialogHWBreakpoints->setObjectName(QStringLiteral("DialogHWBreakpoints"));
        DialogHWBreakpoints->resize(461, 217);
        gridLayout = new QGridLayout(DialogHWBreakpoints);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(DialogHWBreakpoints);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label_4 = new QLabel(DialogHWBreakpoints);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 2, 1, 1);

        label_3 = new QLabel(DialogHWBreakpoints);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 3, 1, 1);

        label = new QLabel(DialogHWBreakpoints);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        txtBP1 = new QLineEdit(DialogHWBreakpoints);
        txtBP1->setObjectName(QStringLiteral("txtBP1"));
        QFont font;
        font.setFamily(QStringLiteral("Monospace"));
        txtBP1->setFont(font);

        gridLayout->addWidget(txtBP1, 1, 1, 1, 1);

        cmbType1 = new QComboBox(DialogHWBreakpoints);
        cmbType1->setObjectName(QStringLiteral("cmbType1"));

        gridLayout->addWidget(cmbType1, 1, 2, 1, 1);

        cmbSize1 = new QComboBox(DialogHWBreakpoints);
        cmbSize1->setObjectName(QStringLiteral("cmbSize1"));
        cmbSize1->setEnabled(false);

        gridLayout->addWidget(cmbSize1, 1, 3, 1, 1);

        chkBP1 = new QCheckBox(DialogHWBreakpoints);
        chkBP1->setObjectName(QStringLiteral("chkBP1"));

        gridLayout->addWidget(chkBP1, 1, 4, 1, 1);

        label_5 = new QLabel(DialogHWBreakpoints);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        txtBP2 = new QLineEdit(DialogHWBreakpoints);
        txtBP2->setObjectName(QStringLiteral("txtBP2"));
        txtBP2->setFont(font);

        gridLayout->addWidget(txtBP2, 2, 1, 1, 1);

        cmbType2 = new QComboBox(DialogHWBreakpoints);
        cmbType2->setObjectName(QStringLiteral("cmbType2"));

        gridLayout->addWidget(cmbType2, 2, 2, 1, 1);

        cmbSize2 = new QComboBox(DialogHWBreakpoints);
        cmbSize2->setObjectName(QStringLiteral("cmbSize2"));
        cmbSize2->setEnabled(false);

        gridLayout->addWidget(cmbSize2, 2, 3, 1, 1);

        chkBP2 = new QCheckBox(DialogHWBreakpoints);
        chkBP2->setObjectName(QStringLiteral("chkBP2"));

        gridLayout->addWidget(chkBP2, 2, 4, 1, 1);

        label_6 = new QLabel(DialogHWBreakpoints);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        txtBP3 = new QLineEdit(DialogHWBreakpoints);
        txtBP3->setObjectName(QStringLiteral("txtBP3"));
        txtBP3->setFont(font);

        gridLayout->addWidget(txtBP3, 3, 1, 1, 1);

        cmbType3 = new QComboBox(DialogHWBreakpoints);
        cmbType3->setObjectName(QStringLiteral("cmbType3"));

        gridLayout->addWidget(cmbType3, 3, 2, 1, 1);

        cmbSize3 = new QComboBox(DialogHWBreakpoints);
        cmbSize3->setObjectName(QStringLiteral("cmbSize3"));
        cmbSize3->setEnabled(false);

        gridLayout->addWidget(cmbSize3, 3, 3, 1, 1);

        chkBP3 = new QCheckBox(DialogHWBreakpoints);
        chkBP3->setObjectName(QStringLiteral("chkBP3"));

        gridLayout->addWidget(chkBP3, 3, 4, 1, 1);

        label_7 = new QLabel(DialogHWBreakpoints);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 4, 0, 1, 1);

        txtBP4 = new QLineEdit(DialogHWBreakpoints);
        txtBP4->setObjectName(QStringLiteral("txtBP4"));
        txtBP4->setFont(font);

        gridLayout->addWidget(txtBP4, 4, 1, 1, 1);

        cmbType4 = new QComboBox(DialogHWBreakpoints);
        cmbType4->setObjectName(QStringLiteral("cmbType4"));

        gridLayout->addWidget(cmbType4, 4, 2, 1, 1);

        cmbSize4 = new QComboBox(DialogHWBreakpoints);
        cmbSize4->setObjectName(QStringLiteral("cmbSize4"));
        cmbSize4->setEnabled(false);

        gridLayout->addWidget(cmbSize4, 4, 3, 1, 1);

        chkBP4 = new QCheckBox(DialogHWBreakpoints);
        chkBP4->setObjectName(QStringLiteral("chkBP4"));

        gridLayout->addWidget(chkBP4, 4, 4, 1, 1);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 5, 1, 1, 1);

        buttonBox = new QDialogButtonBox(DialogHWBreakpoints);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 6, 2, 1, 3);


        retranslateUi(DialogHWBreakpoints);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogHWBreakpoints, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogHWBreakpoints, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogHWBreakpoints);
    } // setupUi

    void retranslateUi(QDialog *DialogHWBreakpoints)
    {
        DialogHWBreakpoints->setWindowTitle(QApplication::translate("HardwareBreakpoints::DialogHWBreakpoints", "Hardware Breakpoints", 0));
        label_2->setText(QApplication::translate("HardwareBreakpoints::DialogHWBreakpoints", "Address", 0));
        label_4->setText(QApplication::translate("HardwareBreakpoints::DialogHWBreakpoints", "Type", 0));
        label_3->setText(QApplication::translate("HardwareBreakpoints::DialogHWBreakpoints", "Size", 0));
        label->setText(QApplication::translate("HardwareBreakpoints::DialogHWBreakpoints", "BP 1", 0));
        cmbType1->clear();
        cmbType1->insertItems(0, QStringList()
         << QApplication::translate("HardwareBreakpoints::DialogHWBreakpoints", "Execute", 0)
         << QApplication::translate("HardwareBreakpoints::DialogHWBreakpoints", "Write", 0)
         << QApplication::translate("HardwareBreakpoints::DialogHWBreakpoints", "Read/Write", 0)
        );
        cmbSize1->clear();
        cmbSize1->insertItems(0, QStringList()
         << QApplication::translate("HardwareBreakpoints::DialogHWBreakpoints", "1 Byte", 0)
         << QApplication::translate("HardwareBreakpoints::DialogHWBreakpoints", "2 Bytes", 0)
         << QApplication::translate("HardwareBreakpoints::DialogHWBreakpoints", "4 Bytes", 0)
         << QApplication::translate("HardwareBreakpoints::DialogHWBreakpoints", "8 Bytes", 0)
        );
        chkBP1->setText(QApplication::translate("HardwareBreakpoints::DialogHWBreakpoints", "Enabled", 0));
        label_5->setText(QApplication::translate("HardwareBreakpoints::DialogHWBreakpoints", "BP 2", 0));
        cmbType2->clear();
        cmbType2->insertItems(0, QStringList()
         << QApplication::translate("HardwareBreakpoints::DialogHWBreakpoints", "Execute", 0)
         << QApplication::translate("HardwareBreakpoints::DialogHWBreakpoints", "Write", 0)
         << QApplication::translate("HardwareBreakpoints::DialogHWBreakpoints", "Read/Write", 0)
        );
        cmbSize2->clear();
        cmbSize2->insertItems(0, QStringList()
         << QApplication::translate("HardwareBreakpoints::DialogHWBreakpoints", "1 Byte", 0)
         << QApplication::translate("HardwareBreakpoints::DialogHWBreakpoints", "2 Bytes", 0)
         << QApplication::translate("HardwareBreakpoints::DialogHWBreakpoints", "4 Bytes", 0)
         << QApplication::translate("HardwareBreakpoints::DialogHWBreakpoints", "8 Bytes", 0)
        );
        chkBP2->setText(QApplication::translate("HardwareBreakpoints::DialogHWBreakpoints", "Enabled", 0));
        label_6->setText(QApplication::translate("HardwareBreakpoints::DialogHWBreakpoints", "BP 3", 0));
        cmbType3->clear();
        cmbType3->insertItems(0, QStringList()
         << QApplication::translate("HardwareBreakpoints::DialogHWBreakpoints", "Execute", 0)
         << QApplication::translate("HardwareBreakpoints::DialogHWBreakpoints", "Write", 0)
         << QApplication::translate("HardwareBreakpoints::DialogHWBreakpoints", "Read/Write", 0)
        );
        cmbSize3->clear();
        cmbSize3->insertItems(0, QStringList()
         << QApplication::translate("HardwareBreakpoints::DialogHWBreakpoints", "1 Byte", 0)
         << QApplication::translate("HardwareBreakpoints::DialogHWBreakpoints", "2 Bytes", 0)
         << QApplication::translate("HardwareBreakpoints::DialogHWBreakpoints", "4 Bytes", 0)
         << QApplication::translate("HardwareBreakpoints::DialogHWBreakpoints", "8 Bytes", 0)
        );
        chkBP3->setText(QApplication::translate("HardwareBreakpoints::DialogHWBreakpoints", "Enabled", 0));
        label_7->setText(QApplication::translate("HardwareBreakpoints::DialogHWBreakpoints", "BP 4", 0));
        cmbType4->clear();
        cmbType4->insertItems(0, QStringList()
         << QApplication::translate("HardwareBreakpoints::DialogHWBreakpoints", "Execute", 0)
         << QApplication::translate("HardwareBreakpoints::DialogHWBreakpoints", "Write", 0)
         << QApplication::translate("HardwareBreakpoints::DialogHWBreakpoints", "Read/Write", 0)
        );
        cmbSize4->clear();
        cmbSize4->insertItems(0, QStringList()
         << QApplication::translate("HardwareBreakpoints::DialogHWBreakpoints", "1 Byte", 0)
         << QApplication::translate("HardwareBreakpoints::DialogHWBreakpoints", "2 Bytes", 0)
         << QApplication::translate("HardwareBreakpoints::DialogHWBreakpoints", "4 Bytes", 0)
         << QApplication::translate("HardwareBreakpoints::DialogHWBreakpoints", "8 Bytes", 0)
        );
        chkBP4->setText(QApplication::translate("HardwareBreakpoints::DialogHWBreakpoints", "Enabled", 0));
    } // retranslateUi

};

} // namespace HardwareBreakpoints

namespace HardwareBreakpoints {
namespace Ui {
    class DialogHWBreakpoints: public Ui_DialogHWBreakpoints {};
} // namespace Ui
} // namespace HardwareBreakpoints

#endif // UI_DIALOGHWBREAKPOINTS_H
