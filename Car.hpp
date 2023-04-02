#ifndef __CAR_HPP__
#define __CAR_HPP__
#include "Vehicle.hpp"

class Car: public Vehicle{
    private:
        // attributes
        int banyakKursi;
        int jumlahPenumpang;

    public:
        Car(); 
        Car(string merk, string warna, int jumlahRoda, int jumlahPenumpang, int tahunProduksi, int banyakKursi);

        // assignment operator
        Car& operator=(const Car& other);

        // getter
        int getBanyakKursi();
        int getJumlahPenumpang();

        // setter
        void setBanyakKursi(int banyakKursi);
        void setJumlahPenumpang(int jumlahPenumpang);

        // additional method
        void printInfo();
};


#endif 
