#ifndef MOTIVO_H_INCLUDED
#define MOTIVO_H_INCLUDED

struct motivo;

typedef struct motivo * MotivoPtr;

MotivoPtr crearMotivo(char* razon);

void mostrarMotivo(MotivoPtr m);
void mostrarMotivoPtr(void * d);

void liberarMotivo(MotivoPtr m);

#endif // MOTIVO_H_INCLUDED
