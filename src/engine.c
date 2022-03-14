#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "engine.h"

Engine_Vector2 engine_create_vector2 (const int x, const int y) {
    Engine_Vector2 res;

    res.x = x;
    res.y = y;

    return res;
}

void engine_copy_vector2 (const Engine_Vector2* v1, Engine_Vector2* v2) {
    v2->x = v1->x;
    v2->y = v1->y;
}

double engine_get_magnitude (const Engine_Vector2* v) {
    double x_squared = v->x * v->x;
    double y_squared = v->y * v->y;

    return sqrt (x_squared + y_squared);
}

double engine_get_distance (const Engine_Vector2 *a, const Engine_Vector2 *b) {
    double dx = b->x - a->x;
    double dy = b->y - a->y;

    return sqrt ((dx * dx) + (dy * dy));
}

double engine_get_angle (const Engine_Vector2 *v) {
    return atan2 (v->y, v->x);
}

char* engine_vector_to_string (const Engine_Vector2 *v) {
    int len = 0;

    // Gets the length of the string to create.
    len = snprintf (NULL, len, "(%d, %d)", v->x, v->y);

    // allocate/validate string to hold all values (+1 to null-terminate)
    char *res = calloc (1, sizeof (*res) * len + 1);

    if (!res) {
        fprintf (stderr, "%s() error: virtual memory allocation failed.\n", __func__);
    }

    // write/validate struct values to res
    if (snprintf (res, len + 1, "(%d, %d)", v->x, v->y) > len + 1) {
        fprintf(stderr, "%s() error: snprintf returned truncated result.\n", __func__);
        return NULL;
    }

    return res;
}