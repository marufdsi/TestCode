#include<iostream>
#include<vector>
#include <omp.h>
using namespace std;



#pragma omp declare simd uniform(a), linear(i:1), simdlen(4)
#pragma omp declare simd uniform(a), simdlen(4)
void foo(int *a, int i){
  std::cout<<a[i]<<"\n";
}
int main(){
  //typedef int64_t index;
  int *a, n = 100, sum, step=4;
  int b[100], c[100];
#pragma omp simd collapse(2) safelen(4)
  for(int k=0; k<n; k+=8){
#pragma omp simd
    for(int i=k; i<k+8; i++){
      sum += *a;
      a += step;
    }
  }

  return 0;
}
