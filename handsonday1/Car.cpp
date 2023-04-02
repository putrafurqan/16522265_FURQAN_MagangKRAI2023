#include "Car.hpp"

Car::Car(): Vehicle(){
    this->jumlahPenumpang = 1;
}

Car::Car(int tahunProduksi,int jumlahPenumpang):
    Vehicle(tahunProduksi)
{
    this->jumlahPenumpang = jumlahPenumpang;
}

Car::Car(const Car& other): Vehicle(other){
    this->jumlahPenumpang = other.jumlahPenumpang;
}

Car::~Car(){}

Car& Car::operator=(const Car& other){
    *this = Car(other);
    return *this;
}

int Car::getJumlahPenumpang(){
    return this->jumlahPenumpang;
}


void Car::setJumlahPenumpang(int jumlahPenumpang){
    this->jumlahPenumpang = jumlahPenumpang;
}




void Car::printInfo(){
    Vehicle::printInfo();
    cout<<"Jumlah Penumpang: " << this-> jumlahPenumpang << endl;
    
}
