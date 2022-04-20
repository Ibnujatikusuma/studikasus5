#include "../library/base.h"

void sks::proses(){
    	jum_sks = 0;
		total = 0;
		
		hitungSKS(sk,jum_mat, jum_sks);
		
    	total = (jum_sks * 150000)*0.75;
}
void sks::hitungSKS(int sk[],int n, int &jum_sks){
  if(n>0){
    jum_sks += sk[n];

    hitungSKS(sk,n-1, jum_sks);
  }
}