
/* Wydobywanie reprezentacji bajtowej liczby INT */

#include <stdio.h>

int main(){

  int x=0xFAFBAC10; // liczba całkowita 4 bajtowa (liitle endian)
  char *px=NULL;
  px=(char*)&x;
  printf("x=%x\n",x);
  printf("bajt 1 x: = %x\n", *(px+0)&0xFF);
  printf("bajt 2 x: = %x\n", *(px+1)&0xFF);
  printf("bajt 3 x: = %x\n", *(px+2)&0xFF);
  printf("bajt 4 x: = %x\n", *(px+3)&0xFF);


  return 0;
}