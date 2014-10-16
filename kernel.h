#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

char s; //Used for handling commands
char buff[MAX*6];//Stores the printing format
int data[MAX][7];//Array of displays
int actual;//Stores current display
int i, j;//Counters, etc
int vivo = 1;//Stores main program status
int indice = 0;//Index
int com = 1;//Stores anode/cathode status

void endl(void);
void imprimirSegmentos(void);
void togglearSegmento(void);
void cambiarActual(void);
void imprimirTablas(void);
void ayuda(void);
void cls(void);
void cambiarIndice(void);
