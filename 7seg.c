#include <stdio.h>
#include <string.h>

#define MAX 25 //How many displays do you want?
#include "kernel.c"

int main(void)
{  
  while (vivo) {
    imprimirSegmentos();
    togglearSegmento();
  }
  
  return EXIT_SUCCESS;
}
