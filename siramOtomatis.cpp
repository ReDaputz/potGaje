// --- Konfigurasi Pin ---
const int pinSensor = A0;
const int pinRelay  = 12;
// --- Batas Kelembapan (Threshold) ---
const int batasKering = 600;
void setup() {
  // komunikasi serial untuk memantau nilai di Serial Monitor
  Serial.begin(9600);
  // Mengatur pin relay sebagai output
  pinMode(pinRelay, OUTPUT);
  // Mematikan pompa saat alat pertama kali dinyalakan.
  // Kebanyakan modul relay 5V bersifat Active-LOW (LOW = Nyala, HIGH = Mati).
  digitalWrite(pinRelay, HIGH); 
  Serial.println("Sistem Siram Otomatis Siap!");
}

void loop() {
  // Membaca nilai dari sensor kelembapan
  int nilaiKelembapan = analogRead(pinSensor);
  // Menampilkan nilai ke Serial Monitor
  Serial.print("Nilai Kelembapan: ");
  Serial.println(nilaiKelembapan);
  // Logika Otomatisasi
  if (nilaiKelembapan > batasKering) {
    // Jika tanah kering
    Serial.println("Status: Tanah Kering -> POMPA MENYALA");
    digitalWrite(pinRelay, LOW); 
  } else {
    // Jika tanah masih basah
    Serial.println("Status: Tanah Basah -> POMPA MATI");
    digitalWrite(pinRelay, HIGH); // Matikan relay
  }
  delay(2000); 
}
