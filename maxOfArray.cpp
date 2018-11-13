#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

int maxOfArray(int a[], int size) {
  if (size < 1){
    std::cerr << "ERROR: maxOfArray called with size < 1" << std::endl;
    exit(1);
  }
  int result = a[0];
  for(int i=0;i < size; i++){
    if(a[0]>result){
      result = a[i];
    }
  }
  return result;
}
