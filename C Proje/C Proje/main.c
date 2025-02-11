#include <stdio.h>
#include <time.h>

int main() {
    struct tm t1 = {0}, t2 = {0};


    printf("Lutfen ilk tarihi giriniz (gun ay yil):\n");
    scanf("%d %d %d", &t1.tm_mday, &t1.tm_mon, &t1.tm_year);

    printf("Lutfen ilk saati giriniz:\n");
    scanf("%d", &t1.tm_hour);

    printf("Lutfen ikinci tarihi giriniz (gun ay yil):\n");
    scanf("%d %d %d", &t2.tm_mday, &t2.tm_mon, &t2.tm_year);

    printf("Lutfen ikinci saati giriniz:\n");
    scanf("%d", &t2.tm_hour);

    t1.tm_mon -= 1;
    t2.tm_mon -= 1;
    t1.tm_year -= 1900;
    t2.tm_year -= 1900;

    time_t epochT1 = mktime(&t1);
    time_t epochT2 = mktime(&t2);

    double farkSaniye = difftime(epochT2, epochT1);

    printf("\nIki tarih arasindaki epoch farki: %.0f saniye\n", farkSaniye);
    printf("Bu fark: %.2f saat\n", farkSaniye / 3600.0);
    printf("Bu fark: %.2f gun\n", farkSaniye / (3600.0 * 24));

    return 0;
}
