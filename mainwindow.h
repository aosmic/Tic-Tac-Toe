#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString setIcon();
    void setCurrentPlayer();
    void setLabelText();
    void setPlayerStyleSheet();
    bool checkWinner();
    void winner();

private slots:
    void on_button1_1_released();

    void on_button1_2_released();

    void on_button1_3_released();

    void on_button2_1_released();

    void on_button2_2_released();

    void on_button2_3_released();

    void on_button3_1_released();

    void on_button3_2_released();

    void on_button3_3_released();

private:
    Ui::MainWindow *ui;
    char playerX='X';
    char playerO='O';
    char currentPlayer;
    bool player;
    char matrix[3][3];
};
#endif // MAINWINDOW_H
