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
    enum{playerX, playerO};
    int currentPlayer;
    bool player;
};
#endif // MAINWINDOW_H
