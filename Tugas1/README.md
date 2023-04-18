PENJELASAN KODE

folder src terdiri dari tiga file, yaitu :
    - Investor.cpp : implementasi dari Investor.hpp
    - Company.cpp : implementasi dari Company.hpp
    - Stock.cpp : implementasi dari Stock.hpp

Pada tiap file implementasi terdapat fungsi dasar seperti constructor, destructor, getter, dan setter.

Implementasi Investor.hpp pada Investor.cpp : 
    - Terdapat default constructor yang memiliki nilai default untuk pemanggilan Investor()
    
    - Terdapat constructor dengan id yang merupakan incremental dari jumlah investor dan terdapat array of stocks dengan maksimal panjang array adalah 10.

    - Penjelasan additional methods : 
        - buyStock : Melakukan if thd saldo user dgn stock yang akan dibeli. Jika cukup, 
        1. kurangi saldo dengan harga stock dibeli
        2. stock akan ditambah ke array stock milik user. 
        Jika tidak cukup, keluar promt insufficient.

        - sellStock : 
        ada bool exist utk mengecek apakah stock berhasil ditemukan
            a. Berhasil ditemukan, Tambahkan balaance sesuai harga jual, hapus stock dari array user, update bool exist
            b. Tidak ditemukan, keluar prompt stock not found
        - topUpBalance :
        Proses validasi if :
            a. ampung top-up positif, lakukan top up
            b. amount top-up negatif, anulir
        - withdrawBalance :
        Terdapat 3 kasus yang dpat dibagi pada variabel amount dan balance :
            a. amount yg ditarik negatif : anulir
            b. amount yg ditarik > balance : tidak bisa ditarik, insufficient
            c. amount yg ditarik < balance : berhasil ditarik 
        - PrintInfo :
            pada printInfo terdapat perbedaan pada stock. Lakukan for loop tersendiri untuk print semua stocks yang dimilki
        
Implementasi Company.hpp pada Company.cpp : 
    - Terdapat default constructor yang memiliki nilai default untuk pemanggilan Company()

    - Penjelasan additional methods : 
        - Hanya memiliki additional berupa print info

Implementasi Stock.hpp pada Stock.cpp : 
    - Terdapat default constructor yang memiliki nilai default untuk pemanggilan Stock()
    
    - Terdapat perubahan pada tipe data price. Tidak diberikan spesifikasi pasti berapa maksimal dari nilai price. Oleh karena itu dilakukan perubahan tipe data
        INTEGER -> LONG INTEGER

    - Atribut company pada stock akan melakukan inheritance dari class Company

    - Penjelasan additional methods : 
        
        - rightIssue : 
            dilakukan penambahan stock dengan harga yang sama sebanyak nStock, membutuhkan variabel nStock

        - splitStock : 
            - melakukan pecah stock sesuai spesifikasi yang diberikan
            - dipilih tipe data LONG INT untuk newPrice dikarenakan tidak diketahui batasan nilai price

        - reverseSplitStock
            - menggabungkan divisor stock menjadi 1 stock dengan harga price*divisor

        - printInfo
            - Mesikipun atribut company pada stock menggunakan keseluruhan class Company, hanya Company::nama yang diprint pada saat printInfo.

        

