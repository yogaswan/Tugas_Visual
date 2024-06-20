
#include <guipraktikum.h>
#include <karyawan.h>
#include <gaji.h>


#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    guiPraktikum g;
    g.show();

    // QSqlDatabase koneksiDB = QSqlDatabase::addDatabase("QODBC");
    // koneksiDB.setDatabaseName("dsn_penggajian");
    // koneksiDB.setUserName("root");
    // koneksiDB.setPassword("");

    // if (koneksiDB.open()){
    //     qDebug()<<"Database terkoneksi";
    // }else{
    //     qDebug()<<koneksiDB.lastError().text();
    // }

    // if (!koneksiDB.open())
    // {

    //      qDebug()<<koneksiDB.lastError().text();

    //     return false;
    // }

    // QSqlQuery sql(koneksiDB);

    // eror
    // sql.prepare("INSERT INTO karyawan (nik,nama,alamat,telp,golongan,status,anak,masa,gaji)"
    //             "VALUES(:nik,:nama,:alamat,:telp,:golongan,:status,:anak,:masa,:gaji)");
    //     sql.bindValue(":nik","100111");
    //     sql.bindValue(":nama","anwar");
    //     sql.bindValue(":alamat","BJB");
    //     sql.bindValue(":telp","085200");
    //     sql.bindValue(":golongan","II");
    //     sql.bindValue(":status","menikah");
    //     sql.bindValue(":anak","1");
    //     sql.bindValue(":masa","2");
    //     sql.bindValue(":gaji","3200000");

    //     if (sql.exec()){
    //         qDebug()<<"Data Berhasil Disimpan";
    //     }else{
    //         qDebug()<<sql.lastError().text();
    //     }

    // bisa
    // if (!sql.exec("INSERT INTO karyawan (nik,nama,alamat,telp,golongan,status,anak,masa,gaji)"
    //             "VALUE('100141','muhammad','BJM','081933','I','menikah','1','2','3200000')")){
    //     qDebug()<<sql.lastError().text();
    // }else{
    //     qDebug()<<"Data Berhasil Disimpan";
    // }

    // karyawan k;
    // k.setNik("101010");
    // k.setNAMA("FIQRI");
    // k.setALAMAT("Banjarmasin Barat");
    // k.setTELP("081999999");
    // k.setGolongan("I");
    // k.setStatusNikah("Menikah");
    // k.setJumlahAnak(1);
    // k.setMasaKerja(2);
    // qDebug()<<"NIK "<<k.getNIK()<<"\n";
    // qDebug()<<"NAMA "<<k.getNAMA()<<"\n";
    // qDebug()<<"ALAMAT "<<k.getALAMAT()<<"\n";
    // qDebug()<<"TELP "<<k.getTElP()<<"\n";
    // qDebug()<<"GAJI POKOK "<<k.getTunjGolongan()<<"\n";
    // qDebug()<<"TUNJ. STATUS "<<k.getTunjNikah()<<"\n";
    // qDebug()<<"TUNJ. ANAK "<<k.getTunjAnak()<<"\n";
    // qDebug()<<"TUNJ. MASA KERJA "<<k.getTunjMasaKerja()<<"\n";
    // qDebug()<<"GAJI TOTAL "<<k.getGajiTotal()<<"\n";
    return a.exec();
}
