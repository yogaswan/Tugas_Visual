#ifndef KARYAWAN_H
#define KARYAWAN_H
#include <gaji.h>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>

class karyawan : public gaji
{
public:
    karyawan(); // contuctor 1
    karyawan(QString nik, QString golongan,
             QString status, int jumlahAnak, int masaKerja,
             QString nama, QString alamat, QString telp); // contuctor 2 (Overload contuctor)

    void setNik(QString NIK);
    QString getNIK();

    void setNAMA(QString NAMA);
    QString getNAMA();

    void setALAMAT(QString ALAMAT);
    QString getALAMAT();

    void setTELP(QString TELP);
    QString getTElP();

private:
    QString nik, nama, alamat, telp;
    QSqlDatabase koneksiDB;
};

#endif // KARYAWAN_H
