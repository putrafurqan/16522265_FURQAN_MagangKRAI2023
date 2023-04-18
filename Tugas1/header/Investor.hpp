#ifndef __INVESTOR_HPP__
#define __INVESTOR_HPP__
#include "Stock.hpp"

class Investor {
    private:
        // attributes
        int id;
        string name;
        int age;
        int balance;
        Stock *stocks; // array of stock asumsi maksimal 10 stock untuk tiap investor 
        int nStock;
        static int nInvestor;

    public:
        // ctor
        Investor(); // default ctor
        Investor(string name, int age, int balance);
        // cctor
        Investor(const Investor& other);   
        // dtor
        ~Investor();
        // assignment operator
        Investor& operator=(const Investor& other);
        // getter
        string getName();
        int getAge();
        int getBalance();
        Stock getStock(int i); // Mengembalikan stock ke-i
        Stock* getStocks(); // Mengembalikan array of stock
        int getNStock();
        // setter
        void setName(string name);
        void setAge(int age);

        // additional method
        /*
            Melakukan pembelian stock. Apabila investor memiliki saldo yang cukup, 
            maka stock akan ditambahkan ke array of stock investor dan saldo akan dikurangi sejumlah harga stock * quantity.
            Apabila investor tidak memiliki saldo yang cukup, maka tidak ada perubahan dan tampilkan
            pesan "Insufficient balance".
            .
        */
        void buyStock(Stock stock);
        /*
            Melakukan penjualan stock. Apabila investor memiliki stock dengan code yang sama dengan stock yang akan dijual, 
            maka stock akan dihapus dari array of stock investor dan saldo akan ditambah sejumlah harga stock * quantity.
            Apabila investor tidak memiliki stock dengan code yang sama dengan stock yang akan dijual, maka tidak ada perubahan dan tampilkan
            pesan "Stock not found".
            .
        */
        void sellStock(string code);

        /*
            Melakukan penambahan saldo. Apabila amount bernilai positif, maka saldo akan ditambah sejumlah amount
            dan tampilkan pesan "successfully topped up <amount> berry".
            Apabila amount bernilai negatif, maka tidak ada perubahan dan tampilkan pesan "Invalid amount".
            .
        */


        void topUpBalance(int amount);

        /*
            Melakukan penarikan saldo. Apabila amount bernilai positif dan amount tidak melebihi saldo, maka saldo akan dikurangi sejumlah amount
            dan tampilkan pesan "successfully withdraw <amount> berry".
            Apabila amount bernilai negatif, maka tidak ada perubahan dan tampilkan pesan "Invalid amount".
            Apabila amount melebihi saldo, maka tidak ada perubahan dan tampilkan pesan "Insufficient balance".
            .
        */

        void withdrawBalance(int amount);

        /*
            Print informasi investor. Format:
            Name: <name>
            Age: <age>
            Balance: <balance>
            Stocks:
            <code stock1> <quantity stock1> 
            <code stock2> <quantity stock2>
            .
            .
            . 
        */

        void printInfo();        
};

#endif /* __INVESTOR_HPP__ */
