#define MSG_BIENVENIDA "7-seg"
#define MSG_TABLAS "[Wincupl]"
#define EXIT_SUCCESS 0
#ifdef SPANISH
#define MSG_SEGMENTOS "[Segmentos]"
#define MSG_PAUSE "Presione una tecla para continuar . . ."
#define MSG_PEDIR_SEGMENTO "Dame el segmento(a-g) ('h' para ayuda): "
#define MSG_CAMBIAR_DATO "Indique el dato a cambiar: "
#define MSG_DATO_INCORRECTO "El dato no existe."
#define MSG_CAMBIAR_INDICE "Indique el nuevo indice: "
#define MSG_INDICE_INCORRECTO "Indice incorrecto."
#define MSG_ANODE "Anodo"
#define MSG_CATHODE "Catodo"
#define MSG_AYUDA "\
[Comandos]\n \
z : salir del programa \n \
h : ayuda \n \
x : cambiar el dato actual a modificar\n \
t : mostrar tabla de datos \n \
i : cambiar indice\n \
k : activar/desactivar catodo comun\n "
#else
#define MSG_SEGMENTOS "[Segments]"
#define MSG_PAUSE "Press any key to continue . . ."
#define MSG_PEDIR_SEGMENTO "Input segment to toggle(a-g) ('h' for help): "
#define MSG_CAMBIAR_DATO "Input next display: "
#define MSG_DATO_INCORRECTO "Display doesn't exist."
#define MSG_CAMBIAR_INDICE "Input new index: "
#define MSG_INDICE_INCORRECTO "Invalid index."
#define MSG_ANODE "Anode"
#define MSG_CATHODE "Cathode"
#define MSG_AYUDA "\
[Commands]\n \
z : exit\n \
h : displays help \n \
x : change current display\n \
t : show table (wincupl code)\n \
i : modify index\n \
k : toggle between common anode/cathode\n"
#endif
