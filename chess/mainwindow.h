#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QTextEdit>
#include <QGraphicsScene>
#include <QGraphicsView>

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
    QPushButton *button;
    QTextEdit *logs;
    QGraphicsScene *board;
    QGraphicsView *viewBoard;
    QGraphicsView *viewSidebar;

};

#endif // MAINWINDOW_H
