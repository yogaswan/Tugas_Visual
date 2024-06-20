#include "formkaryawan.h"
#include "ui_formkaryawan.h"

Formkaryawan::Formkaryawan(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Formkaryawan)
{
    ui->setupUi(this);

    karyawan uji;
    // QSqlQuery sql(koneksi);

    QSqlDatabase koneksi = QSqlDatabase::addDatabase("QODBC");
    koneksi.setDatabaseName("dsn_penggajian");
    koneksi.setUserName("root");
    koneksi.setPassword("");

    if(!koneksi.open()){
        qDebug()<<koneksi.lastError().text();
    }else{
        qDebug()<<"Database Terkoneksi";

    }


}

Formkaryawan::~Formkaryawan()
{
    delete ui;
}

void Formkaryawan::on_pushButton_clicked()
{
    uji.setGolongan(ui->golonganComboBox->currentText());
    uji.setStatusNikah(ui->statusNikahComboBox->currentText());
    uji.setJumlahAnak(ui->jumlahAnakLineEdit->text().toInt());
    uji.setMasaKerja(ui->masaKerjaLineEdit->text().toInt());

    QSqlQuery sql(koneksi);
    sql.prepare("INSERT INTO karyawan (nik,nama,alamat,telp,golongan,status,anak,masa,gaji)"
                "VALUE(:nik,:nama,:alamat,:telp,:golongan,:status,:anak,:masa,:gaji)");
    sql.bindValue(":nik",ui->nIKLineEdit->text());
    sql.bindValue(":nama",ui->namaLineEdit->text());
    sql.bindValue(":alamat",ui->alamatLineEdit->text());
    sql.bindValue(":telp",ui->telpLineEdit->text());
    sql.bindValue(":golongan",ui->golonganComboBox->currentText());
    sql.bindValue(":status",ui->statusNikahComboBox->currentText());
    sql.bindValue(":anak",ui->jumlahAnakLineEdit->text().toInt());
    sql.bindValue(":masa",ui->masaKerjaLineEdit->text().toInt());
    sql.bindValue(":gaji",uji.getGajiTotal());

    // sql.prepare("INSERT INTO karyawan (nik,nama,alamat,telp,golongan,status,anak,masa,gaji)"
    //             "VALUE (?,?,?,?,?,?,?,?,)");
    // sql.addBindValue(ui->nIKLineEdit->text());
    // sql.addBindValue(ui->namaLineEdit->text());
    // sql.addBindValue(ui->alamatLineEdit->text());
    // sql.addBindValue(ui->telpLineEdit->text());
    // sql.addBindValue(ui->golonganComboBox->currentText());
    // sql.addBindValue(ui->statusNikahComboBox->currentText());
    // sql.addBindValue(ui->jumlahAnakLineEdit->text());
    // sql.addBindValue(ui->masaKerjaLineEdit->text());
    // sql.addBindValue(uji.getGajiTotal());



    if (sql.exec()){
        qDebug()<<"Data Berhasil Disimpan";
    }else{
        qDebug()<<sql.lastError().text();
    }

    // if (!sql.exec("INSERT INTO karyawan (nik,nama,alamat,telp,golongan,status,anak,masa,gaji)"
    //             "VALUE('100142','anwar','BJM','085149','I','menikah','1','2','3200000')")){
    //     qDebug()<<sql.lastError().text();
    // }else{
    //     qDebug()<<"Data Berhasil Disimpan";
    // }


}


void Formkaryawan::on_pushButton_2_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("UPDATE karyawan SET nama=:nama, alamat=:alamat, telp=:telp, "
                "golongan=:golongan, status=:status, anak=:anak, masa=:masa, gaji=:gaji where nik=:nik ");
    sql.bindValue(":nik",ui->nIKLineEdit->text());
    sql.bindValue(":nama",ui->namaLineEdit->text());
    sql.bindValue(":alamat",ui->alamatLineEdit->text());
    sql.bindValue(":telp",ui->telpLineEdit->text());
    sql.bindValue(":golongan",ui->golonganComboBox->currentText());
    sql.bindValue(":status",ui->statusNikahComboBox->currentText());
    sql.bindValue(":anak",ui->jumlahAnakLineEdit->text().toInt());
    sql.bindValue(":masa",ui->masaKerjaLineEdit->text().toInt());
    sql.bindValue(":gaji",uji.getGajiTotal());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di ubah";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void Formkaryawan::on_pushButton_3_clicked()
{
    QSqlQuery sql(koneksi);
    sql.prepare("DELETE FROM karyawan WHERE nik=:nik");
    sql.bindValue(":nik",ui->nIKLineEdit->text());

    if (sql.exec()){
        qDebug()<<"Data Berhasil Di Hapus";
    }else{
        qDebug()<<sql.lastError().text();
    }
}


void Formkaryawan::on_pushButton_4_clicked()
{
    QSqlQuery sql(koneksi);
    QSqlRecord cari;
    sql.prepare("SELECT * FROM karyawan WHERE nik=:nik");
    sql.bindValue(":nik",ui->nIKLineEdit->text());

    if (sql.exec()){
        QSqlRecord cari = sql.record();
        // ui->namaLineEdit->setText(cari.value());
        qDebug()<<cari.value(0).toString();
    }else{
        qDebug()<<sql.lastError().text();
    }
}

