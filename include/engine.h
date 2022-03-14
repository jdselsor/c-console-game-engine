typedef struct Engine_Vector2 {
    int x, y;
} Engine_Vector2;

// TODO: Add functionallity to this.
//      Copy vector2 functions.
//      Conversions between vector2 and vector3.
typedef struct Engine_Vector2d {
    double x, y;
} Engine_Vector2d;

/*
    Function: engine_create_vector
    ------------------------------
    Creates a new vector using x, y.

    x: The x component of the vector.
    y: The y component of the vector.

    return: A new vector composed of x, y.
*/
Engine_Vector2 engine_create_vector2 (const int x, const int y);

/*
    Function: engine_copy_vector
    ----------------------------
    Copys the vector v1 into v2.

    v1: The vector that is to be copied into v2.
    v2: The vector that will containe the data from v1.
*/
void engine_copy_vector2 (const Engine_Vector2* v1, Engine_Vector2* v2);

/*
    Function: engine_get_magnitude
    ------------------------------
    Gets the magnitude of the vector v.

    v: The vector to get the magnitude of.

    return: The magnitude of the vector v.
*/
double engine_get_magnitude (const Engine_Vector2* v);

/*
    Function: engine_get_distance
    -----------------------------
    Gets the distance between two vectors a and b.

    a: The frist vector.
    b: The second vector.

    return: The distance between the vector a and b.
*/
double engine_get_distance (const Engine_Vector2* a, const Engine_Vector2* b);

/*
    Function: engine_get_angle
    --------------------------
    Gets the angle of the vector v and the x-axis.

    v: The vector.

    return: The angle between the vector v and the a-axis.
*/
double engine_get_angle (const Engine_Vector2* v);

/*
    Function: engine_vector_to_string
    ---------------------------------
    Creates a string representation of the vector v.

    v: The vector.

    return: The string representation of the vector v.
*/
char* engine_vector_to_string (const Engine_Vector2 *v);