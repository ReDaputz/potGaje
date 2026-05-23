# 🌱 Pot Siram Otomatis (Smart Watering Pot)

Proyek Internet of Things (IoT) sederhana untuk menyiram tanaman secara otomatis. Sistem membaca kondisi tanah menggunakan sensor kelembapan kapasitif dan menyalakan pompa air via modul relay ketika tanah terdeteksi kering.

## 🚀 Fitur & Logika Sistem
* **Pembacaan Sensor (Pin A0):** Menggunakan sensor kapasitif yang lebih awet. Karakteristik sensor ini: nilai analog akan naik saat tanah kering, dan turun saat tanah basah.
* **Ambang Batas / Threshold (600):** Sistem diatur dengan nilai referensi 600. Jika sensor membaca nilai di atas 600, tanah dianggap kering.
* **Kontrol Relay Active-LOW (Pin 12):** 
  * Saat tanah kering (> 600): Mikrokontroler mengirim sinyal `LOW` ke pin 12 untuk **menyalakan** pompa.
  * Saat tanah basah (<= 600): Mikrokontroler mengirim sinyal `HIGH` ke pin 12 untuk **mematikan** pompa.
* **Interval Pemantauan:** Sistem membaca ulang kelembapan setiap 2 detik (2000 ms) agar kerja mikrokontroler lebih stabil.

## 🛠️ Komponen yang Dibutuhkan
1. Mikrokontroler (Arduino Uno / Nano)
2. Capacitive Soil Moisture Sensor (Sensor Kelembapan Tanah Kapasitif)
3. Modul Relay 1-Channel 5V (Tipe *Active-LOW*)
4. Pompa Air Mini (Submersible Pump) 3-5V & Selang
5. Kabel Jumper & Adaptor Daya/Baterai

## 🔌 Skema Rangkaian (Wiring)

| Komponen | Pin Mikrokontroler | Keterangan |
| :--- | :--- | :--- |
| **Sensor VCC** | 5V / 3.3V | Daya Sensor |
| **Sensor GND** | GND | Ground |
| **Sensor AOUT**| `A0` | Pin Analog (Input data kelembapan) |
| **Relay VCC** | 5V | Daya Relay |
| **Relay GND** | GND | Ground |
| **Relay IN** | `12` | Pin Digital Out (Kontrol on/off pompa) |

> **Catatan Pompa:** Hubungkan kabel positif (+) dari pompa ke terminal **NO (Normally Open)** pada relay, dan sumber daya positif eksternal ke terminal **COM** relay. 

## 💻 Cara Penggunaan
1. Rangkai seluruh komponen sesuai dengan tabel *wiring* di atas.
2. *Upload* program [(file `.ino`)](siramOtomatis.cpp) ke dalam mikrokontroler menggunakan Arduino IDE.
3. Buka **Serial Monitor** dan atur *baud rate* pada **9600** untuk memantau data kelembapan secara *real-time*.
4. Tancapkan sensor ke tanah. Sistem akan langsung bekerja menyiram secara otomatis berdasarkan batas kelembapan yang sudah diatur.

## 💸 Harga Jual Beli
Kapasitas Kecil (0.5 - 1.5 Liter): Rp10.000 - Rp30.000
Kapasitas Sedang (2 - 3 Liter): Rp35.000 - Rp70.000
Kapasitas Besar (5 - 10 Liter): Rp80.000 - Rp400.000 (tergantung bahan plastik tebal atau seng) 
