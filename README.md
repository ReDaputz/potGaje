# 🌱 Pot Siram Otomatis (Smart Watering Pot)

Proyek Internet of Things (IoT) untuk menyiram tanaman secara otomatis berdasarkan tingkat kelembapan tanah. Sistem ini membaca kondisi tanah secara *real-time* dan menyalakan pompa air hanya ketika tanah benar-benar kering.

## 🚀 Fitur Utama
* **Penyiraman Otomatis:** Pompa menyala otomatis saat tanah kering.
* **Monitoring Kelembapan:** Membaca persentase kelembapan tanah secara *real-time*.
* **Hemat Energi & Air:** Mencegah *overwatering* (penyiraman berlebih).

## 🛠️ Komponen yang Dibutuhkan
1. Mikrokontroler (Arduino Uno / NodeMCU ESP8266 / ESP32)
2. Soil Moisture Sensor (Sensor Kelembapan Tanah)
3. Modul Relay 1-Channel (5V)
4. Pompa Air Mini (Submersible Pump) 3-5V
5. Selang Air Kecil
6. Kabel Jumper (Male-to-Female / Male-to-Male)
7. Adaptor Daya / Baterai

## 🔌 Skema Rangkaian (Wiring)

| Komponen | Pin Mikrokontroler | Keterangan |
| :--- | :--- | :--- |
| **Soil Moisture VCC** | 3.3V / 5V | Sesuai spesifikasi sensor |
| **Soil Moisture GND**| GND | Ground |
| **Soil Moisture A0** | A0 | Pin Analog |
| **Relay VCC** | 5V | Daya relay |
| **Relay GND** | GND | Ground |
| **Relay IN** | D1 / Pin 5 | Pin Digital Out |

*Catatan: Pompa air dihubungkan ke sumber daya eksternal melalui terminal NO (Normally Open) dan COM pada modul Relay.*

## ⚙️ Cara Instalasi
1. Rangkai komponen sesuai dengan skema *wiring* di atas.
2. Hubungkan mikrokontroler ke komputer menggunakan kabel USB.
3. Buka Arduino IDE.
4. *Upload* kode program (`main.ino`) ke mikrokontroler.
5. Tancapkan sensor kelembapan ke dalam tanah pot.
6. Masukkan pompa ke dalam wadah penampungan air.

## 💻 Penggunaan
Setelah sistem dinyalakan, buka **Serial Monitor** di Arduino IDE (baud rate: 9600) untuk melihat nilai kelembapan. 
* Jika nilai di bawah ambang batas (misal: `< 40%`), relay akan aktif dan pompa menyala.
* Jika nilai sudah ideal, pompa akan mati otomatis.
