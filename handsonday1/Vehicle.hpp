#ifndef __VEHICLE_HPP__
#define __VEHICLE_HPP__
#include <iostream>
using namespace std;

class Vehicle {
    protected:
        //attributes
        int tahunProduksi;
        string merk;
        int jumlahRoda;
        string warna;

    public:
        // ctor
        Vehicle(); // default ctor, name = "Fulan", age = 0
        Vehicle(int tahunProduksi);
        // cctor
        Vehicle(const Vehicle& other);   

        // dtor
        ~Vehicle();


        // assignment operator
        Vehicle& operator=(const Vehicle& other);

        // getter
        int getTahunProduksi();

        // setter
       
        void setTahunProduksi(int tahunProduksi);

        // Additional Method
        virtual void printInfo(); // print informasi person : semua attributes

    
};

#endif 
