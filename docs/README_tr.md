# Deneyap 6 Eksen Ataletsel Ölçüm Birimi  Arduino Kütüphanesi

***** Fotoğraf eklenecek ****

Deneyap 6 Eksen Ataletsel Ölçüm Birimi için Arduino kütüphanesidir.

## :mag_right:Özellikler 
- `Ürün ID` **M02**, **mpv1.0**
- `MCU` LSM6DSM
- `Weight` 
- `Module Dimension`
- `I2C Adres` 0x6B, 0x6A

| Adress |  | 
| :---      | :---     |
| 0x6B | varsayılan adres |
| 0x6A | LSM_ADR kısa devre yapıldığındaki adres |

## :closed_book:Dokümanlar
[Deneyap 6 Eksen Ataletsel Ölçüm Birimi](https://docs.deneyapkart.org/en/content/contentDetail/deneyap-6-eksen-ataletsel-olcum-birimi-m02)

[Deneyap 6 Eksen Ataletsel Ölçüm Birimi  Şematik](https://cdn.deneyapkart.org/media/upload/userFormUpload/ZodOFOwcCvlrXxKLKOxAyPc4BnMv7etf.pdf)

[Deneyap 6 Eksen Ataletsel Ölçüm Birimi Teknik Çizim](https://cdn.deneyapkart.org/media/upload/userFormUpload/gCSVq11Qq5B9B7ZM52hnGlqtmenEfRwU.pdf)

[LSM6DSM-datasheet](https://www.st.com/resource/en/datasheet/lsm6dsm.pdf)

[Arduino Kütüphanesi Nasıl İndirilir](https://docs.arduino.cc/software/ide-v1/tutorials/installing-libraries)

## :pushpin:Deneyap 6 Eksen Ataletsel Ölçüm Birimi
Bu Arduino kütüphanesi Deneyap 6 Eksen Ataletsel Ölçüm Biriminin I2C çevre birimi ile kullanılmasını sağlar. Arduino ile uyumlu, I2C çevre birimine sahip herhangi bir geliştirme kartı ile bu kütüphaneyi projelerinizde kullanabilirsiniz.

## :globe_with_meridians:Repo İçeriği
- `/docs` README_tr.md ve ürün fotoğrafları
- `/examples` .ino uzantılı örnek uygulamalar
- `/src` kütüphane için .cpp ve .h uzantılı dosyalar
- `keywords.txt` Arduino IDE'de vurgulanacak anahtar kelimeler
- `library.properties` Arduino yöneticisi için genel kütüphane özellikleri

## Sürüm Geçmişi
1.0.1 - kütüphane güncellendi ve yeni bir örnek eklendi

1.0.0 - ilk sürüm

## :rocket:Donanım Bağlantıları
- Deneyap 6 Eksen Ataletsel Ölçüm Birimi ile kullanılan geliştirme kartı I2C kablosu ile bağlanabilir
- veya jumper kablolar ile ile 3V3, GND, SDA ve SCL bağlantıları yapılabilir. 

| 6 Eksen Ataletsel Ölçüm Birimi | Fonksiyon| Kart pinleri |
| :---     | :---   |   :---  |
| 3.3V     | Güç    | 3.3V    |
| GND      | Toprak |GND      |
| SDA      | I2C Data  | SDA pini |
| SCL      | I2C Clock | SCL pini|
|INT1 | Kesme | herhangi bir GPIO pini |
|INT2  | Kesme | herhangi bir GPIO pini |

## :bookmark_tabs:Lisans Bilgisi 
Lisans bilgileri için [LICENSE](https://github.com/deneyapkart/deneyap-6-eksen-ataletsel-olcum-birimi-arduino-library/blob/master/LICENSE) dosyasını inceleyin.