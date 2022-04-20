#include "library/base.h"

void sks::proses(){
    n = 1;
    hasil = 0;
    long int matkul(int n,int jum_mat, int hasil){
    if(n==jum_mat){
      
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