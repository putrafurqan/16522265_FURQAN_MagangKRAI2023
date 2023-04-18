#include "Stock.hpp"
#include "Company.hpp"
#include <iostream>
using namespace std;
int main(){
    cout << "====== DAFTAR COMPANY =======" << endl;
    
    Company company1("PT. Dirgantara Indonesia", "Jalan Pajajaran No. 154",
    "","marketing-ptdi@indonesian-aerospace.com", "Aircraft Manufacturing", true);
    
    Company company3("PT. Ardutekno Indonesia", "Jl. Ganesha",
    "0812822222222","contact@ardutekno.ac.id", "Electrical and Electronics", true);
    
    company1.printInfo();
    
    company3.printInfo();
    cout << "======= DAFTAR STOCK ========" << endl;
    
    Stock stock1("CNC Machine", 4080000000, company1, 50);
    
    Stock stock2("Kayu Balsa", 10000, company1, 5000);
    
    Stock stock3("Arduino UNO", 500000, company3, 500);
    stock1.printInfo();
    stock2.printInfo();
    stock3.printInfo();
    return 0;
}
