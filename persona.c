#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "persona.h"
#include "motivo.h"
#include "lista.h"

struct personaE{
    char nombre[10];
    char apellido[10];
    int dni;
    ListaPtr motivos;
};

PersonaPtr crearPersona(char* nombre, char* apellido, int dni){
    PersonaPtr p = (PersonaPtr)malloc(sizeof(struct personaE));

    strcpy(p->nombre, nombre);
    strcpy(p->apellido, apellido);
    p->dni=dni;
    p->motivos = crearLista();

    return p;
};

void insertarMotivo(PersonaPtr p, MotivoPtr m){
    insertarPrimero(p->motivos, m);
};

void mostrarPersona(PersonaPtr p){
    printf("=============== PERSONA =============\n");

    printf("NOMBRE: %s\n", p->nombre);
    printf("APELLIDO: %s\n", p->apellido);
    printf("DNI: %d\n", p->dni);

    mostrarListaGenerico(p->motivos, &mostrarMotivoPtr);
};

int compararNombre(void * d1, void * d2){
    PersonaPtr p1 = (PersonaPtr) d1;
    PersonaPtr p2 = (PersonaPtr) d2;

    return strcmp(p1->nombre, p2->nombre);
};

void mostrarPersonaPtr(void * d1){
    PersonaPtr p = (PersonaPtr)d1;

    mostrarPersona(p);
};

void liberarPersona(PersonaPtr p){
    free(p);
};

///GETTERS Y SETTERS
//GETTERS
char* getNombre(PersonaPtr p){
    return p->nombre;
};
char* getApellido(PersonaPtr p){
    return p->apellido;
};
int getDni(PersonaPtr p){
    return p->dni;
};
ListaPtr getMotivos(PersonaPtr p){
    return p->motivos;
};
//SETTERS
void setNombre(PersonaPtr p,char* nuevoNombre){
    strcpy(p->nombre, nuevoNombre);
};
void setApellido(PersonaPtr p,char* nuevoApellido){
    strcpy(p->apellido, nuevoApellido);
};
void setDni(PersonaPtr p,int nuevoDni){
    p->dni = nuevoDni;
};
