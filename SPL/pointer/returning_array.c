#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* function to generate and return random numbers */
int* getReverse( int *r) {

   int i, temp;
    
   for ( i = 0; i < 5; ++i) {
      printf( "r[%d] = %d\n", i, r[i]);
    temp = r[i];
    r[i] = r[4-i];
    r[4-i] = temp;
   }
   return r;
}

/* main function to call above defined function */
int main () {

   /* a pointer to an int */
   int *p, *q;
   int i;
   int x[5] = {10,2,3,4,5};
   q = x;
   p = getReverse(q);
	
   for ( i = 0; i < 5; i++ ) {
      printf( "*(p + %d) : %d\n", i, x[i]);
   }

   return 0;
}