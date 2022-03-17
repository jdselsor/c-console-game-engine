#ifndef AVA_MORTI_ENGINE
#define AVA_MORTI_ENGINE

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

Ava_Vector2i ava_convert_vector2f_to_vector2i (const Ava_Vector2f* src);
Ava_Vector2f ava_convert_vector2i_to_vector2f (const Ava_Vector2i* src);
Ava_Vector3i ava_convert_vector3f_to_vector3i (const Ava_Vector3f* src);
Ava_Vector3f ava_convert_vector3i_to_vector3f (const Ava_Vector3i* src);

Ava_Vector2f ava_convert_vector3f_to_vector2f (const Ava_Vector3f* src);
Ava_Vector2i ava_convert_vector3i_to_vector2i (const Ava_Vector3i* src);

double ava_get_magnitude_vector2f (const Ava_Vector2f* src);
double ava_get_magnitude_vector2i (const Ava_Vector2i* src);
double ava_get_magnitude_vector3f (const Ava_Vector3f* src);
double ava_get_magnitude_vector3i (const Ava_Vector3i* src);

char* ava_vector2f_to_string (const Ava_Vector2f* src);
char* ava_vector2i_to_string (const Ava_Vector2i* src);
char* ava_vector3f_to_string (const Ava_Vector3f* src);
char* ava_vector3i_to_string (const Ava_Vector3i* src);

#endif