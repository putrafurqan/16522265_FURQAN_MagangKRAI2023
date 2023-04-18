#include "Investor.hpp"
#include <iostream>
using namespace std;
int main(){
cout << "====== DAFTAR INVESTOR ======" << endl;
Investor investor1("Goldwin", 17, 100000000);
Investor investor2("Aldwin", 21, 500000000);
investor1.printInfo();
investor2.printInfo();
return 0;
}
