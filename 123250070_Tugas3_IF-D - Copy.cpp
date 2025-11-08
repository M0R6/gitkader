#include <iostream>
using namespace std;

void pilihMenu(), menuInput(), lihatData(), kemBali(char kembali);
int harga, jumlah, diskon, pajak;

void pilihMenu(){
   int pilih;
   char kembali;
   cout << "Kasir" << endl
   << "1. Input Data Barang" << endl
   << "2. Lihat Data" << endl
   << "Pilih menu: ";
   cin >> pilih;
   switch(pilih){
      case 1:
         menuInput();
         break;
      case 2:
         lihatData();
         break;
      default:
         cout << "Pilihan tidak tersedia" << endl;
         cout << "Ingin kembali ke menu utama? (Y/N): ";
         cin >> kembali;
         kemBali(kembali);
      break;
   }
};
void menuInput(){
   char kembali;
   cout << "Input Data Barang" << endl;
   cout << "Harga Barang: ";
   cin >> harga;
   cout << "Jumlah Barang: ";
   cin >> jumlah;
   cout << "Diskon (%): ";
   cin >> diskon;
   cout << "Pajak (%): ";
   cin >> pajak;
   cout << "Ingin kembali ke menu utama? (Y/N): ";
   cin >> kembali;
   kemBali(kembali);
};
void lihatData(){
   char kembali;
   float totalHarga, diskonRp, pajakRp, hargaAkhir;
   totalHarga = harga * jumlah;
   diskonRp = (diskon / 100.0) * totalHarga;
   pajakRp = (pajak / 100.0) * totalHarga;
   hargaAkhir = totalHarga - diskonRp + pajakRp;
   cout << "Lihat Data" << endl;
   cout << "Total Harga: Rp " << totalHarga << endl;
   cout << "Diskon: Rp " << diskonRp << endl;
   cout << "Pajak: Rp " << pajakRp << endl;
   cout << "Harga Akhir: Rp " << hargaAkhir << endl;
   cout << "Ingin kembali ke menu utama? (Y/N): ";
   cin >> kembali;
   kemBali(kembali);
};
void kemBali(char kembali){
   if(kembali == 'Y' || kembali == 'y'){
      system("cls");
      pilihMenu();
   }else if(kembali == 'N' || kembali == 'n'){
      system("cls");
      cout << "Terima kasih!" << endl;
      exit(0);
   }else{
      cout << "Pilihan tidak valid, kembali ke menu utama..." << endl;
      system("pause");
      system("cls");
      pilihMenu();
   }
};
int main(){
   pilihMenu();
   return 0;
}