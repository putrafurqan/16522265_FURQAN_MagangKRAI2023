#include "Vehicle.hpp"

Vehicle::Vehicle(){
    this->merk = "def_merk";
    this->warna = "def_warna";
    this->jumlahRoda = 4;
    this->tahunProduksi = 2000;
    // increment penanda bertambah satu orang
}

Vehicle::Vehicle(string name, int age){
    this->merk = merk;
    this->warna = warna;
    this->jumlahRoda = jumlahRoda;
    this->tahunProduksi = tahunProduksi;
}
Vehicle::Vehicle(const Vehicle& other){
    
    this->merk = other.merk;
    this->warna = other.warna;
    this->jumlahRoda = other.jumlahRoda;
    this->tahunProduksi = other.tahunProduksi;
    
}

Vehicle::~Vehicle(){}

Vehicle& Vehicle::operator=(const Vehicle& other){
    *this = Vehicle(other);
    return *this;
}

int Vehicle::getTahun(){
    return this->tahunProduksi;
}

int Vehicle::getRoda(){
    return this->jumlahRoda;
}
string Vehicle::getMerk(){
    return this->merk;
}
string Vehicle::getWarna(){
    return this->warna;
}

void Vehicle::setWarna(string warna){
    this->warna = warna;
}
void Vehicle::setMerk(string merk){
    this->merk = merk;
}

void Vehicle::setTahun(int tahunProduksi){
    this->tahunProduksi = tahunProduksi;
}
void Vehicle::setRoda(int jumlahRoda){
    this->jumlahRoda = jumlahRoda;
}

void Vehicle::printInfo(){
    cout<< "Merk: " << this->merk <<endl;
    cout<< "Warna: " << this->warna <<endl;
    cout<< "Jumlah Roda: " << this->jumlahRoda <<endl;
    cout<< "Tahun Produksi: " << this->tahunProduksi <<endl;
}

void Vehicle::drive(string nama){
    cout<< this->nama << " lagi dikendarai" <<endl;
}

