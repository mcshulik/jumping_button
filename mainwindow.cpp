#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->installEventFilter(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QWidget::close();
}


bool MainWindow::eventFilter(QObject *obj, QEvent *event)
{
    int new_height = 0, new_width = 0, width = 0, height = 0;
    QSize QSize_button, QSize_window;
    if (obj == (QObject*)ui->pushButton) {
        if (event->type() == QEvent::Enter)
        do
        {
            //ui->pushButton->setGeometry(rand() % 650, rand() % 519, 151, 61);
            //ui->pushButton->setGeometry(650, 519, 151, 61);
            QSize_button = ui->pushButton->frameSize();
            QSize_window = this->frameSize();
            new_height = ui->pushButton->y();
            new_width =  ui->pushButton->x();
            height = rand() % (QSize_window.height() - QSize_button.height() - 51);
            width = rand() % (QSize_window.width() - QSize_button.width());
            ui->pushButton->setGeometry(width, height, QSize_button.height(), QSize_button.width());
        }while(ui->pushButton->y() - height <= - QSize_button.height() || ui->pushButton->y() - height >= QSize_button.height() ||
               ui->pushButton->x() - width <= - QSize_button.width() || ui->pushButton->x() - width >= QSize_button.width());
    }
    return QWidget::eventFilter(obj, event);
}
