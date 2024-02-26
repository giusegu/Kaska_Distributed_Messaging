#include "comun.h"
#include "kaska.h"
#include "map.h"

// Crea el tema especificado.
// Devuelve 0 si OK y un valor negativo en caso de error.
int create_topic(char *topic) {
    return 0;
}
// Devuelve cuántos temas existen en el sistema y un valor negativo
// en caso de error.
int ntopics(void) {
    return 0;
}

// SEGUNDA FASE: PRODUCIR/PUBLICAR

// Envía el mensaje al tema especificado; nótese la necesidad
// de indicar el tamaño ya que puede tener un contenido de tipo binario.
// Devuelve el offset si OK y un valor negativo en caso de error.
int send_msg(char *topic, int msg_size, void *msg) {
    return 0;
}
// Devuelve la longitud del mensaje almacenado en ese offset del tema indicado
// y un valor negativo en caso de error.
int msg_length(char *topic, int offset) {
    return 0;
}
// Obtiene el último offset asociado a un tema en el broker, que corresponde
// al del último mensaje enviado más uno y, dado que los mensajes se
// numeran desde 0, coincide con el número de mensajes asociados a ese tema.
// Devuelve ese offset si OK y un valor negativo en caso de error.
int end_offset(char *topic) {
    return 0;
}

// TERCERA FASE: SUBSCRIPCIÓN


// Se suscribe al conjunto de temas recibidos. No permite suscripción
// incremental: hay que especificar todos los temas de una vez.
// Si un tema no existe o está repetido en la lista simplemente se ignora.
// Devuelve el número de temas a los que realmente se ha suscrito
// y un valor negativo solo si ya estaba suscrito a algún tema.
int subscribe(int ntopics, char **topics) {
    return 0;
}

// Se da de baja de todos los temas suscritos.
// Devuelve 0 si OK y un valor negativo si no había suscripciones activas.
int unsubscribe(void) {
    return 0;
}

// Devuelve el offset del cliente para ese tema y un número negativo en
// caso de error.
int position(char *topic) {
    return 0;
}

// Modifica el offset del cliente para ese tema.
// Devuelve 0 si OK y un número negativo en caso de error.
int seek(char *topic, int offset) {
    return 0;
}

// CUARTA FASE: LEER MENSAJES

// Obtiene el siguiente mensaje destinado a este cliente; los dos parámetros
// son de salida.
// Devuelve el tamaño del mensaje (0 si no había mensaje)
// y un número negativo en caso de error.
int poll(char **topic, void **msg) {
    return 0;
}

// QUINTA FASE: COMMIT OFFSETS

// Cliente guarda el offset especificado para ese tema.
// Devuelve 0 si OK y un número negativo en caso de error.
int commit(char *client, char *topic, int offset) {
    return 0;
}

// Cliente obtiene el offset guardado para ese tema.
// Devuelve el offset y un número negativo en caso de error.
int commited(char *client, char *topic) {
    return 0;
}

