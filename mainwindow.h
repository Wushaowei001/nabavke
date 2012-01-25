#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btnZahtevi_clicked();
    void inicijalizacija(QString ime, int id);

    void on_btnOdobravanje_clicked();

    void on_btnSlanjeZahteva_clicked();

    void on_btnUnosDiC_clicked();

    void on_btnPretrazivanje_clicked();

    void on_btnRaspodeli_clicked();

    void on_btnIzvestaj_clicked();

    void on_btnTransport_clicked();

    void on_btnDobavljaci_clicked();

private:
    Ui::MainWindow *ui;
    int _userId;
    QString _tipNaloga;
};

#endif // MAINWINDOW_H
