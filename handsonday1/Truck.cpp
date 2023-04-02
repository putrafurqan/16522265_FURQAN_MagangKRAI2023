#include "Truck.hpp"

Truck::Truck(): Vehicle(){
    this->kapasitas = 1000;
}

Truck::Truck(int tahunProduksi,int kapasitas):
    Vehicle(tahunProduksi)
{
    this->kapasitas = kapasitas;
}

Truck::Truck(const Truck& other): Vehicle(other){
    this->kapasitas = other.kapasitas;
}

Truck::~Truck(){}

Truck& Truck::operator=(const Truck& other){
    *this = Truck(other);
    return *this;
}

int Truck::getKapasitas(){
    return this->kapasitas;
}


void Truck::setKapasitas(int kapasitas){
    this->kapasitas = kapasitas;
}




void Truck::printInfo(){
    Vehicle::printInfo();
    cout<<"Kapasitas: " << this-> kapasitas << endl;
    
}
