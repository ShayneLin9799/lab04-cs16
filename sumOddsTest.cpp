#include "arrayFuncs.h"
#include "tddFuncs.h"

int main() {

  // Fill this in with exactly four tests that determine whether your
  // code for sumOdds() correctly sums up all the odd numbers in
  // arrays of various sizes.  Include both positive, negative and
  // zero values in your test arrays.
  /*PASSED: sumOdds(fiveThrees,5)
  PASSED: sumOdds(zeros,3)
  PASSED: sumOdds(fiveInts,5)
  PASSED: sumOdds(fiveInts,3)
  PASSED: sumOdds(fiveInts,2)
  PASSED: sumOdds(meaning,1)
  PASSED: sumOdds(mix,10)*/

int zeros[3]={0,0,0};
assertEquals(0,
          sumOdds(zeros,3),
          "sumOdds(zeros,3)");
  
int fiveInts[5]={1,2,3,4,5};
assertEquals(9,
          sumOdds(fiveInts,5),
          "sumOdds(fiveInts,5)");

assertEquals(4,
          sumOdds(fiveInts,3),
          "sumOdds(fiveInts,3)");

assertEquals(1,
          sumOdds(fiveInts,2),
          "sumOdds(fiveInts,2)");
int meaning[] = {42};
  assertEquals(0,
	       sumOdds(meaning,1), 
	       "sumOdds(meaning,1)" ); 
int mix[10]={-5,-3,0,1,2,3,4,5}; // last three will be zero
  assertEquals(1,
	       sumOdds(mix,10), 
	       "sumOfArray(mix,10)" ); 
  
return 0;
}
