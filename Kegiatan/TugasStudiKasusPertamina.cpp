#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;
class Bensin{
      public :
             Bensin();
             void pilihan();
             void hitung_uang();
             void hitung_liter();
             void nama();
      private :
              double uang, liter, tampil;
              char pil;
              char ambil;
              double harga, pertamax, pertalite;
              string na;
      };
void Bensin::nama(){
	cout <<"\nMasukan nama pelanggan: ";
	cin>> na;
}
Bensin::Bensin(){
     harga = 0;
     pertalite = 7000;
     pertamax = 9000;
     }
void Bensin::pilihan(){
     cout<<"=======Selamat Datang di SPBU UAD======="<<endl;
     nama();
	 cout<<"\nBeli berdasarkan : "<<endl;
     cout<<"a --> Pertalite "<<endl;
     cout<<"b --> Pertamax "<<endl;
     cout<<"Masukkan pilihan anda = ";
     cin>>ambil;
     if(ambil == 'a' || ambil == 'b'){
              cout<<"Beli berdasarkan :"<<endl;
     cout<<"1 -> Uang"<<endl;
     cout<<"2 -> Liter"<<endl;
     cout<<"Masukkan pilihan pembelian : ";
     cin>> pil;
     if(pil == '1'){
          hitung_uang();
          }
     else if(pil=='2'){
          hitung_liter();
          }
     else{
          system("cls");
          pilihan();
          }
              }
     system("cls");
     pilihan();    
     }