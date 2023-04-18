- Install Mbed
    - Apa itu Mbed?
    mbed-tools adalah commandd line interface yang digunakan untuk memporgram mikrokontroller berbasis mbed-os, pada tim URO ITB, mbed-os digunakan pada miktokontroler berbasis STM32. Salah satu kelebihan dari mbed-os adalah kodenya dapat digunakan pada banyak tiper board dengan syarat mendukung mbed-os. Untuk menggunakan mbed dibutuhkan CMake dan ninja sebagai sistem pendukungnya.

Programming pada mbed
    - Melakukan programming pada stm32 nucleo f446re masih cukup analog dengan melakukan programming pada arduino, tetapi tentunya ada penyesuaian pada syntax. masih perlu ditentukan digitalIn dan digitalOut, masih juga memerlukan digitalWrite.

Hal yang dilakukan
    - Blink Led
        Board stm32 yang digunakan memiliki led bawaaan yang dapat dikendalikan. prosedur dalam melakukan led blink mirip dengan cara melakukan led blink pada arduino, hanya saja syntax yang digunakan untuk melakukan digitalwrite dan delay berbeda
    
        Masalah pada led blink yang menggunakan delay adalah program/kode yang terletak di bawah delay akan terhambat untuk waktu delay tersebut. Hal ini dapat menjadi masalah ketika kita butuh unuk menjalankan berbagai fungsi di waktu yang bersamaan dan tanpa hambatan.

    - Alternatif millis di mbed
        Solusi untuk masalah delay pada led blink tersebut adalah dengan melakukan blink setelah interval waktu tertentu. Board nucleo sudah memiliki timer bawaaan yang selalu berjalan setiap waktu sejak dihidupkan. timer ini akan kita manfaatkan untuk mendapatkan interval waktu yang dilewati setelah suatu program. Pada sistem mbed, kode yang dapat digunakan untuk mengakses waktu adalah 'us_ticker_read'

- Jalanin Motor
    - Apa itu pulse
        Pulse adalah perintah yang dikirimkan oleh mikrokontroler untuk menggerakkan motor. Setiap motor memiliki spesifikasi tertentu tentang berapa besar sudut rotasi yang dilakukan ketika menerima satu pulse. 
    - Apa itu PWM?
        PWM adalah sinyal yang dikirmkan kepada motor secara kontinu. PWM adalah gelombang persegi, titik puncak persegi adalah Vmax dan titik tengah (pada 0) adalah Vmin. PWM dapat dikendalikan nilai persen high dan nilai persen low.

    - Apa itu duty cycle
        Duty cycle adalah angka yang menentukan berapa lama atau berapa banyak sinyal HIGH dalam satu gelombang perseegi. Nilai duty cycle umunhya ditentukan dengan persentase. Jika nilai persentase adalah 100%, maka mikrokontroller akan mengirimkan gelombang berisi 100% nilai HIGH. Jika nilai persentase adalah 30%, mikrokontroler akan mengirimkan gelombang berisi 30% HIGH dan 70% low.

- Jalanin Motor dengan PID
    - Kenapa PID penting?
        PID adalah suatu system yang digunakan untuk mencegah ketidak-idelaan rangkain dan komponen dalam melakukan fungsi mekanik. Jika kita memerlukan motor untuk bergerak dengan kecepatan 2rad/s atau ketika kita membutuhkan motor untuk bergerak 90drjt, kita bisa saja melakukan perintah secara langsung motor.write(90drjt) atau motor.speed(2rad/s). Hanya saja, perintah itu akan rawan dijalankan secara tidak sempurna dikarenakan ketidak-idealan pada motor. Faktor faktor tersebut dapat peruba power yang menurun seiring waktu baterai digunakan, hambatan yang timbul seiring waktu motor digunakan seperti karat, dan faktor lainnya. Oleh karena itu kita memerlukan suatu system yang dapat mencapai objective akhir terlepas dari bagaimanapun kondisi ketidak-idealan dari komponen
    - Apa itu PID?
        PID adalah suatu sistem menggerakkan komponen yang mengacu pada kondisi yang ada lalu menimbang seberapa besar usaha yang harus dilakukan untuk mencapai objektif tersebut. Sistem PID dapat menjamin objektif tercapai diakrenakan PID selalu membaca koondisi yang ada lalu melakukan aksi yang diperlukan untuk mencapai objektif tersebut, oleh karena itu objektif pasti tercapai.
    - Jelaskan fungsi fungsi dari KI KP KD
        Untuk menentukan seberapa besar aksi yang harus dilakukan setelah membaca kondisi, PID memiliki tiga konstanta yaitu KI, KP, dan KD. KD akan menentukan besarnya aksi yang dilakukan ketika komponen berada di bawah target, misalkan ketika motor dalam kondisi 0 dan targetnya adalah 90, KD akan memiliki peran penting dalam menentukan bagaimana target 90drjt ini tercapai. Adaa tiga kondisi yang dapat terjadi, di bawah target, sesuai target, atau overshoot. Overshoot adalah kondisi ketika aksi yang dilakukan melebihi target yang diperlukan. Secara grafik, overshoot berati kurva kondisi komponen berada di atas target komponen. Untuk mencegah over-target maka perlu dilakukan aksi dalam bentuk negatif, secara grafik, maka garis perlu untuk turun. Pada proses mencegah over ini KI memiliki peran penting untuk komponen menyesuaikan diri dengan target yang telah terlampaui.

- Apa itu limit Switch
    - Fungsi limit switch
        Limit switch berfungsi untuk menentukan batasan dari suatu aksi. Limit swithc juga dapat menjadi indikator dari ketercapaian suatu aksi.
    - Kasus
        Ketika kita melakukan aksi yang sama secara berulang - ulang. misalkan dengan contoh memutar motor 90drjt dan memutarnya kembali -90drjt, jika dilakukan sekali tentunya tidak akan masalah. Namun jika kita melakukan aksi tersebut berulang - kali secara terus menerus, ketidak-idealan dari motor akan menyebabkan posissi awal dan akhir tidak tetap. hal ini merupakan hal yang wajar mengingat tidak ada komponen yang ideal. Untuk mencegah hal ini terjadi kita perlu memiliki suatu patokan/indikator bahwa motor telah mencapai titik 0drjt atau 90drjt.
    - Limit switch
        Limit switch merupakan suatu saklar mekanik yang dapat ditekan. Ketika saklar ini ditekan, maka posisi dari motor atau komponen ketika menekan saklar tersebut akan dijadikan patokan atau benchmar dari seluruh aksi yang ada. Keuntungan yang didapatkan dari limit switch ini adlah kita akan memiliki acuan yang tetap dan konstan meskipun program dijalankan secara terus menerus. 
