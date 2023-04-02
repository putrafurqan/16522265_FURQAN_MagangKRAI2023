#include "Vehicle.hpp"



Vehicle::Vehicle(){
    this->tahunProduksi = 2000;
}

Vehicle::Vehicle(int tahunProduksi){
    this->tahunProduksi = tahunProduksi;
}
Vehicle::Vehicle(const Vehicle& other){
    this->tahunProduksi = other.tahunProduksi;
}

Vehicle::~Vehicle(){}



Vehicle& Vehicle::operator=(const Vehicle& other){
    *this = Vehicle(other);
    return *this;
}

int Vehicle::getTahunProduksi(){
    return this->tahunProduksi;
}


void Vehicle::setTahunProduksi(int tahunProduksi){
    this->tahunProduksi = tahunProduksi;
}

void Vehicle::printInfo(){
    cout<< "tahun produksi: " << this->tahunProduksi << endl;
}


