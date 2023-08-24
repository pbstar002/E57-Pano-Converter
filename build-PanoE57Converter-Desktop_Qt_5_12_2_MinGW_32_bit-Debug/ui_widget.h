/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_3;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_title;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *btn_min;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btn_close;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_9;
    QWidget *widget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QPushButton *btn_upload_panos;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QSpinBox *spinBox_limit;
    QSpacerItem *verticalSpacer_6;
    QPushButton *btn_upload_xml;
    QSpacerItem *verticalSpacer_4;
    QPushButton *btn_start_processing;
    QSpacerItem *verticalSpacer;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QTableWidget *tableWidget;
    QSpacerItem *horizontalSpacer_2;
    QLabel *img_preview;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(900, 598);
        Widget->setMinimumSize(QSize(900, 0));
        Widget->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 33, 38);"));
        gridLayout_4 = new QGridLayout(Widget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 0, -1, -1);
        widget_3 = new QWidget(Widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMinimumSize(QSize(0, 30));
        widget_3->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 33, 38);"));
        gridLayout_3 = new QGridLayout(widget_3);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_8 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);

        label_title = new QLabel(widget_3);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        QFont font;
        font.setPointSize(19);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label_title->setFont(font);
        label_title->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(label_title);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        btn_min = new QPushButton(widget_3);
        btn_min->setObjectName(QString::fromUtf8("btn_min"));
        btn_min->setMinimumSize(QSize(0, 26));

        horizontalLayout_6->addWidget(btn_min);

        horizontalSpacer_5 = new QSpacerItem(0, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        btn_close = new QPushButton(widget_3);
        btn_close->setObjectName(QString::fromUtf8("btn_close"));
        btn_close->setMinimumSize(QSize(0, 26));

        horizontalLayout_6->addWidget(btn_close);

        horizontalSpacer_6 = new QSpacerItem(0, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        gridLayout_3->addLayout(horizontalLayout_6, 0, 0, 1, 1);


        verticalLayout_3->addWidget(widget_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_9 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_9);

        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(300, 0));
        widget->setMaximumSize(QSize(300, 16777215));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(45, 49, 60);"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_5);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(70);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color:rgba(0, 125, 236, 255);"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        btn_upload_panos = new QPushButton(widget);
        btn_upload_panos->setObjectName(QString::fromUtf8("btn_upload_panos"));
        btn_upload_panos->setMinimumSize(QSize(0, 40));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        btn_upload_panos->setFont(font2);
        btn_upload_panos->setStyleSheet(QString::fromUtf8("QPushButton#btn_upload_panos{\n"
"background-color:rgba(2,65,118,255);\n"
"color:rgba(255,255,255,200);\n"
"border-radius:5px;\n"
"}\n"
"QPushButton#btn_upload_panos:pressed{\n"
"background-color:rgba(2,65,118,100);\n"
"\n"
"padding-left:5px;\n"
"padding-top:5px;\n"
"}\n"
"QPushButton#btn_upload_panos{\n"
"background-color:rgba(2,65,118,200);\n"
"}"));

        verticalLayout->addWidget(btn_upload_panos);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial"));
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        spinBox_limit = new QSpinBox(widget);
        spinBox_limit->setObjectName(QString::fromUtf8("spinBox_limit"));
        QFont font4;
        font4.setPointSize(10);
        spinBox_limit->setFont(font4);
        spinBox_limit->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"border:1px solid rgba(0,0,0,0);\n"
"border-bottom-color:rgba(46,82,101,255);\n"
"color:rgb(255,255,255);\n"
"padding-bottom:7px;"));

        horizontalLayout->addWidget(spinBox_limit);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_6);

        btn_upload_xml = new QPushButton(widget);
        btn_upload_xml->setObjectName(QString::fromUtf8("btn_upload_xml"));
        btn_upload_xml->setMinimumSize(QSize(0, 40));
        btn_upload_xml->setFont(font2);
        btn_upload_xml->setStyleSheet(QString::fromUtf8("QPushButton#btn_upload_xml{\n"
"background-color:rgba(2,65,118,255);\n"
"color:rgba(255,255,255,200);\n"
"border-radius:5px;\n"
"}\n"
"QPushButton#btn_upload_xml:pressed{\n"
"background-color:rgba(2,65,118,100);\n"
"\n"
"padding-left:5px;\n"
"padding-top:5px;\n"
"}\n"
"QPushButton#btn_upload_xml{\n"
"background-color:rgba(2,65,118,200);\n"
"}"));

        verticalLayout->addWidget(btn_upload_xml);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        btn_start_processing = new QPushButton(widget);
        btn_start_processing->setObjectName(QString::fromUtf8("btn_start_processing"));
        btn_start_processing->setMinimumSize(QSize(0, 40));
        btn_start_processing->setFont(font2);
        btn_start_processing->setStyleSheet(QString::fromUtf8("QPushButton#btn_start_processing{\n"
"background-color:rgba(2,65,118,255);\n"
"color:rgba(255,255,255,200);\n"
"border-radius:5px;\n"
"}\n"
"QPushButton#btn_start_processing:pressed{\n"
"background-color:rgba(2,65,118,100);\n"
"\n"
"padding-left:5px;\n"
"padding-top:5px;\n"
"}\n"
"QPushButton#btn_start_processing{\n"
"background-color:rgba(2,65,118,200);\n"
"}"));

        verticalLayout->addWidget(btn_start_processing);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        horizontalLayout_3->addWidget(widget);

        widget_2 = new QWidget(Widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(45, 49, 60);"));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        tableWidget = new QTableWidget(widget_2);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setMinimumSize(QSize(300, 0));
        tableWidget->setMaximumSize(QSize(300, 16777215));
        tableWidget->setFont(font4);
        tableWidget->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(tableWidget);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        img_preview = new QLabel(widget_2);
        img_preview->setObjectName(QString::fromUtf8("img_preview"));
        img_preview->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color: rgb(191, 191, 191);"));

        horizontalLayout_2->addWidget(img_preview);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        horizontalLayout_3->addWidget(widget_2);


        verticalLayout_3->addLayout(horizontalLayout_3);


        gridLayout_4->addLayout(verticalLayout_3, 0, 0, 1, 1);


        retranslateUi(Widget);
        QObject::connect(btn_upload_panos, SIGNAL(clicked()), Widget, SLOT(on_uploadPanoBtn_clicked()));
        QObject::connect(btn_close, SIGNAL(clicked()), Widget, SLOT(close()));
        QObject::connect(btn_min, SIGNAL(clicked()), Widget, SLOT(showMinimized()));
        QObject::connect(btn_start_processing, SIGNAL(clicked()), Widget, SLOT(on_startProcessBtn_clicked()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "PanoE57Converter", nullptr));
        label_title->setText(QApplication::translate("Widget", "PanoE57Converter", nullptr));
        btn_min->setText(QString());
        btn_close->setText(QString());
        label_2->setText(QApplication::translate("Widget", "\356\201\226", nullptr));
        btn_upload_panos->setText(QApplication::translate("Widget", "UPLOAD PANO Images", nullptr));
        label->setText(QApplication::translate("Widget", "Limit Number", nullptr));
        btn_upload_xml->setText(QApplication::translate("Widget", "UPLOAD XML FILE", nullptr));
        btn_start_processing->setText(QApplication::translate("Widget", "Start Processing", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Widget", "PANO PATH", nullptr));
        img_preview->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
