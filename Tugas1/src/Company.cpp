#include "../header/Company.hpp"

// constructor default
Company::Company() {
    name = "PT Default Abadi";
    address = "Bandung";
    phone = "911";
    email = "default@default.abadi.com";
    sector = "Perdagangan";
    profitable = true;
    

}

// constructor parameter
Company::Company(string name, string address, string phone, string email, string sector, bool profitable){
    this->name = name;
    this->address = address;
    this->phone = phone;
    this->email = email;
    this->sector = sector;
    this->profitable = profitable;
    }

// cconstructor
Company::Company(const Company& other) {
    this->name = other.name;
    this->address = other.address;
    this->phone = other.phone;
    this->email = other.email;
    this->sector = other.sector;
    this->profitable = other.profitable;
}
    

// Destructor
Company::~Company() {}

// Assignment operator
Company& Company::operator=(const Company& other) {
    if (this != &other) {
        name = other.name;
        address = other.address;
        phone = other.phone;
        email = other.email;
        sector = other.sector;
        profitable = other.profitable;
    }
    return *this;
}

// Getters
string Company::getName() {
    return name;
}

string Company::getAddress() {
    return address;
}

string Company::getPhone() {
    return phone;
}

string Company::getEmail() {
    return email;
}

string Company::getSector() {
    return sector;
}

bool Company::isProfitable() {
    return profitable;
}

// Setters
void Company::setAddress(string address) {
    this->address = address;
}

void Company::setPhone(string phone) {
    this->phone = phone;
}

void Company::setEmail(string email) {
    this->email = email;
}

void Company::setSector(string sector) {
    this->sector = sector;
}

void Company::setProfitable(bool profitable) {
    this->profitable = profitable;
}

// Additional method
void Company::printInfo() {
    cout << "Company Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Phone: " << phone << endl;
    cout << "Email: " << email << endl;
    cout << "Sector: " << sector << endl;
    cout << "Profitable: " << profitable << endl;
}
