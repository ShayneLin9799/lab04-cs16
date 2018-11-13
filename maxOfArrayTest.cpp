#include "arrayFuncs.h"
#include "tddFuncs.h"

int main() {
int fiveThrees[5]={3,3,3,3,3};
  assertEquals(3,
	       maxOfArray(fiveThrees,5),
	       "maxOfArray(fiveThrees,5)");

int threeZeros[3]={0,0,0};
  assertEquals(0,
          maxOfArray(threeZeros,3),
          "maxOfArray(fiveThrees,3)");


int fiveInts[5]={12,3,4,-9,5};
  assertEquals(12,
          maxOfArray(fiveInts,5),
          "maxOfArray(fiveInts,5)");

  assertEquals(12,
          maxOfArray(fiveInts,2),
          "maxOfArray(fiveInts,2)");

  assertEquals(12,
          maxOfArray(fiveInts,3),
          "maxOfArray(fiveInts,3)");

int oneSize[1]={42};
  assertEquals(42,
          maxOfArray(oneSize,1),
          "maxOfArray(oneSize,1)");
int mix[10]={30000,14,535,24,23,525,23,234};
  assertEquals(30000,
          maxOfArray(mix,10),
          "maxOfArray(mix,10)");
return 0;
}
