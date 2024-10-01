#ifndef ESTADIO_H_INCLUDED
#define ESTADIO_H_INCLUDED
#include "lista.h"
#include "persona.h"

struct estadio;

typedef struct estadio * EstadioPtr;

EstadioPtr crearEstadio(char* equipo, char ascenso, char* apodo);

void insertarPersonas(EstadioPtr e, PersonaPtr p);

void ordenarPersona(EstadioPtr e);

void mostrarEstadio(EstadioPtr e);

void liberarEstadio(EstadioPtr e);

///GETTERS Y SETTERS
//GETTERS
char* getEquipo(EstadioPtr e);
char getAscenso(EstadioPtr e);
char* getApodo(EstadioPtr e);
ListaPtr getPersonas(EstadioPtr e);
//SETTERS
void setEquipo(EstadioPtr e,char* nuevoEquipo);
void setAscenso(EstadioPtr e, char nuevoAscenso);
void setApodo(EstadioPtr e, char* nuevoApodo);

#endif // ESTADIO_H_INCLUDED
