#include "arrayFuncs.h"
using namespace std;
int sumOfArray(int a[], int size) {
  int sum = 0;
  if (size < 1){
    cerr << "ERROR: maxOfArray called with size < 1" <<endl;
    exit(1);
  }
  for (int i = 0;i<size;i++){
    sum = sum + a[i];
  }
  return sum;
}
