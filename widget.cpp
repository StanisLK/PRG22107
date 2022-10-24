#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->digito0, &QAbstractButton::clicked, [this] {
        ui->display->setText("0");
    });
    connect(ui->digito1, &QAbstractButton::clicked, [this] {
        //FAZ ALGO;
    });
    connect(ui->digito2, &QAbstractButton::clicked, [this] {
        //FAZ ALGO;
    });
    connect(ui->digito3, &QAbstractButton::clicked, [this] {
        //FAZ ALGO;
    });
    connect(ui->digito4, &QAbstractButton::clicked, [this] {
        //FAZ ALGO;
    });
    connect(ui->digito5, &QAbstractButton::clicked, [this] {
        //FAZ ALGO;
    });
    connect(ui->digito6, &QAbstractButton::clicked, [this] {
        //FAZ ALGO;
    });
    connect(ui->digito7, &QAbstractButton::clicked, [this] {
        //FAZ ALGO;
    });
    connect(ui->digito8, &QAbstractButton::clicked, [this] {
        //FAZ ALGO;
    });
    connect(ui->digito9, &QAbstractButton::clicked, [this] {
        //FAZ ALGO;
    });
    connect(ui->soma, &QAbstractButton::clicked, [this] {
        //FAZ ALGO;
    });
    connect(ui->subtracao, &QAbstractButton::clicked, [this] {
        //FAZ ALGO;
    });
    connect(ui->multiplicacao, &QAbstractButton::clicked, [this] {
        //FAZ ALGO;
    });
    connect(ui->divisao, &QAbstractButton::clicked, [this] {
        //FAZ ALGO;
    });
    connect(ui->divisao, &QAbstractButton::clicked, [this] {
        //FAZ ALGO;
    });
    connect(ui->igual, &QAbstractButton::clicked, [this] {
        //FAZ ALGO;
    });
    connect(ui->deletar, &QAbstractButton::clicked, [this] {
        //FAZ ALGO;
    });
    connect(ui->clear, &QAbstractButton::clicked, [this] {
        //FAZ ALGO;
    });


}

Widget::~Widget()
{
    delete ui;
}
