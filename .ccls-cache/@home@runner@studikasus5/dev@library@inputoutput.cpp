#include "library/base.h"

void sks::input(){
  cout<<"Masukan NIM : ";
  cin>>nim;
  cout<<"Masukkan Nama : ";
  cin>>nama;
  cout<<"Jumlah Matkul yang ingin diinput : ";
  cin>>jum_mat;
  }
void sks::output(){
  cout<<"\nNIM Mahasiswa : "<<nim;
  cout<<"\nNama Mahasiswa : "<<nama;
  
    long int matkul(int n,int jum_mat,int hasil){
    if(n==jum_mat){
       
    }else{
    cout<<"\nMata Kuliah ke-"<<n<<" : "<<a[n];
    cout<<"\nJumlah sks : "<<;
    matkul(n++,jum_mat,hasil);
    }
    }
    cout<<"\nTotal Pembayaran :"<<hasil;
}