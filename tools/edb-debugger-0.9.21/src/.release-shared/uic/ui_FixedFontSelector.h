/********************************************************************************
** Form generated from reading UI file 'FixedFontSelector.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIXEDFONTSELECTOR_H
#define UI_FIXEDFONTSELECTOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFontComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FixedFontSelector
{
public:
    QHBoxLayout *hboxLayout;
    QFontComboBox *fontCombo;
    QComboBox *fontSize;

    void setupUi(QWidget *FixedFontSelector)
    {
        if (FixedFontSelector->objectName().isEmpty())
            FixedFontSelector->setObjectName(QString::fromUtf8("FixedFontSelector"));
        FixedFontSelector->resize(306, 24);
        hboxLayout = new QHBoxLayout(FixedFontSelector);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        fontCombo = new QFontComboBox(FixedFontSelector);
        fontCombo->setObjectName(QString::fromUtf8("fontCombo"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fontCombo->sizePolicy().hasHeightForWidth());
        fontCombo->setSizePolicy(sizePolicy);
        fontCombo->setEditable(false);
        fontCombo->setFontFilters(QFontComboBox::MonospacedFonts);

        hboxLayout->addWidget(fontCombo);

        fontSize = new QComboBox(FixedFontSelector);
        fontSize->setObjectName(QString::fromUtf8("fontSize"));

        hboxLayout->addWidget(fontSize);


        retranslateUi(FixedFontSelector);

        QMetaObject::connectSlotsByName(FixedFontSelector);
    } // setupUi

    void retranslateUi(QWidget *FixedFontSelector)
    {
        Q_UNUSED(FixedFontSelector);
    } // retranslateUi

};

namespace Ui {
    class FixedFontSelector: public Ui_FixedFontSelector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIXEDFONTSELECTOR_H
