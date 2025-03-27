#include <stdio.h>  // Giriş/Çıkış işlemleri için gerekli kütüphane
#include <string.h> // String işlemleri için (örneğin: strlen)
#define MAX 100     // Maksimum karakter sayısı

int main() {
    // ===================== Temel Değişken Tanımlamaları =====================
    int yas;
    float boy;
    char isim[MAX];
    char karakter;

    // ===================== OUTPUT - printf =====================
    // printf: Ekrana formatlı veri yazdırmak için kullanılır
    printf("==== KULLANICI BILGI FORMU ====\n");

    // ===================== INPUT - fgets =====================
    // fgets: Güvenli şekilde bir satır string (isim) almak için
    printf("Adınızı girin: ");
    fgets(isim, MAX, stdin); // Kullanıcıdan string alır (ad soyad dahil)
    // fgets ile alınan string sonunda '\n' kalabilir. Onu temizleyelim:
    isim[strcspn(isim, "\n")] = 0; // '\n' karakterini null terminator '\0' ile değiştir

    // ===================== INPUT - scanf =====================
    // scanf: Klavyeden formatlı veri almak için
    printf("Yaşınızı girin: ");
    scanf("%d", &yas); // & operatörü değişkenin adresini verir

    printf("Boyunuzu girin (örnek: 1.75): ");
    scanf("%f", &boy); // float değer almak için %f kullanılır

    // ===================== INPUT - getchar =====================
    // getchar: Tek bir karakter almak için kullanılır (Enter'dan sonra ilk karakter)
    getchar(); // Önceki scanf satırında kalan '\n' karakterini temizlemek için
    printf("Favori harfinizi girin: ");
    karakter = getchar(); // Kullanıcıdan bir karakter al

    // ===================== OUTPUT - puts =====================
    // puts: String yazdırır ve otomatik olarak yeni satır ekler
    puts("\n==== GIRILEN BILGILER ====");

    // ===================== OUTPUT - printf ile formatlı çıktı =====================
    printf("Adınız: %s\n", isim);
    printf("Yaşınız: %d\n", yas);
    printf("Boyunuz: %.2f metre\n", boy);
    printf("Favori harfiniz: %c\n", karakter);

    // ===================== OUTPUT - putchar =====================
    printf("Favori harfinizi tekrar yazdıralım: ");
    putchar(karakter); // Tek karakter yazdırır
    putchar('\n');

    // ===================== STRING'DEN VERI OKUMA - sscanf =====================
    char metin[] = "42 3.14";
    int sayi;
    float oran;
    sscanf(metin, "%d %f", &sayi, &oran); // String içinden sayıları ayrıştır
    printf("\nMetinden alınan tamsayı: %d ve ondalıklı sayı: %.2f\n", sayi, oran);

    // ===================== STRING'E YAZMA - sprintf =====================
    char cikti[100];
    sprintf(cikti, "Özet: %s, %d yaşında, %.2f m boyunda.", isim, yas, boy);
    printf("%s\n", cikti);

    // ===================== DOSYA I/O - fprintf ve fscanf =====================
    FILE *dosya = fopen("kullanici.txt", "w"); // Yazmak için dosya aç
    if (dosya == NULL) {
        printf("Dosya açılamadı!\n");
        return 1;
    }

    fprintf(dosya, "%s\n%d\n%.2f\n%c\n", isim, yas, boy, karakter); // Dosyaya yaz
    fclose(dosya); // Dosyayı kapat

    // Şimdi dosyadan okuyalım
    char okunan_isim[MAX];
    int okunan_yas;
    float okunan_boy;
    char okunan_karakter;

    dosya = fopen("kullanici.txt", "r"); // Okumak için dosyayı aç
    if (dosya == NULL) {
        printf("Dosya açılamadı (okuma)!\n");
        return 1;
    }

    fscanf(dosya, "%s\n%d\n%f\n %c\n", okunan_isim, &okunan_yas, &okunan_boy, &okunan_karakter);
    fclose(dosya);

    printf("\n==== DOSYADAN OKUNAN BILGILER ====\n");
    printf("İsim: %s\n", okunan_isim);
    printf("Yaş: %d\n", okunan_yas);
    printf("Boy: %.2f\n", okunan_boy);
    printf("Karakter: %c\n", okunan_karakter);

    return 0;
}