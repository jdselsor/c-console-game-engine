#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "Ava_Morti_Engine.h"

Ava_Vector2f ava_create_new_vector2f (const double x, const double y) {
    Ava_Vector2f res;

    res.x = x;
    res.y = y;

    return res;
}

Ava_Vector2i ava_create_new_vector2i (const int x, const int y) {
    Ava_Vector2i res;

    res.x = x;
    res.y = y;

    return res;
}

Ava_Vector3f ava_create_new_vector3f (const double x, const double y, const double z) {
    Ava_Vector3f res;

    res.x = x;
    res.y = y;
    res.z = z;

    return res;
}

Ava_Vector3i ava_create_new_vector3i (const int x, const int y, const int z) {
    Ava_Vector3i res;

    res.x = x;
    res.y = y;
    res.z = z;

    return res;
}

void ava_copy_vector2f (const Ava_Vector2f* src, Ava_Vector2f* dest) {
    dest->x = src->x;
    dest->y = src->y;
}

void ava_copy_vector2i (const Ava_Vector2i* src, Ava_Vector2i* dest) {
    dest->x = src->x;
    dest->y = src->y;
}

void ava_copy_vector3f (const Ava_Vector3f* src, Ava_Vector3f* dest) {
    dest->x = src->x;
    dest->y = src->y;
    dest->z = src->z;
}

void ava_copy_vector3i (const Ava_Vector3i* src, Ava_Vector3i* dest) {
    dest->x = src->x;
    dest->y = src->y;
    dest->z = src->z;
}

Ava_Vector2i ava_convert_vector2f_to_vector2i (const Ava_Vector2f* src) {
    Ava_Vector2i res;

    res.x = (int) (src->x);
    res.y = (int) (src->y);

    return res;
}

Ava_Vector2f ava_convert_vector2i_to_vector2f (const Ava_Vector2i* src) {
    Ava_Vector2f res;

    res.x = (double) (src->x);
    res.y = (double) (src->y);

    return res;
}

Ava_Vector3i ava_convert_vector3f_to_vector3i (const Ava_Vector3f* src) {
    Ava_Vector3i res;

    res.x = (int) (src->x);
    res.y = (int) (src->y);
    res.z = (int) (src->z);

    return res;
}

Ava_Vector3f ava_convert_vector3i_to_vector3f (const Ava_Vector3i* src) {
    Ava_Vector3f res;

    res.x = (double) (src->x);
    res.y = (double) (src->y);
    res.z = (double) (src->z);

    return res;
}

Ava_Vector2f ava_convert_vector3f_to_vector2f (const Ava_Vector3f* src) {
    Ava_Vector2f res;

    res.x = src->x;
    res.y = src->y;

    return res;
}

Ava_Vector2i ava_convert_vector3i_to_vector2i (const Ava_Vector3i* src) {
    Ava_Vector2i res;

    res.x = src->x;
    res.y = src->y;

    return res;
}

double ava_get_magnitude_vector2f (const Ava_Vector2f* src) {
    return sqrt ((src->x * src->x) + (src->y * src->y));
}

double ava_get_magnitude_vector2i (const Ava_Vector2i* src) {
    return sqrt ((src->x * src->x) + (src->y * src->y));
}

double ava_get_magnitude_vector3f (const Ava_Vector3f* src) {
    return sqrt ((src->x * src->x) + (src->y * src->y) + (src->z * src->z));
}

double ava_get_magnitude_vector3i (const Ava_Vector3i* src) {
    return sqrt ((src->x * src->x) + (src->y * src->y) + (src->z * src->z));
}

char* ava_vector2f_to_string (const Ava_Vector2f* src) {
    int len = 0;

    len = snprint (NULL, len, "(%f, %f)", src->x, src->y);

    char* res = calloc (1, sizeof (*res) * len + 1);

    if (!res) {
        fprintf (stderr, "%s() error: virtual memory allocation failed.\n", __func__);
    }

    // write/validate struct values to res.
    if (snprintf (res, len + 1, "(%f, %f)", src->x, src->y) > len + 1) {
        fprintf(stderr, "%s() error: snprintf returned truncated result.\n", __func__);
        return NULL;
    }

    return res;
}

char* ava_vector2i_to_string (const Ava_Vector2i* src) {
    int len = 0;

    len = snprint (NULL, len, "(%d, %d)", src->x, src->y);

    char* res = calloc (1, sizeof (*res) * len + 1);

    if (!res) {
        fprintf (stderr, "%s() error: virtual memory allocation failed.\n", __func__);
    }

    // write/validate struct values to res.
    if (snprintf (res, len + 1, "(%d, %d)", src->x, src->y) > len + 1) {
        fprintf(stderr, "%s() error: snprintf returned truncated result.\n", __func__);
        return NULL;
    }

    return res;
}

char* ava_vector3f_to_string (const Ava_Vector3f* src) {
    int len = 0;

    len = snprint (NULL, len, "(%f, %f, %f)", src->x, src->y, src->z);

    char* res = calloc (1, sizeof (*res) * len + 1);

    if (!res) {
        fprintf (stderr, "%s() error: virtual memory allocation failed.\n", __func__);
    }

    // write/validate struct values to res.
    if (snprintf (res, len + 1, "(%f, %f, %f)", src->x, src->y, src->z) > len + 1) {
        fprintf(stderr, "%s() error: snprintf returned truncated result.\n", __func__);
        return NULL;
    }

    return res;
}

char* ava_vector3i_to_string (const Ava_Vector3i* src) {
    int len = 0;

    len = snprint (NULL, len, "(%d, %d, %d)", src->x, src->y, src->z);

    char* res = calloc (1, sizeof (*res) * len + 1);

    if (!res) {
        fprintf (stderr, "%s() error: virtual memory allocation failed.\n", __func__);
    }

    // write/validate struct values to res.
    if (snprintf (res, len + 1, "(%d, %d, %d)", src->x, src->y, src->z) > len + 1) {
        fprintf(stderr, "%s() error: snprintf returned truncated result.\n", __func__);
        return NULL;
    }

    return res;
}