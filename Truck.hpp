#include "Truck.hpp"

Truck::Truck() : Vehicle() {
    this->kapasitas = 100;
}

Truck::Truck(string merk, string warna, int jumlahRoda, int tahunProduksi, int kapasitas) : Vehicle(merk, warna, jumlahRoda, tahunProduksi) {
    this->kapasitas = kapasitas;
}

Truck& Truck::operator=(const Truck& other) {
    
    Vehicle::operator=(other);
    this->kapasitas = other.kapasitas;
    
    return *this;
}

int Truck::getKapasitas() {
    return this->kapasitas;
}

void Truck::setKapasitas(int kapasitas) {
    this->kapasitas = kapasitas;
}

void Truck::beratBarang(int beratBarang) {
    if (beratBarang > this->kapasitas) {
        cout << "Kapasitas truk tidak cukup" << endl;
    } else {
        cout << beratBarang << " telah dimuat pada truck" << endl;
    }
}

void Truck::printInfo() {
    cout << "Kapasitas: " << this->kapasitas << endl;
}

void Truck::drive(string nama) {
    cout << this-> nama << " sedang dikemudikan" << endl;
}
