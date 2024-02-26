#include <stdio.h>

#include "comun.h"
#include "map.h"
#include "queue.h"

int main(int argc, char *argv[]) {

    if (argc!=2 && argc!=3) {
        fprintf(stderr, "Uso: %s puerto [dir_commited]\n", argv[0]);
        return 1;
    }

    return 0;
}
