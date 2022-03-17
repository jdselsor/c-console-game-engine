#ifndef AVA_MORTI_ENGINE
#define AVA_MORTI_ENGINE

#include <Windows.h>

typedef struct Ava_Vector2f {
    double x, y;
} Ava_Vector2f;

typedef struct Ava_Vector2i {
    int x, y;
} Ava_Vector2i;

typedef struct Ava_Vector3f {
    double x, y, z;
} Ava_Vector3f;

typedef struct Ava_Vector3i {
    int x, y, z;
} Ava_Vector3i;

// Vector2f functions
Ava_Vector2i ava_convert_vector2f_to_vector2i (const Ava_Vector2f src);
double ava_get_magnitude_vector2f (const Ava_Vector2f src);
char* ava_vector2f_to_string (const Ava_Vector2f src);

BOOL ava_vector2f_are_equal (const Ava_Vector2f a, const Ava_Vector2f b);
Ava_Vector2f ava_vector2f_addition (const Ava_Vector2f a, const Ava_Vector2f b);
Ava_Vector2f ava_vector2f_scalar (const double scalar, const Ava_Vector2f a);
double ava_vector2f_dot (const Ava_Vector2f a, const Ava_Vector2f b);

// Vector2i functions
Ava_Vector2f ava_convert_vector2i_to_vector2f (const Ava_Vector2i src);
double ava_get_magnitude_vector2i (const Ava_Vector2i src);
char* ava_vector2i_to_string (const Ava_Vector2i src);

BOOL ava_vector2i_are_equal (const Ava_Vector2i a, const Ava_Vector2i b);

// Vector3f functions
Ava_Vector3i ava_convert_vector3f_to_vector3i (const Ava_Vector3f src);
Ava_Vector2f ava_convert_vector3f_to_vector2f (const Ava_Vector3f src);
double ava_get_magnitude_vector3f (const Ava_Vector3f src);
char* ava_vector3f_to_string (const Ava_Vector3f src);

BOOL ava_vector3f_are_equal (const Ava_Vector3f a, const Ava_Vector3f b);

// Vector3i functions
Ava_Vector3f ava_convert_vector3i_to_vector3f (const Ava_Vector3i src);
Ava_Vector2i ava_convert_vector3i_to_vector2i (const Ava_Vector3i src);
double ava_get_magnitude_vector3i (const Ava_Vector3i src);
char* ava_vector3i_to_string (const Ava_Vector3i src);

BOOL ava_vector3i_are_equal (const Ava_Vector3i a, const Ava_Vector3i b);

#endif