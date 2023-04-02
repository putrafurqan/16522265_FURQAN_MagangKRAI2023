#include "Car.hpp"

Car::Car() : Vehicle() {
    this->banyakKursi = 1;
    this->jumlahPenumpang = 0;
}

Car::Car(string merk, string warna, int jumlahRoda, int jumlahPenumpang, int tahunProduksi, int banyakKursi) :
    Vehicle(merk, warna, jumlahRoda, tahunProduksi)
{
    this->banyakKursi = banyakKursi;
    this->jumlahPenumpang = jumlahPenumpang;
}

Car::Car(const Car& other) : Vehicle(other) {
    this->banyakKursi = other.banyakKursi;
    this->jumlahPenumpang = other.jumlahPenumpang;
}

Car::~Car() {}

Car& Car::operator=(const Car& other) {
    *this = Car(other);
    return *this;
}

int Car::getBanyakKursi() {
    return this->banyakKursi;
}

void Car::setBanyakKursi(int banyakKursi) {
    this->banyakKursi = banyakKursi;
}

void Car::setJumlahPenumpang(int jumlahPenumpang) {
    this->jumlahPenumpang = jumlahPenumpang;
}

void Car::printInfo() {
    Vehicle::printInfo();
    cout << "Banyak Kursi: " << this->banyakKursi << endl;
    cout << "Jumlah Penumpang: " << this->jumlahPenumpang << endl;
}
