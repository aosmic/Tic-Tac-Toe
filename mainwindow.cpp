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
    setPlayerStyleSheet();
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

void MainWindow::setPlayerStyleSheet()
{
    if(player) {
        ui->PlayerX->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 0);"));
        ui->PlayerY->setStyleSheet(QString::fromUtf8(""));
    }
    else {
        ui->PlayerX->setStyleSheet(QString::fromUtf8(""));
        ui->PlayerY->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 0);"));
    }
}

bool MainWindow::checkWinner()
{
       if(matrix[0][0]==currentPlayer && matrix[0][1]==currentPlayer && matrix[0][2]==currentPlayer)
           return true;
       else if(matrix[1][0]==currentPlayer && matrix[1][1]==currentPlayer && matrix[1][2]==currentPlayer)
           return true;
       else if(matrix[2][0]==currentPlayer && matrix[2][1]==currentPlayer && matrix[2][2]==currentPlayer)
           return true;
       else if(matrix[0][0]==currentPlayer && matrix[1][0]==currentPlayer && matrix[2][0]==currentPlayer)
           return true;
       else if(matrix[0][1]==currentPlayer && matrix[1][1]==currentPlayer && matrix[2][1]==currentPlayer)
           return true;
       else if(matrix[0][2]==currentPlayer && matrix[1][2]==currentPlayer && matrix[2][2]==currentPlayer)
           return true;
       else if(matrix[0][0]==currentPlayer && matrix[1][1]==currentPlayer && matrix[2][2]==currentPlayer)
           return true;
       else if(matrix[0][2]==currentPlayer && matrix[1][1]==currentPlayer && matrix[2][0]==currentPlayer)
           return true;
       else
           return false;
}

void MainWindow::winner()
{
    if(checkWinner())
    {
        ui->label->setText("THE GAME IS OVER");
        ui->second_label->setText("The winner is ");
    }
}

void MainWindow::on_button1_1_released()
{
    ui->button1_1->setText("");
    ui->button1_1->setIcon(QIcon(setIcon()));
    player=!player;
    setCurrentPlayer();
    setLabelText();
    setPlayerStyleSheet();
    matrix[0][0]=currentPlayer;
    winner();
}


void MainWindow::on_button1_2_released()
{
    ui->button1_2->setText("");
    ui->button1_2->setIcon(QIcon(setIcon()));
    player=!player;
    setCurrentPlayer();
    setLabelText();
    setPlayerStyleSheet();
    matrix[0][1]=currentPlayer;
    winner();
}

void MainWindow::on_button1_3_released()
{
    ui->button1_3->setText("");
    ui->button1_3->setIcon(QIcon(setIcon()));
    player=!player;
    setCurrentPlayer();
    setLabelText();
    setPlayerStyleSheet();
    matrix[0][2]=currentPlayer;
    winner();
}

void MainWindow::on_button2_1_released()
{
    ui->button2_1->setText("");
    ui->button2_1->setIcon(QIcon(setIcon()));
    player=!player;
    setCurrentPlayer();
    setLabelText();
    setPlayerStyleSheet();
    matrix[1][0]=currentPlayer;
    winner();
}

void MainWindow::on_button2_2_released()
{
    ui->button2_2->setText("");
    ui->button2_2->setIcon(QIcon(setIcon()));
    player=!player;
    setCurrentPlayer();
    setLabelText();
    setPlayerStyleSheet();
    matrix[1][1]=currentPlayer;
    winner();
}

void MainWindow::on_button2_3_released()
{
    ui->button2_3->setText("");
    ui->button2_3->setIcon(QIcon(setIcon()));
    player=!player;
    setCurrentPlayer();
    setLabelText();
    setPlayerStyleSheet();
    matrix[1][2]=currentPlayer;
    winner();
}

void MainWindow::on_button3_1_released()
{
    ui->button3_1->setText("");
    ui->button3_1->setIcon(QIcon(setIcon()));
    player=!player;
    setCurrentPlayer();
    setLabelText();
    setPlayerStyleSheet();
    matrix[2][0]=currentPlayer;
    winner();
}

void MainWindow::on_button3_2_released()
{
    ui->button3_2->setText("");
    ui->button3_2->setIcon(QIcon(setIcon()));
    player=!player;
    setCurrentPlayer();
    setLabelText();
    setPlayerStyleSheet();
    matrix[2][1]=currentPlayer;
    winner();
}

void MainWindow::on_button3_3_released()
{
    ui->button3_3->setText("");
    ui->button3_3->setIcon(QIcon(setIcon()));
    player=!player;
    setCurrentPlayer();
    setLabelText();
    setPlayerStyleSheet();
    matrix[2][2]=currentPlayer;
    winner();
}
