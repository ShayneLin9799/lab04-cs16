#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>


int countEvens(int a[], int size) {
  int num = 0;
  for(int i=0; i < size; i++){
    if(a[i]%2==0||a[i]==0){
      num = num + 1;
    }
  }
  return num;
}
