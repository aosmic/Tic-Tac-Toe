#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scoreX=0;
    scoreO=0;
    player=true;
    currentPlayer=playerX;
    setLabelText();
    setPlayerStyleSheet();
    button1ClickEnabled=true;
    button2ClickEnabled=true;
    button3ClickEnabled=true;
    button4ClickEnabled=true;
    button5ClickEnabled=true;
    button6ClickEnabled=true;
    button7ClickEnabled=true;
    button8ClickEnabled=true;
    button9ClickEnabled=true;

    showScore();

    connect(ui->actionNew_game,SIGNAL(triggered()), this, SLOT(reset()));
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
        if(currentPlayer=='X')
            scoreO++;
        else
            scoreX++;

        showScore();

        QMessageBox::information(this, "Winner", "GAME OVER");
        reset();
        reset();
    }
}

void MainWindow::showScore()
{
    ui->scoreLabelX->setText(QString::number(scoreX));
    ui->scoreLabelO->setText(QString::number(scoreO));
}

void MainWindow::on_button1_1_released()
{
    if(button1ClickEnabled){
        ui->button1_1->setText("");
        ui->button1_1->setIcon(QIcon(setIcon()));
        player=!player;
        setCurrentPlayer();
        setLabelText();
        setPlayerStyleSheet();
        matrix[0][0]=currentPlayer;
        winner();
    }
    button1ClickEnabled=false;
}


void MainWindow::on_button1_2_released()
{
    if(button2ClickEnabled){
        ui->button1_2->setText("");
        ui->button1_2->setIcon(QIcon(setIcon()));
        player=!player;
        setCurrentPlayer();
        setLabelText();
        setPlayerStyleSheet();
        matrix[0][1]=currentPlayer;
        winner();
    }
    button2ClickEnabled=false;
}

void MainWindow::on_button1_3_released()
{
    if(button3ClickEnabled){
        ui->button1_3->setText("");
        ui->button1_3->setIcon(QIcon(setIcon()));
        player=!player;
        setCurrentPlayer();
        setLabelText();
        setPlayerStyleSheet();
        matrix[0][2]=currentPlayer;
        winner();
    }
    button3ClickEnabled=false;
}

void MainWindow::on_button2_1_released()
{
    if(button4ClickEnabled){
        ui->button2_1->setText("");
        ui->button2_1->setIcon(QIcon(setIcon()));
        player=!player;
        setCurrentPlayer();
        setLabelText();
        setPlayerStyleSheet();
        matrix[1][0]=currentPlayer;
        winner();
    }
    button4ClickEnabled=false;
}

void MainWindow::on_button2_2_released()
{
    if(button5ClickEnabled){
        ui->button2_2->setText("");
        ui->button2_2->setIcon(QIcon(setIcon()));
        player=!player;
        setCurrentPlayer();
        setLabelText();
        setPlayerStyleSheet();
        matrix[1][1]=currentPlayer;
        winner();
    }
    button5ClickEnabled=false;
}

void MainWindow::on_button2_3_released()
{
    if(button6ClickEnabled){
        ui->button2_3->setText("");
        ui->button2_3->setIcon(QIcon(setIcon()));
        player=!player;
        setCurrentPlayer();
        setLabelText();
        setPlayerStyleSheet();
        matrix[1][2]=currentPlayer;
        winner();
    }
    button6ClickEnabled=false;
}

void MainWindow::on_button3_1_released()
{
    if(button7ClickEnabled){
        ui->button3_1->setText("");
        ui->button3_1->setIcon(QIcon(setIcon()));
        player=!player;
        setCurrentPlayer();
        setLabelText();
        setPlayerStyleSheet();
        matrix[2][0]=currentPlayer;
        winner();
    }
    button7ClickEnabled=false;
}

void MainWindow::on_button3_2_released()
{
    if(button8ClickEnabled){
        ui->button3_2->setText("");
        ui->button3_2->setIcon(QIcon(setIcon()));
        player=!player;
        setCurrentPlayer();
        setLabelText();
        setPlayerStyleSheet();
        matrix[2][1]=currentPlayer;
        winner();
    }
    button8ClickEnabled=false;
}

void MainWindow::on_button3_3_released()
{
    if(button9ClickEnabled){
        ui->button3_3->setText("");
        ui->button3_3->setIcon(QIcon(setIcon()));
        player=!player;
        setCurrentPlayer();
        setLabelText();
        setPlayerStyleSheet();
        matrix[2][2]=currentPlayer;
        winner();
    }
    button9ClickEnabled=false;
}

void MainWindow::reset()
{
    button1ClickEnabled=true;
    button2ClickEnabled=true;
    button3ClickEnabled=true;
    button4ClickEnabled=true;
    button5ClickEnabled=true;
    button6ClickEnabled=true;
    button7ClickEnabled=true;
    button8ClickEnabled=true;
    button9ClickEnabled=true;
    ui->button1_1->setText("Shortcut[1]");
    ui->button1_1->setIcon(QIcon(""));
    ui->button1_1->setShortcut(Qt::Key_1);
    ui->button1_2->setText("Shortcut[2]");
    ui->button1_2->setIcon(QIcon(""));
    ui->button1_2->setShortcut(Qt::Key_2);
    ui->button1_3->setText("Shortcut[3]");
    ui->button1_3->setIcon(QIcon(""));
    ui->button1_3->setShortcut(Qt::Key_3);
    ui->button2_1->setText("Shortcut[4]");
    ui->button2_1->setIcon(QIcon(""));
    ui->button2_1->setShortcut(Qt::Key_4);
    ui->button2_2->setText("Shortcut[5]");
    ui->button2_2->setIcon(QIcon(""));
    ui->button2_2->setShortcut(Qt::Key_5);
    ui->button2_3->setText("Shortcut[6]");
    ui->button2_3->setIcon(QIcon(""));
    ui->button2_3->setShortcut(Qt::Key_6);
    ui->button3_1->setText("Shortcut[7]");
    ui->button3_1->setIcon(QIcon(""));
    ui->button3_1->setShortcut(Qt::Key_7);
    ui->button3_2->setText("Shortcut[8]");
    ui->button3_2->setIcon(QIcon(""));
    ui->button3_2->setShortcut(Qt::Key_8);
    ui->button3_3->setText("Shortcut[9]");
    ui->button3_3->setIcon(QIcon(""));
    ui->button3_3->setShortcut(Qt::Key_9);

    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            matrix[i][j]=' ';

}
