#include <stdio.h>
/* osservazione chiave al link https://pages.mtu.edu/~shene/COURSES/cs201/NOTES/chap04/fact.html */
int main(void) {
  int i = 1;
  int fattoriale = 1;
  
  while((fattoriale*i) < (fattoriale*(i + 1))) {
    fattoriale *= i;
    printf("%d!  %d\n", i, fattoriale);
    i++;
  }

  int var = 1;

  for(i=1; i<14; i++){
    var *= i;
  }
  printf("13! infatti non e' %d", var);
  return 0;
}
