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

signals:
    void signalToTable();

private slots:

    void on_RunD_clicked();

    void on_Create_clicked();

    void on_Copy_clicked();

    void on_Mount_clicked();

    void CreateTable();
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
