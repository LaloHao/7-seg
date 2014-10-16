#include <stdio.h>
#include <string.h>
#include "msg.h"

#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif
#define MAX 25
char s;
char buff[MAX*6];
int data[MAX][7];
int actual;
int i, j;
int vivo = 1;
int indice = 0;
int com = 1;

void endl(void);
void imprimirSegmentos(void);
void togglearSegmento(void);
void cambiarActual(void);
void imprimirTablas(void);
void ayuda(void);
void cls(void);
void cambiarIndice(void);

int main(void)
{  
  while (vivo) {
    imprimirSegmentos();
    togglearSegmento();
  }
  
  return EXIT_SUCCESS;
}

void imprimirSegmentos(void)
{
  cls();
  printf(MSG_BIENVENIDA); printf("(%s com)", (com == 1)? MSG_CATHODE: MSG_ANODE); printf(MSG_SEGMENTOS); endl();
  strcpy(buff, "");
  strcat(buff, "  ");
  for (i = 0; i < actual; i++) 
    {
      strcat(buff, "      ");
    }
  printf("%s%i", buff, actual+indice); endl();
 
  strcpy(buff, "");
  for (i = 0; i < MAX; i++) {
    strcat(buff, (data[i][0] == com)? " ___  ": "      ");
  }
  puts(buff);

  strcpy(buff, "");
  for (i = 0; i < MAX; i++) 
    {
      strcat(buff, (data[i][5] == com)? "|   ": "    ");
       strcat(buff, (data[i][1] == com)? "| ": "  ");
    }
  puts(buff);

  strcpy(buff, "");
  for (i = 0; i < MAX; i++) 
    {
      strcat(buff, (data[i][5] == com)? "|": " ");
      strcat(buff, (data[i][6] == com)? "___": "   ");
      strcat(buff, (data[i][1] == com)? "| ": "  ");
    }
  puts(buff);
 
  strcpy(buff, "");
  for (i = 0; i < MAX; i++) 
    {
      strcat(buff, (data[i][4] == com)? "|   ": "    ");
      strcat(buff, (data[i][2] == com)? "| ": "  ");
    }
  puts(buff);
 
  strcpy(buff, "");
  for (i = 0; i < MAX; i++) 
    {
      strcat(buff, (data[i][4] == com)? "|": " ");
      strcat(buff, (data[i][3] == com)? "___": "   ");
      strcat(buff, (data[i][2] == com)? "| ": "  ");
    }
  puts(buff);
 
}

void endl(void)
{
  printf("\n");
}

void pausar(void)
{
  getchar();
  printf(MSG_PAUSE); endl();
  getchar();
}

void cls(void)
{
   system(CLEAR);
}

void cambiarActual()
{
  printf(MSG_CAMBIAR_DATO);
  scanf("%i", &i);
  if((i >= indice) && (i <= indice+MAX))
    {
      actual = i-indice;
    }
  else
    {
      printf(MSG_DATO_INCORRECTO);
      endl();
    }
}

void ayuda(void)
{
  cls();
  printf(MSG_BIENVENIDA);printf(MSG_AYUDA);
  pausar();
}

void imprimirTablas(void)
{
  cls();
  printf(MSG_BIENVENIDA); printf("(%s com)", (com == 1)? MSG_CATHODE: MSG_ANODE); printf(MSG_TABLAS);  endl();
  for (i = 0; i < MAX; i++) {
    printf("'d'%i => 'b'", i+indice);
    for (j = 0; j < 7; j++) {
      printf("%d", data[i][j]);
    }
    printf(";");endl();
  }
  pausar();
}

void cambiarIndice()
{
  printf(MSG_CAMBIAR_INDICE);
  scanf("%i", &i);
  if((i >=0))
    {
      indice = i;
    } else
    {
      printf(MSG_INDICE_INCORRECTO);
      pausar();
    }
  endl();
}

void togglearSegmento()
{
  printf(MSG_PEDIR_SEGMENTO);
  scanf("%c", &s);
  endl();
  switch (s) 
    {
    case 'a':
      data[actual][0] = (data[actual][0] == 1)? 0 : 1;
      break;
    case 'b':
      data[actual][1] = (data[actual][1] == 1)? 0 : 1;
      break;
    case 'c':
      data[actual][2] = (data[actual][2] == 1)? 0 : 1;
      break;
    case 'd':        
      data[actual][3] = (data[actual][3] == 1)? 0 : 1;
      break;
    case 'e':
      data[actual][4] = (data[actual][4] == 1)? 0 : 1;
      break;
    case 'f':
      data[actual][5] = (data[actual][5] == 1)? 0 : 1;
      break;
    case 'g':
      data[actual][6] = (data[actual][6] == 1)? 0 : 1;
      break;
    case 'z':
      vivo = 0;
      break;
    case 'h':
      ayuda();
      break;
    case 'x':
      cambiarActual();
      break;
    case 't':
      imprimirTablas();
      break;
    case 'i':
      cambiarIndice();
      break;
    case 'k':
       com = (com == 1)? 0 : 1;
    default:
      0;
    }
}
