#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "engine.h"

int main ()
{
    Engine_Vector2 p1 = engine_create_vector2 (10, 2);
    Engine_Vector2 p2;

    engine_copy_vector2 (&p1, &p2);

    printf("P1: %s -- P2: %s", engine_vector_to_string(&p1), engine_vector_to_string(&p2));

    return 0;
}