#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estadio.h"
#include "persona.h"
#include "lista.h"

struct estadio{
  char equipo[10];
  char ascenso;
  char apodo[10];

  ListaPtr listaPersonas;
};

EstadioPtr crearEstadio(char* equipo, char ascenso, char* apodo){
    EstadioPtr e = (EstadioPtr)malloc(sizeof(struct estadio));

    strcpy(e->equipo, equipo);
    e->ascenso = ascenso;
    strcpy(e->apodo, apodo);

    e->listaPersonas = crearLista();

    return e;
};

void insertarPersonas(EstadioPtr e, PersonaPtr p){
    insertarPrimero(e->listaPersonas,p);
}

void ordenarPersona(EstadioPtr e){
    ordenarLista(e->listaPersonas, &compararNombre);
};

void mostrarEstadio(EstadioPtr e){
    printf("-------------------- EQUIPO --------------------\n");
    printf("EQUIPO: %s\n", e->equipo);
    printf("ASCENSO: %c\n", e->ascenso);
    printf("DIRECCION: %s", e->apodo);

    mostrarListaGenerico(e->listaPersonas, &mostrarPersonaPtr);
};

void liberarEstadio(EstadioPtr e){
    free(e);
};

///GETTERS Y SETTERS
//GETTERS
char* getEquipo(EstadioPtr e){
    return e->equipo;
};
char getAscenso(EstadioPtr e){
    return e->ascenso;
};
char* getApodo(EstadioPtr e){
    return e->apodo;
};
ListaPtr getPersonas(EstadioPtr e){
    return e->listaPersonas;
};
//SETTERS
void setEquipo(EstadioPtr e,char* nuevoEquipo){
    strcpy(e->equipo,nuevoEquipo);
};
void setAscenso(EstadioPtr e,char nuevoAscenso){
    e->ascenso = nuevoAscenso;
};
void setApodo(EstadioPtr e,char* nuevoApodo){
     strcpy(e->apodo,nuevoApodo);
};
