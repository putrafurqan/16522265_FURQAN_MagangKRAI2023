#include "Stock.hpp"

// default constructor
Stock::Stock(){
    //  : code(""), price(0), quantity(0), company(Company()) {}
    code = "default";
    price = 0;
    quantity = 0;
    company = Company();

}

// parameterized constructor
Stock::Stock(string code, int price, Company company, int quantity){
    // : code(code), price(price), quantity(quantity), company(company) {}
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

int Stock::getPrice() {
    return price;
}

Company Stock::getCompany() {
    return company;
}

int Stock::getQuantity() {
    return quantity;
}

// setter methods
void Stock::setPrice(int price) {
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
    quantity += nStock;
}

void Stock::splitStock(int multiplier) {

    int newQuantity = quantity * multiplier;
    int newPrice = price / multiplier;
    quantity = newQuantity;
    price = newPrice;

}

void Stock::reverseSplitStock(int divisor) {

    int newQuantity = quantity / divisor;
    int newPrice = price * divisor;
    quantity = newQuantity;
    price = newPrice;

}