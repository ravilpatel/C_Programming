//Bitwise left shifting

#include <stdio.h>

int main(void){
  int a = 1; // 32 bit number
  printf("Left shift of a by 2: %d\n", a<<2);
  printf("Left shift of a by 15: %d\n", a<<15);
  /*
    Observe important observation when we make the MSB as 1
    To make MSB 1 we need to shift 1 from LSB 31 times to left.
  */
  printf("Left shift of a by 31: %d\n", a<<31); //-2147483648
  //note that -2^32 = -2147483648, which is the smallest number possible in 32 bits

  return 0;
}