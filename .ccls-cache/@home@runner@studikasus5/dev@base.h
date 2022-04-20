#include<iostream>
using namespace std;
class sks{
  public:
  void input();
  void proses();
  void output();
  private:
  long int matkul(int n, int jum_mat,int hasil);
  long int nim,jum_mat,n,hasil,b[50];
  string nama, a[50];
};
void sks::input(){
  cout<<"Masukan NIM : ";
  cin>>nim;
  cout<<"Masukkan Nama : ";
  cin>>nama;
  cout<<"Jumlah Matkul yang ingin diinput : ";
  cin>>jum_mat;
  }
void sks::proses(){
    n = 0;
    hasil = 0;
		matkul(n, jum_mat, hasil);
		total = hasil * 0.75;
void sks::matkul(int n,int jum_mat, int hasil){
    if(n==jum_mat){
      return hasil;
    }else{
      cout<<"Mata Kuliah : ";
      cin>>a[n];
      cout<<"Jumlah SKS : ";
      cin>>b[n];
      b[n]*150000;
      matkul(n++,jum_mat,hasil+b[n]);
    }
  }
}
void sks::output(){
  cout<<"\nNIM Mahasiswa : "<<nim;
  cout<<"\nNama Mahasiswa : "<<nama;
  
    long int matkul(int n,int jum_mat,int hasil){
    if(n==jum_mat){
       
    }else{
    cout<<"\nMata Kuliah ke-"<<n+1<<" : "<<a[n];
    cout<<"\nJumlah sks : "<<b[n];
    matkul(n++,jum_mat,hasil);
    }
    }
    cout<<"\nTotal Pembayaran :"<<hasil;
}