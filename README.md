# c-console-game-engine
This project goal is to create a console game engine.

# Style Guide
This project style guide is based off this [website](https://www.cs.umd.edu/~nelson/classes/resources/cstyleguide/).

- Variable, constant, function, etc. names should be descriptive and use (snake_case) [https://en.wikipedia.org/wiki/Snake_case]. Example use `void print_name (char* name)` instead of `void printName (char* name)`.
- Indentation  should be 4 spaces.
- If variables have the same type they should be declared on the same line.
- (K&R style) [https://en.wikipedia.org/wiki/Indentation_style] should be used for indentation and bracing.
- #defined constances must used upper snake case. Example `#define MAX_LEN 10`.
- Code should be modular and simple to read.
- Avoid single line conditional and loops.
- Avoid global variables when unnecessary.
- Use `p->member` not `(*p).memeber` when accessing members of a pointer to a structure. Also do not place a space between the pointer and member (use `p->member` not `p -> member`).
- Use a line length of 80 characters, but this should not affect descriptiveness  of the code. For example if a function name would make the line go over the line length limit and their is better name for the funcion the name should take precidence.

## Code Organization
File should follow the Organization of:

1. `#include <>`
2. `#include ""`
3. `#defines`
4. Data Types
5. Globals
6. Function Prototypes
7. Code

The `main` function should either be the first or last function.

## Functions
- Input parameters must appear before output parameters.
- Annotatie helper functions with `static`. If they are only used in that header file then they should be marked `static`.
- Annotate unmodified parameters with `const`.
- Annotate external function with the `extern` keyword.