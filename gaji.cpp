#include "gaji.h"

gaji::gaji() {}

void gaji::setGolongan(QString golongan)
{
    this->golongan=golongan;
}

int gaji::getTunjGolongan()
{
    if (this->golongan=="I"){
        this->tunjGolongan=3000000;
    }else if (this->golongan=="II"){
        this->tunjGolongan=3500000;
    }else if (this->golongan=="III"){
        this->tunjGolongan=4000000;
    }else{
        this->tunjGolongan=4500000;
    }

    return this->tunjGolongan;
}

void gaji::setStatusNikah(QString status)
{
    this->status=status;
}

int gaji::getTunjNikah()
{
    if (this->status=="Menikah"){
        this->tunjNikah=500000;
    }else {
        this->tunjNikah=150000;
    }

    return this->tunjNikah;
}

void gaji::setJumlahAnak(int jumlah)
{
    this->jumlahAnak=jumlah;
}

int gaji::getTunjAnak()
{
    if (this->jumlahAnak==0){
        this->tunjAnak=0;
    }else if (this->jumlahAnak>=1 && this->jumlahAnak<=2){
        this->tunjAnak=200000;
    }else if (this->jumlahAnak>=3 && this->jumlahAnak<=4){
        this->tunjAnak=400000;
    }else {
        this->tunjAnak=500000;
    }

    return this->tunjAnak;
}

void gaji::setMasaKerja(int jumlah)
{
    this->masaKerja=jumlah;
}

int gaji::getTunjMasaKerja()
{
    if (this->masaKerja>=0 && this->masaKerja<=2){
        this->tunjMasaKerja=350000;
    }else if (this->masaKerja>=3 && this->masaKerja<=4){
        this->tunjMasaKerja=550000;
    }else {
        this->tunjMasaKerja=750000;
    }

    return this->tunjMasaKerja;
}

int gaji::getGajiTotal()
{
    return getTunjGolongan()+getTunjNikah()+getTunjAnak()+getTunjMasaKerja();
}
