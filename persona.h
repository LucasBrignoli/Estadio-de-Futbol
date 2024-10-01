#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED
#include "lista.h"
#include "motivo.h"

struct personaE;

typedef struct personaE * PersonaPtr;

PersonaPtr crearPersona(char* nombre, char* apellido, int dni);

int compararNombre(void * d1, void * d2);

void insertarMotivo(PersonaPtr p, MotivoPtr m);

void mostrarPersona(PersonaPtr p);

void mostrarPersonaPtr(void * d1);

void liberarPersona(PersonaPtr p);

///GETTERS Y SETTERS
//GETTERS
char* getNombre(PersonaPtr p);
char* getApellido(PersonaPtr p);
int getDni(PersonaPtr p);
ListaPtr getMotivos(PersonaPtr p);
//SETTERS
void setNombre(PersonaPtr p,char* nuevoNombre);
void setApellido(PersonaPtr p,char* nuevoApellido);
void setDni(PersonaPtr p,int nuevoDni);

#endif // PERSONA_H_INCLUDED
