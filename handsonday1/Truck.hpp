#ifndef __TRUCK_HPP__
#define __TRUCK_HPP__
#include "Vehicle.hpp"

class Truck: public Vehicle{
    private:
        // attributes
        int kapasitas;
        

    public:
        // ctor
        Truck(); // default limitBalance = 0, mempershipStatus="regular"
        Truck(int kapasitas, int tahunProduksi);

        // cctor
        Truck(const Truck& other);

        // dtor
        ~Truck();

        // assignment operator
        Truck& operator=(const Truck& other);

        // getter
        int getKapasitas();
        

        // setter
        void setKapasitas(int kapasitas);
       

        // additional method
        void printInfo();
};


#endif 
