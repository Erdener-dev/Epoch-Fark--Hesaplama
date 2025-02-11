# Epoch Farkı Hesaplama Programı

Bu proje, iki tarih ve saat arasındaki epoch farkını hesaplayan bir C programıdır.  
Unix epoch zamanı (1 Ocak 1970 UTC'den itibaren geçen saniyeler) kullanılarak zaman farkı saniye, saat ve gün cinsinden gösterilir.

## Özellikler
- İki farklı tarih ve saat arasındaki epoch farkını hesaplar.
- Saniye, saat ve gün cinsinden sonucu ekrana yazdırır.
- Kullanıcıdan tarih ve saat girişi alır.

## Kullanım Talimatları

### 1. Kodun Derlenmesi
C programını derlemek için terminalde şu komutu çalıştırın:
```sh
gcc epoch_farki.c -o epoch_farki
