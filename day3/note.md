KOMUNIKASI
    - Protocol : berkomunikasi dengan aturan tertentu
    - ga semua pin I/O bisa digunakan untuk komunikasi
    - Komunikasi memerlukan modul khusus karena membutuhkan kecepatan transfer data yang tertinggi

Interface
    - Serial
        - Lebih sederhana
        - Bit by bit per waktu

Synchoronus Vs Asynchronus
    - Synchronus
        - Bergantung pada waktu dan timer
        - jiak timer inkonsiten, maka data akan rusak
    - Asynchronus
        - data length : besar paket yang akan ditransfer
        - baud rate : kecepatan pengiriman data
        - start/stop bits :
            - Defaultnya adalah mengirim stop

    - Synchronus
        - Delaynya bukan dari kode, delaynya dari gangguan luar
        - Ngirimnya ke kanan
        - Baud rate 9600bit/s
        -- Kalau kita pake delay? apakah kita bisa komunikasi synchronus?
        - ACK :
            - Ngasih info ke transmitter apakah data valid?
            - Gak valid? dibuang

Jenis jenis komunikasi serial :
    - UART
        - Asynchronus
        - Hanya perlu rx dan tx
        - pcb? TX RX Vcc GND
        - Bluetooth itu masuknya ke komunikasi yang mana?
        - Sistem master slave
        - Ngebroadcast, cek siapa yang denger

    - IIC
        - Synchronus
        - Menggunakan pin SDA (data) dan pin SCL (clock)
        - Bisa ngirim dan nerima data dari multiple slave
        - Susah untuk komunikasi yang butuh feedback
        - Sistem master slave
        - Pengiriman butuh header
        - Belom kebayang ttg cara pengiriman, munkin perlu handson
        - Master ga peduli siapa yg nerima kodenya dan apakah kodenya error
        - Terbatas sama address, sulit diakalin
        - Ngebroadcast g peduli siapa yg denger
        - Speed mid, jarak mid

    - SPI
        - Synchronus
        - PIN ; SCK, MISO, MOSI, SS
        - Bisa milih siapa yang jadi receiver dia
        - Bisa ngasih response
        - bikin jalur komunikasi pribadi
        - Speed HI, jarak Hi

    - Bluetooth
        - Synchronus atau Asycnhronus
        - Bluetooth ini fleksibel bisa serial atau paralel
        - Ga semua board bisa
        - ada bluetooth biasa dan BLE
        - Jaraknya cukup jauh tapi terbatas
        - SYNC atau ASYNC?
        - Bluetooth adalah joystick
        - kotak segitiga bulet silang

gangguan : ngalirin listrik ke ground jadinya acuannya berubabh