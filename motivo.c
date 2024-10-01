#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "motivo.h"

struct motivo{
    char razon[10];
};

MotivoPtr crearMotivo(char* razon){
    MotivoPtr m = (MotivoPtr)malloc(sizeof(struct motivo));

    strcpy(m->razon,razon);

    return m;
};


void mostrarMotivo(MotivoPtr m){
    printf("MOTIVO: %s\n", m->razon);
};

void mostrarMotivoPtr(void * d){
    MotivoPtr m = (MotivoPtr)d;

    mostrarMotivo(m);
};

void liberarMotivo(MotivoPtr m){
    free(m);
};
