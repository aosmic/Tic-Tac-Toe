#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    player=true;
    currentPlayer=playerX;
    setLabelText();
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString MainWindow::setIcon()
{
    QString str;
    if(currentPlayer==playerX)
        str=":/graphics/iks.svg";
    else
        str=":/graphics/oks.svg";
    return str;
}

void MainWindow::setCurrentPlayer()
{
    if(player)
        currentPlayer=playerX;
    else
        currentPlayer=playerO;
}

void MainWindow::setLabelText()
{
    if(player)
        ui->label->setText("Player X on the move");
    else
        ui->label->setText("Player O on the move");
}

void MainWindow::on_button1_1_released()
{
    ui->button1_1->setText("");
    ui->button1_1->setIcon(QIcon(setIcon()));
    player=!player;
    setCurrentPlayer();
    setLabelText();
}


void MainWindow::on_button1_2_released()
{
    ui->button1_2->setText("");
    ui->button1_2->setIcon(QIcon(setIcon()));
    player=!player;
    setCurrentPlayer();
    setLabelText();
}

void MainWindow::on_button1_3_released()
{
    ui->button1_3->setText("");
    ui->button1_3->setIcon(QIcon(setIcon()));
    player=!player;
    setCurrentPlayer();
    setLabelText();
}

void MainWindow::on_button2_1_released()
{
    ui->button2_1->setText("");
    ui->button2_1->setIcon(QIcon(setIcon()));
    player=!player;
    setCurrentPlayer();
    setLabelText();
}

void MainWindow::on_button2_2_released()
{
    ui->button2_2->setText("");
    ui->button2_2->setIcon(QIcon(setIcon()));
    player=!player;
    setCurrentPlayer();
    setLabelText();
}

void MainWindow::on_button2_3_released()
{
    ui->button2_3->setText("");
    ui->button2_3->setIcon(QIcon(setIcon()));
    player=!player;
    setCurrentPlayer();
    setLabelText();
}

void MainWindow::on_button3_1_released()
{
    ui->button3_1->setText("");
    ui->button3_1->setIcon(QIcon(setIcon()));
    player=!player;
    setCurrentPlayer();
    setLabelText();
}

void MainWindow::on_button3_2_released()
{
    ui->button3_2->setText("");
    ui->button3_2->setIcon(QIcon(setIcon()));
    player=!player;
    setCurrentPlayer();
    setLabelText();
}

void MainWindow::on_button3_3_released()
{
    ui->button3_3->setText("");
    ui->button3_3->setIcon(QIcon(setIcon()));
    player=!player;
    setCurrentPlayer();
    setLabelText();
}
