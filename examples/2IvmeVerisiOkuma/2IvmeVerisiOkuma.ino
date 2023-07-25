/*
 *   2 6-Eksen kartı ile İvmeölçerden(Acc) Verileri Okuma örneği,
 *
 *   Bu örnekte temel konfigürasyon ayarları yapılmaktadır.
 *   İki sensörden gelen İvmeölçerden(Acc) X,Y,Z seri port ekranına yazdırmaktadır.
 *
 *   Bu algılayıcı I2C haberleşme protokolü ile çalışmaktadır.
 *
 *   Bu örnek Deneyap 6-Eksen Ataletsel Ölçüm Birimi ve Deneyap 9-Eksen Ataletsel Ölçüm Birimi için oluşturulmuştur
 *      ------> https://docs.deneyapkart.org/tr/content/contentDetail/deneyap-6-eksen-ataletsel-olcum-birimi-m02 <------
 *      ------> https://github.com/deneyapkart/deneyap-6-eksen-ataletsel-olcum-birimi-arduino-library <------ 
 *
*/
#include <Deneyap_6EksenAtaletselOlcumBirimi.h>       // Deneyap 6-Eksen Ataletsel Ölçüm Birimi kutuphanesi eklenmesi

LSM6DSM AccGyro;                                      // 1. Sensör için LSM6DSM icin Class tanimlamasi
LSM6DSM AccGyro2;                                     // 2. Sensör için LSM6DSM icin Class tanimlamasi 

void setup() {
    Serial.begin(115200);                             // Seri haberleşme başlatıldı
    AccGyro.begin(0x6A);                              // begin(slaveAdress) fonksiyonu ile cihazların haberleşmesi başlatılması
    AccGyro2.begin(0x6B);                             // begin(slaveAdress) fonksiyonu ile cihazların haberleşmesi başlatılması
}

void loop() {
    Serial.println("\n1. Akselerometre degerleri"); 
    Serial.print("X ekseni: ");                     // X-eksen akselerometre verisi okuma
    Serial.print(AccGyro.readFloatAccelX());
    Serial.print("\tY ekseni: ");                   // Y-eksen akselerometre verisi okuma
    Serial.print(AccGyro.readFloatAccelY());
    Serial.print("\tZ ekseni: ");                   // Z-eksen akselerometre verisi okuma
    Serial.println(AccGyro.readFloatAccelZ());
    delay(500);

    Serial.println("\n2. Akselerometre degerleri");
    Serial.print("X ekseni: ");                     // X-eksen akselerometre verisi okuma
    Serial.print(AccGyro2.readFloatAccelX());
    Serial.print("\tY ekseni: ");                   // Y-eksen akselerometre verisi okuma
    Serial.print(AccGyro2.readFloatAccelY());
    Serial.print("\tZ ekseni: ");                   // Z-eksen akselerometre verisi okuma
    Serial.println(AccGyro2.readFloatAccelZ());
    delay(500);

    Serial.print("--------------------------");
}
