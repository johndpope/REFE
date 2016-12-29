/********************************************************************************
** Form generated from reading UI file 'FixedFontSelector.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIXEDFONTSELECTOR_H
#define UI_FIXEDFONTSELECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

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
            FixedFontSelector->setObjectName(QStringLiteral("FixedFontSelector"));
        FixedFontSelector->resize(306, 24);
        hboxLayout = new QHBoxLayout(FixedFontSelector);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        fontCombo = new QFontComboBox(FixedFontSelector);
        fontCombo->setObjectName(QStringLiteral("fontCombo"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fontCombo->sizePolicy().hasHeightForWidth());
        fontCombo->setSizePolicy(sizePolicy);
        fontCombo->setEditable(false);
        fontCombo->setFontFilters(QFontComboBox::MonospacedFonts);

        hboxLayout->addWidget(fontCombo);

        fontSize = new QComboBox(FixedFontSelector);
        fontSize->setObjectName(QStringLiteral("fontSize"));

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
