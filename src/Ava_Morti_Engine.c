#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "Ava_Morti_Engine.h"

// Vector2f functions
Ava_Vector2i ava_convert_vector2f_to_vector2i (const Ava_Vector2f src) {
    Ava_Vector2i res;

    res.x = (int) (src.x);
    res.y = (int) (src.y);

    return res;
}

double ava_get_magnitude_vector2f (const Ava_Vector2f src) {
    return sqrt ((src.x * src.x) + (src.y * src.y));
}

char* ava_vector2f_to_string (const Ava_Vector2f src) {
    int len = 0;

    len = snprintf (NULL, len, "(%f, %f)", src.x, src.y);

    char* res = calloc (1, sizeof (*res) * len + 1);

    if (!res) {
        fprintf (stderr, "%s() error: virtual memory allocation failed.\n", __func__);
    }

    // write/validate struct values to res.
    if (snprintf (res, len + 1, "(%f, %f)", src.x, src.y) > len + 1) {
        fprintf(stderr, "%s() error: snprintf returned truncated result.\n", __func__);
        return NULL;
    }

    return res;
}

BOOL ava_vector2f_are_equal (const Ava_Vector2f a, const Ava_Vector2f b) {
    if (a.x == b.x && a.y == b.y) {
        return TRUE;
    }

    return FALSE;
}

Ava_Vector2f ava_vector2f_addition (const Ava_Vector2f a, const Ava_Vector2f b) {
    Ava_Vector2f res;

    res.x = a.x + b.x;
    res.y = a.y + b.y;

    return res;
}

Ava_Vector2f ava_vector2f_scalar (const double scalar, const Ava_Vector2f a) {
    Ava_Vector2f res;

    res.x = scalar * a.x;
    res.y = scalar * a.y;

    return res;
}

double ava_vector2f_dot (const Ava_Vector2f a, Ava_Vector2f b) {
    return (a.x * b.x) + (a.y * b.y);
}

// Vector2i functions
Ava_Vector2f ava_convert_vector2i_to_vector2f (const Ava_Vector2i src) {
    Ava_Vector2f res;

    res.x = (double) (src.x);
    res.y = (double) (src.y);

    return res;
}

double ava_get_magnitude_vector2i (const Ava_Vector2i src) {
    return sqrt ((src.x * src.x) + (src.y * src.y));
}

char* ava_vector2i_to_string (const Ava_Vector2i src) {
    int len = 0;

    len = snprintf (NULL, len, "(%d, %d)", src.x, src.y);

    char* res = calloc (1, sizeof (*res) * len + 1);

    if (!res) {
        fprintf (stderr, "%s() error: virtual memory allocation failed.\n", __func__);
    }

    // write/validate struct values to res.
    if (snprintf (res, len + 1, "(%d, %d)", src.x, src.y) > len + 1) {
        fprintf(stderr, "%s() error: snprintf returned truncated result.\n", __func__);
        return NULL;
    }

    return res;
}

BOOL ava_vector2i_are_equal (const Ava_Vector2i a, const Ava_Vector2i b) {
    if (a.x == b.x && a.y == b.y) {
        return TRUE;
    }

    return FALSE;
}

// Vector3f functions
Ava_Vector3i ava_convert_vector3f_to_vector3i (const Ava_Vector3f src) {
    Ava_Vector3i res;

    res.x = (int) (src.x);
    res.y = (int) (src.y);
    res.z = (int) (src.z);

    return res;
}

Ava_Vector2f ava_convert_vector3f_to_vector2f (const Ava_Vector3f src) {
    Ava_Vector2f res;

    res.x = src.x;
    res.y = src.y;

    return res;
}

double ava_get_magnitude_vector3f (const Ava_Vector3f src) {
    return sqrt ((src.x * src.x) + (src.y * src.y) + (src.z * src.z));
}

char* ava_vector3f_to_string (const Ava_Vector3f src) {
    int len = 0;

    len = snprintf (NULL, len, "(%f, %f, %f)", src.x, src.y, src.z);

    char* res = calloc (1, sizeof (*res) * len + 1);

    if (!res) {
        fprintf (stderr, "%s() error: virtual memory allocation failed.\n", __func__);
    }

    // write/validate struct values to res.
    if (snprintf (res, len + 1, "(%f, %f, %f)", src.x, src.y, src.z) > len + 1) {
        fprintf(stderr, "%s() error: snprintf returned truncated result.\n", __func__);
        return NULL;
    }

    return res;
}

BOOL ava_vector3f_are_equal (const Ava_Vector3f a, const Ava_Vector3f b) {
    if (a.x == b.x && a.y == b.y && a.z == b.z) {
        return TRUE;
    }

    return FALSE;
}

// Vector3i functions
Ava_Vector3f ava_convert_vector3i_to_vector3f (const Ava_Vector3i src) {
    Ava_Vector3f res;

    res.x = (double) (src.x);
    res.y = (double) (src.y);
    res.z = (double) (src.z);

    return res;
}

Ava_Vector2i ava_convert_vector3i_to_vector2i (const Ava_Vector3i src) {
    Ava_Vector2i res;

    res.x = src.x;
    res.y = src.y;

    return res;
}

double ava_get_magnitude_vector3i (const Ava_Vector3i src) {
    return sqrt ((src.x * src.x) + (src.y * src.y) + (src.z * src.z));
}

char* ava_vector3i_to_string (const Ava_Vector3i src) {
    int len = 0;

    len = snprintf (NULL, len, "(%d, %d, %d)", src.x, src.y, src.z);

    char* res = calloc (1, sizeof (*res) * len + 1);

    if (!res) {
        fprintf (stderr, "%s() error: virtual memory allocation failed.\n", __func__);
    }

    // write/validate struct values to res.
    if (snprintf (res, len + 1, "(%d, %d, %d)", src.x, src.y, src.z) > len + 1) {
        fprintf(stderr, "%s() error: snprintf returned truncated result.\n", __func__);
        return NULL;
    }

    return res;
}

BOOL ava_vector3i_are_equal (const Ava_Vector3i a, const Ava_Vector3i b) {
    if (a.x == b.x && a.y == b.y && a.z == b.z) {
        return TRUE;
    }

    return FALSE;
}
