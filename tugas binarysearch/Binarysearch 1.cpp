#include <iostream>

using namespace std;

int binarysearch (int data[], int n, int k)
{
 int kanan,kiri,tengah,posisi;
 bool ada;
 
 ada    = false;
 kiri  = 0;
 kanan  = n - 1;
 posisi = -1;
 
 while (kiri <= kanan)
 {
  tengah = (kanan + kiri) / 2;
  if (k == data[tengah])
  {
   posisi = tengah;
   break;
  }
 else if (k < data[tengah]) kanan = tengah - 1;
 else if (k > data[tengah]) kiri= tengah + 1;
 }
 return posisi;
}

int main ()
{
 int kk;
 cout << "INPUT ANGKA : "; cin >> kk;
 int n         = 10;
 int data[] = {21,31,48,52,64,78,87,92,105,170};
 int k      = kk;
 
 int posisi = binarysearch (data,n,k);
 
 if (posisi != -1)
 {
  cout << "ANGKA " << k << " ditemukan pada indeks ke-" << posisi << endl;
 }
 else
 {
  cout << "ANGKA " << k << " tidak ditemukan" << endl;
 }
 return 0;
}
