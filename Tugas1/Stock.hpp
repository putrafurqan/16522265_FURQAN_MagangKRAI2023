#ifndef __STOCK_HPP__
#define __STOCK_HPP__

#include "Company.hpp"


class Stock {
    private:
        // attributes
        string code;
        int price;
        int quantity;
        Company company;

    public:
        // ctor
        Stock(); // default ctor
        Stock(string name, int price, Company company, int quantity);
        // cctor
        Stock(const Stock& other);   
        // dtor
        ~Stock();
        // assignment operator
        Stock& operator=(const Stock& other);
        // getter
        string getCode();
        int getPrice();
        Company getCompany();
        int getQuantity();
        // setter
        void setPrice(int price);
        void setCompany(Company company);
        void setQuantity(int quantity);
        // additional method

        /*
            print info stock
            contoh output:
            code: AAPL
            price: 100git
            quantity: 100
            company: Apple
        */
        void printInfo();
        void rightIssue(int nStock); // tambah stock dengan harga yang sama sebanyak nstock
        void splitStock(int multiplier); // pecah stock menjadi nstock dengan rasio 1:multiplier dan harga stock menjadi price/multiplier
        void reverseSplitStock(int divisor); // Gabungkan divisor stock menjadi 1 stock dengan harga price*divisor 
                
};

#endif /* __STOCK_HPP__ */
