#include "Investor.hpp"
#include <iostream>

int Investor::nInvestor = 0;

// Default constructor
Investor::Investor(){
    nInvestor++;
    id = nInvestor;
    name = "Investor";
    age = 18;
    balance = 0;
    // array masih kosong
    stocks = nullptr;
    nStock = 0;
}

// Parameterized constructor
Investor::Investor(string name, int age, int balance){
    this->nInvestor++;
    this->id = this->nInvestor;
    this->name = name;
    this->age = age;
    this->balance = balance;

    // array masih kosong
    this->stocks = new Stock[10];

    this->nStock = 0;
} 

// Copy constructor
Investor::Investor(const Investor& other) : id(++nInvestor), name(other.name), age(other.age), balance(other.balance), stocks(new Stock[10]), nStock(other.nStock) {
    for (int i = 0; i < nStock; i++) {
        stocks[i] = other.stocks[i];
    }
}

// Destructor
Investor::~Investor() {
    delete[] stocks;
}

// Assignment operator
Investor& Investor::operator=(const Investor& other) {
    if (this != &other) {
        name = other.name;
        age = other.age;
        balance = other.balance;
        nStock = other.nStock;
        delete[] stocks;
        stocks = new Stock[10];
        for (int i = 0; i < nStock; i++) {
            stocks[i] = other.stocks[i];
        }
    }
    return *this;
}

// Getter methods
string Investor::getName() {
    return name;
}

int Investor::getAge() {
    return age;
}

int Investor::getBalance() {
    return balance;
}

Stock Investor::getStock(int i) {
    return stocks[i];
}

Stock* Investor::getStocks() {
    return stocks;
}

int Investor::getNStock() {
    return nStock;
}

// Setter methods
void Investor::setName(string name) {
    this->name = name;
}

void Investor::setAge(int age) {
    this->age = age;
}

// Additional methods
void Investor::buyStock(Stock stock) {
    if (balance >= stock.getPrice() * stock.getQuantity()) {

        balance -= stock.getPrice() * stock.getQuantity();
        for (int i = 0; i < nStock; i++) {

            if (stocks[i].getCode() == stock.getCode()) {

                stocks[i].setQuantity(stocks[i].getQuantity() + stock.getQuantity());

            }

        }
        stocks[nStock++] = stock;

    } else {
        cout << "Insufficient balance" << endl;
    }
}

void Investor::sellStock(string code) {
    bool exist = false;

    for (int i = 0; i < nStock; i++) {

        if (stocks[i].getCode() == code) {
            exist = true;
            balance += stocks[i].getPrice() * stocks[i].getQuantity();

            // Hapus stock yang sudah dijual
            for (int j = i + 1; j < nStock; j++) {
                stocks[j - 1] = stocks[j];
            }

            nStock--;
            return ;

        }
    }

    if (!exist) {
        cout << "Stock not found" << endl;
    }
    
}

void Investor::topUpBalance(int amount) {
    if (amount > 0) {

        balance += amount;
        cout << "successfully topped up " << amount << " berry" << endl;

    } else {
        // Jika top-up amoung negatif
        cout << "Invalid amount" << endl;

    }
}


void Investor::withdrawBalance(int amount) {
    if (amount < 0) {
        cout << "Invalid amount" << endl;
    } else if (amount > balance) {
        cout << "Insufficient balance" << endl;
    } else {
        balance -= amount;
        cout << "successfully withdraw " << amount << " berry" << endl;
    }
}

// Implementation of printInfo function
void Investor::printInfo() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Balance: " << balance << endl;
    cout << "Stocks:" << endl;
    for (int i = 0; i < nStock; i++) {
        cout << stocks[i].getCode() << " " << stocks[i].getQuantity() << endl;
    }
}

