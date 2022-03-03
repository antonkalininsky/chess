#include "mainwindow.h"
#include <QGroupBox>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QDockWidget>
#include <QSizePolicy>
#include <QWidget>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    // size of window
    resize(800, 660);
    setFixedSize(800, 660);

    // setting board area
    board = new QGraphicsScene();
    viewBoard = new QGraphicsView(board);
    viewBoard->setFixedSize(640, 640);

    // setting info area
    logs = new QTextEdit();
    logs->setReadOnly(true);
    button = new QPushButton("START");
    QVBoxLayout *sideBar = new QVBoxLayout();
    sideBar->addWidget(button);
    sideBar->addWidget(logs);

    // placing
    QHBoxLayout *centralLayout = new QHBoxLayout();
    centralLayout->addWidget(viewBoard);
    centralLayout->insertLayout(-1, sideBar);
    QGroupBox *centralWidget = new QGroupBox();
    centralWidget->setLayout(centralLayout);
    setCentralWidget(centralWidget);
}

MainWindow::~MainWindow() {

}
