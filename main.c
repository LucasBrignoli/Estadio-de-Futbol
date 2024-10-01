#include <stdio.h>
#include <stdlib.h>
#include "estadio.h"
#include "persona.h"
#include "motivo.h"

int main()
{
    ///CREAR
    EstadioPtr e1 = crearEstadio("BOCA", 'A', "XENEIZE");
    EstadioPtr e2 = crearEstadio("RIVER", 'A', "GALLINAS");

    PersonaPtr p1 = crearPersona("CAMILA", "SOLAR", 40000000);
    PersonaPtr p2 = crearPersona("LUCAS", "BRIGNOLI", 43232434);
    PersonaPtr p3 = crearPersona("LAUTARO", "LOPEZ", 44945865);
    PersonaPtr p4 = crearPersona("JOHNNY", "JOESTAR", 42945865);

    MotivoPtr m1 = crearMotivo("AMOR");
    MotivoPtr m2 = crearMotivo("HERENCIA");
    MotivoPtr m3 = crearMotivo("PASION");
    MotivoPtr m4 = crearMotivo("FAVORITISMO");

    ///INSERTAR
    insertarMotivo(p2, m1);
    insertarMotivo(p2, m3);
    insertarMotivo(p1, m1);
    insertarMotivo(p3, m2);
    insertarMotivo(p4, m4);
    insertarPersonas(e1, p1);
    insertarPersonas(e1, p2);
    insertarPersonas(e1, p3);
    insertarPersonas(e2, p3);
    insertarPersonas(e2, p4);

    mostrarEstadio(e1);
    printf("================= ORDENADO ===============\n");
    ordenarPersona(e1);
    mostrarEstadio(e1);

    return 0;
}
