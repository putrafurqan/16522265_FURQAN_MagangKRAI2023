#include "../header/Stock.hpp"

// default constructor
Stock::Stock(){
    code = "default";
    price = 0;
    quantity = 0;
    company = Company();

}

// constructor parameter
Stock::Stock(string code, long int price, Company company, int quantity){
    this->code = code;
    this->price = price;
    this->quantity = quantity;
    this->company = company;
}
    

// copy constructor
Stock::Stock(const Stock& other) {
    this->code = other.code;
    this->price = other.price;
    this->quantity = other.quantity;
    this->company = other.company;
}
    
    

// destructor
Stock::~Stock() {}

// assignment operator
Stock& Stock::operator=(const Stock& other) {

    if (this != &other) {

        code = other.code;
        price = other.price;
        quantity = other.quantity;
        company = other.company;

    }

    return *this;
}

// getter methods
string Stock::getCode() {
    return code;
}

long int Stock::getPrice() {
    return price;
}

Company Stock::getCompany() {
    return company;
}

int Stock::getQuantity() {
    return quantity;
}

// setter methods
void Stock::setPrice(long int price) {
    this->price = price;
}

void Stock::setCompany(Company company) {
    this->company = company;
}

void Stock::setQuantity(int quantity) {
    this->quantity = quantity;
}

// additional methods
void Stock::printInfo() {
    cout << "code: " << code << endl;
    cout << "price: " << price << endl;
    cout << "quantity: " << quantity << endl;
    cout << "company: " << company.getName() << endl;
}

void Stock::rightIssue(int nStock) {
    // tambah stock dengan harga yang sama sebanyak nstock
    quantity += nStock;
}

void Stock::splitStock(int multiplier) {
    // pecah stock menjadi nstock dengan rasio 1:multiplier dan harga stock menjadi price/multiplier
    int newQuantity = quantity * multiplier;
    long int newPrice = price / multiplier;
    quantity = newQuantity;
    price = newPrice;

}

void Stock::reverseSplitStock(int divisor) {
    // Gabungkan divisor stock menjadi 1 stock dengan harga price*divisor 
    int newQuantity = quantity / divisor;
    long int newPrice = price * divisor;
    quantity = newQuantity;
    price = newPrice;

}