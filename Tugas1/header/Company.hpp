#ifndef __COMPANY_HPP__
#define __COMPANY_HPP__
#include <iostream>
using namespace std;

class Company {
    private:
        // attributes
        string name;
        string address;
        string phone;
        string email;
        string sector; // IT, Manufacturing, etc
        bool profitable;
    public:
        // ctor
        Company(); // default ctor
        Company(string name, string address, string phone, string email, string sector, bool profitable);
        // cctor
        Company(const Company& other);   
        // dtor
        ~Company();
        // assignment operator
        Company& operator=(const Company& other);
        // getter
        string getName();
        string getAddress();
        string getPhone();
        string getEmail();
        string getSector();
        bool isProfitable();
        // setter
        void setAddress(string address);
        void setPhone(string phone);
        void setEmail(string email);
        void setSector(string sector);
        void setProfitable(bool profitable);

        // additional method

        /*
            print informasi company
            contoh:
            Company Name: PT. XYZ
            Address: Jl. ABC
            Phone: 081898713233
            Email: xyz@gmail.com
            Sector: IT
            Profitable: 1
        */
        void printInfo();

};



#endif /* __COMPANY_HPP__ */
