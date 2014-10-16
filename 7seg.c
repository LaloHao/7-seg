#include <stdio.h>
#include <string.h>

#define SPANISH //Comment line if you want english
#define MAX 13 /*How many displays do you want?
 Default console is 80x24, this means you can print up to (80/6)=13
 displays without resizing your window*/
#include "kernel.c"

int main(void)
{  
  while (vivo) {
    imprimirSegmentos();
    togglearSegmento();
  }
  
  return EXIT_SUCCESS;
}
