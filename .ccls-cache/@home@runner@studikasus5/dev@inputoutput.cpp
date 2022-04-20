#include "../library/base.h"

void sks::input(){
  cout<<"Masukan NIM : ";
  cin>>nim;
  cout<<"Masukkan Nama : ";
  cin>>nama;
  cout<<"Jumlah Matkul yang ingin diinput : ";
  cin>>jum_mat;
  for(int i = 1;i <= jum_mat; i++){
      cout<<"Mata Kuliah "<<i<<" : ";
      cin>>a[i];
      cout<<"Jumlah SKS "<<i<<" : ";
      cin>>sk[i];
     }
  }
void sks::output(){
  cout<<"\nNIM Mahasiswa : "<<nim;
  cout<<"\nNama Mahasiswa : "<<nama;
    for(int i = 1;i <= jum_mat; i++){
       cout<<"\nMata Kuliah "<<i<<" : "<<a[i];
       cout<<"\nJumlah SKS "<<i<<" : "<<sk[i];
     }
  cout<<"\nJumlah Seluruh SKS : "<<jum_sks;
  cout<<"\nTotal Pembayaran : "<<total;
}