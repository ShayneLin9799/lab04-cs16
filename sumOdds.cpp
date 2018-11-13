#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

#include "utility.h"
using namespace std;

int sumOdds(int a[], int size) {
  int sum = 0;
  
  if(size<1){
    cerr<<"ERROR: sumOdds called with size < 1"<<endl;
    exit(1);
  }
  for(int i=0;i<size;i++){
    if(isOdd(a[i])){
      sum = sum + a[i];
    }
  }
  return sum;
}
