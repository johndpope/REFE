/********************************************************************************
** Form generated from reading UI file 'DialogReferences.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGREFERENCES_H
#define UI_DIALOGREFERENCES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

namespace References {

class Ui_DialogReferences
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *label;
    QLineEdit *txtAddress;
    QLabel *label_2;
    QListWidget *listWidget;
    QCheckBox *chkSkipNoAccess;
    QHBoxLayout *hboxLayout;
    QPushButton *btnClose;
    QPushButton *btnHelp;
    QSpacerItem *spacerItem;
    QPushButton *btnFind;
    QProgressBar *progressBar;

    void setupUi(QDialog *DialogReferences)
    {
        if (DialogReferences->objectName().isEmpty())
            DialogReferences->setObjectName(QStringLiteral("DialogReferences"));
        DialogReferences->resize(281, 305);
        vboxLayout = new QVBoxLayout(DialogReferences);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        label = new QLabel(DialogReferences);
        label->setObjectName(QStringLiteral("label"));

        vboxLayout->addWidget(label);

        txtAddress = new QLineEdit(DialogReferences);
        txtAddress->setObjectName(QStringLiteral("txtAddress"));

        vboxLayout->addWidget(txtAddress);

        label_2 = new QLabel(DialogReferences);
        label_2->setObjectName(QStringLiteral("label_2"));

        vboxLayout->addWidget(label_2);

        listWidget = new QListWidget(DialogReferences);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        QFont font;
        font.setFamily(QStringLiteral("Monospace"));
        listWidget->setFont(font);
        listWidget->setAlternatingRowColors(true);

        vboxLayout->addWidget(listWidget);

        chkSkipNoAccess = new QCheckBox(DialogReferences);
        chkSkipNoAccess->setObjectName(QStringLiteral("chkSkipNoAccess"));

        vboxLayout->addWidget(chkSkipNoAccess);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        btnClose = new QPushButton(DialogReferences);
        btnClose->setObjectName(QStringLiteral("btnClose"));
        QIcon icon(QIcon::fromTheme(QStringLiteral("dialog-close")));
        btnClose->setIcon(icon);

        hboxLayout->addWidget(btnClose);

        btnHelp = new QPushButton(DialogReferences);
        btnHelp->setObjectName(QStringLiteral("btnHelp"));
        btnHelp->setEnabled(false);
        QIcon icon1(QIcon::fromTheme(QStringLiteral("help-browser")));
        btnHelp->setIcon(icon1);

        hboxLayout->addWidget(btnHelp);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        btnFind = new QPushButton(DialogReferences);
        btnFind->setObjectName(QStringLiteral("btnFind"));
        QIcon icon2(QIcon::fromTheme(QStringLiteral("edit-find")));
        btnFind->setIcon(icon2);

        hboxLayout->addWidget(btnFind);


        vboxLayout->addLayout(hboxLayout);

        progressBar = new QProgressBar(DialogReferences);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(0);
        progressBar->setOrientation(Qt::Horizontal);

        vboxLayout->addWidget(progressBar);

        QWidget::setTabOrder(txtAddress, listWidget);
        QWidget::setTabOrder(listWidget, chkSkipNoAccess);
        QWidget::setTabOrder(chkSkipNoAccess, btnClose);
        QWidget::setTabOrder(btnClose, btnHelp);
        QWidget::setTabOrder(btnHelp, btnFind);

        retranslateUi(DialogReferences);
        QObject::connect(btnClose, SIGNAL(clicked()), DialogReferences, SLOT(reject()));

        btnFind->setDefault(true);


        QMetaObject::connectSlotsByName(DialogReferences);
    } // setupUi

    void retranslateUi(QDialog *DialogReferences)
    {
        DialogReferences->setWindowTitle(QApplication::translate("References::DialogReferences", "References Search", 0));
        label->setText(QApplication::translate("References::DialogReferences", "Find References To This Address:", 0));
        label_2->setText(QApplication::translate("References::DialogReferences", "Results:", 0));
        chkSkipNoAccess->setText(QApplication::translate("References::DialogReferences", "Skip Regions With No Access Rights", 0));
        btnClose->setText(QApplication::translate("References::DialogReferences", "&Close", 0));
        btnHelp->setText(QApplication::translate("References::DialogReferences", "&Help", 0));
        btnFind->setText(QApplication::translate("References::DialogReferences", "&Find", 0));
    } // retranslateUi

};

} // namespace References

namespace References {
namespace Ui {
    class DialogReferences: public Ui_DialogReferences {};
} // namespace Ui
} // namespace References

#endif // UI_DIALOGREFERENCES_H
