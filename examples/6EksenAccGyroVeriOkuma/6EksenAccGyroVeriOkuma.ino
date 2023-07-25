/*
 *   6-Eksen AccGyro Veri Okuma örneği,
 *
 *   Bu örnekte temel konfigürasyon ayarları yapılmaktadır.
 *   Sensörden gelen İvmeölçerden(Acc) X,Y,Z eksen değerleri Dönüölçerden(Gyro) X,Y,Z eksen değerleri ve C ile F cinsinden sıcaklık değerlerini
 *   seri port ekranına yazdırmaktadır.
 *
 *   Bu algılayıcı I2C haberleşme protokolü ile çalışmaktadır.
 *
 *   Bu örnek Deneyap 6-Eksen Ataletsel Ölçüm Birimi ve Deneyap 9-Eksen Ataletsel Ölçüm Birimi için oluşturulmuştur
 *      ------> https://docs.deneyapkart.org/tr/content/contentDetail/deneyap-6-eksen-ataletsel-olcum-birimi-m02 <------
 *      ------> https://github.com/deneyapkart/deneyap-6-eksen-ataletsel-olcum-birimi-arduino-library <------ 
*/
#include <Deneyap_6EksenAtaletselOlcumBirimi.h>       // Deneyap_IvmeOlcerVeDonuOlcer.h kütüphanesi eklendi

LSM6DSM AccGyro;                                      // AccGyro icin Class tanimlamasi

void setup() {
    Serial.begin(115200);                             // Seri haberleşme başlatıldı
    AccGyro.begin(0x6B);                              // begin(slaveAdress) fonksiyonu ile cihazların haberleşmesi başlatılması
}

void loop() {
    Serial.println("\nAkselerometre degerleri");
    Serial.print("X ekseni: ");                     // X-eksen akselerometre verisi okuma
    Serial.print(AccGyro.readFloatAccelX());
    Serial.print("\tY ekseni: ");                   // Y-eksen akselerometre verisi okuma
    Serial.print(AccGyro.readFloatAccelY());
    Serial.print("\tZ ekseni: ");                   // Z-eksen akselerometre verisi okuma
    Serial.println(AccGyro.readFloatAccelZ());
    delay(500);

    Serial.println("\nGyro degerleri");
    Serial.print("X ekseni: ");                    // X-eksen gyro verisi okuma
    Serial.print(AccGyro.readFloatGyroX());
    Serial.print("\tY ekseni: ");                  // Y-eksen gyro verisi okuma
    Serial.print(AccGyro.readFloatGyroY());
    Serial.print("\tZ ekseni: ");                  // Z-eksen gyro verisi okuma
    Serial.println(AccGyro.readFloatGyroZ());
    delay(500);

    Serial.println("\nSicaklik degerleri");
    Serial.print("Celsius: ");                    // Sicaklik verisi okuma (Celsius)
    Serial.print(AccGyro.readTempC());
    Serial.print("\tFahrenheit: ");               // Sicaklik verisi okuma (Fahrenheit)
    Serial.println(AccGyro.readTempF());
    delay(500);
}
