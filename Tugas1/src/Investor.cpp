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
Investor::Investor(const Investor& other) {
    this->nInvestor++;
    this->id = this->nInvestor;
    this->name = other.name;
    this->age = other.age;
    this->balance = other.balance;

    this->stocks = new Stock[10];
    this->nStock = other.nStock;

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

      /*
            Melakukan pembelian stock. Apabila investor memiliki saldo yang cukup, 
            maka stock akan ditambahkan ke array of stock investor dan saldo akan dikurangi sejumlah harga stock * quantity.
            Apabila investor tidak memiliki saldo yang cukup, maka tidak ada perubahan dan tampilkan
            pesan "Insufficient balance".
            .
        */

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

    /*
            Melakukan penjualan stock. Apabila investor memiliki stock dengan code yang sama dengan stock yang akan dijual, 
            maka stock akan dihapus dari array of stock investor dan saldo akan ditambah sejumlah harga stock * quantity.
            Apabila investor tidak memiliki stock dengan code yang sama dengan stock yang akan dijual, maka tidak ada perubahan dan tampilkan
            pesan "Stock not found".
            .
        */

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

        }
    }

    if (!exist) {
        cout << "Stock not found" << endl;
    }
    
}

void Investor::topUpBalance(int amount) {

 /*
            Melakukan penambahan saldo. Apabila amount bernilai positif, maka saldo akan ditambah sejumlah amount
            dan tampilkan pesan "successfully topped up <amount> berry".
            Apabila amount bernilai negatif, maka tidak ada perubahan dan tampilkan pesan "Invalid amount".
            .
        */

    if (amount > 0) {

        balance += amount;
        cout << "successfully topped up " << amount << " berry" << endl;

    } else {
        // Jika top-up amoung negatif
        cout << "Invalid amount" << endl;

    }
}


void Investor::withdrawBalance(int amount) {

    /*
            Melakukan penarikan saldo. Apabila amount bernilai positif dan amount tidak melebihi saldo, maka saldo akan dikurangi sejumlah amount
            dan tampilkan pesan "successfully withdraw <amount> berry".
            Apabila amount bernilai negatif, maka tidak ada perubahan dan tampilkan pesan "Invalid amount".
            Apabila amount melebihi saldo, maka tidak ada perubahan dan tampilkan pesan "Insufficient balance".
            .
        */

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

