#ifndef __CAR_HPP__
#define __CAR_HPP__
#include "Vehicle.hpp"

class Car: public Vehicle{
    private:
        // attributes
        int jumlahPenumpang;
        

    public:
        // ctor
        Car(); // default limitBalance = 0, mempershipStatus="regular"
        Car(int jumlahPenumpang, int tahunProduksi);

        // cctor
        Car(const Car& other);

        // dtor
        ~Car();

        // assignment operator
        Car& operator=(const Car& other);

        // getter
        int getJumlahPenumpang();
        

        // setter
        void setJumlahPenumpang(int jumlahPenumpang);
       

        // additional method
        void printInfo();
};


#endif 
