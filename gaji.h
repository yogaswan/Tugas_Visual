#ifndef GAJI_H
#define GAJI_H
#include <QString>

class gaji
{
public:
    gaji();

    void setGolongan(QString golongan);
    int getTunjGolongan();

    void setStatusNikah(QString status);
    int getTunjNikah();

    void setJumlahAnak(int jumlah);
    int getTunjAnak();

    void setMasaKerja(int jumlah);
    int getTunjMasaKerja();

    int getGajiTotal();

private:
    QString golongan, status;
    int tunjGolongan, tunjNikah, tunjAnak, tunjMasaKerja, gajiTotal;
    int jumlahAnak, masaKerja;

};

#endif // GAJI_H
