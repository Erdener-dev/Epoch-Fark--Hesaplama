# Epoch Farkı Hesaplama Programı

Bu proje, iki tarih ve saat bilgisi arasında **epoch farkını** hesaplayan bir C programıdır.  
Program, Unix epoch zamanını (1 Ocak 1970 UTC'den itibaren geçen saniyeler) temel alır ve kullanıcıdan alınan iki tarih arasındaki farkı saniye, saat ve gün cinsinden hesaplar.

---

## **Epoch Nedir?**

**Epoch**, bilgisayar sistemlerinde zamanın başlangıç noktası olarak kabul edilen bir referans tarihtir.  
Unix sistemlerinde epoch zamanı **1 Ocak 1970, UTC** olarak belirlenmiştir.  
Epoch zamanı, bu tarihten itibaren geçen toplam saniye sayısını ifade eder.

Örneğin:  
- 1 Ocak 1970'ten itibaren 10 Şubat 2025'e kadar geçen süre, epoch zamanı olarak **1707600000** gibi bir değer dönebilir.

---

## **Programın İşlevi**

Bu program:
- Kullanıcıdan iki tarih ve saat bilgisi alır.
- Her bir tarihi **epoch zamanına** çevirir.
- İki epoch zamanı arasındaki farkı hesaplar.
- Zaman farkını saniye, saat ve gün cinsinden ekrana yazdırır.

---

## **Nasıl Kullanılır?**

gcc epoch_farki.c -o epoch_farki
./epoch_farki

