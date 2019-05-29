/**
 * List the storage duration (static or automatic), scope (block
 * or file), and linkage (internal, external or none) of each variable
 * and parameter in the following file:
 */

extern float a;             // storage duration:    static
                            // scope:               file
                            // linkage:             external

void f(register double b)   // storage duration:    auto
                            // scope:               block
                            // linkage:             No linkage
{
    static int c;           // storage duration:    static
                            // scope:               block
                            // linkage:             No linkage

    auto char d;            // storage duration:    auto
                            // scope:               block
                            // linkage:             No linkage
}
