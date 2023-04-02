#include "Car.hpp"
#include "Employee.hpp"

int main(){
    Car c1;
    Vehicle* p1;
    p1 = &c1;
    p1->printInfo();
    // c1.printInfo();
    // cout << "===========" <<endl;
    // Customer c2("alex", 10, 10000, "premium");
    // c2.printInfo();
    // cout<<"===========" << endl;
    // Customer c3(c1);
    // c3.printInfo();
    // cout<< "===========" << endl;
    // c3.berulangTahun();
    // c3.printInfo();

    // c3.shoping(3000);
    // c2.shoping(4000);

    return 0;
}