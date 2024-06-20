#ifndef FORMKARYAWAN_H
#define FORMKARYAWAN_H

#include <QWidget>
#include <karyawan.h>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlRecord>

namespace Ui {
class Formkaryawan;
}

class Formkaryawan : public QWidget
{
    Q_OBJECT

public:
    explicit Formkaryawan(QWidget *parent = nullptr);
    ~Formkaryawan();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Formkaryawan *ui;
    karyawan uji;
    QSqlDatabase koneksi;
    QSqlQuery sql;
    QSqlRecord cari;
};

#endif // FORMKARYAWAN_H
