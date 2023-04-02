#ifndef VEHICLE_HPP
#define VEHICLE_HPP

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

    // assignment operator
    Vehicle& operator=(const Vehicle& other);

    int getTahun();
    int getRoda();
    string getMerk();
    string getWarna();

    // setter
    void setMerk(string merk);
    void setTahun(int tahunProduksi);
    void setWarna(string warna);
    void setRoda(int jumlahRoda);

    // Additional Method
    virtual void printInfo(); // print informasi Vehicle : semua attributes
    virtual void drive(string nama); // print informasi Vehicle : semua attributes

};

#endif