/** see question in book **/

// char   -> 1 byte
// int    -> 4 bytes
// double -> 8 bytes

union {
    double a;       // -> 8 byte
    struct {        
        char b[4];  // -> 4 bytes
        double c;   // -> 8 bytes -> 16 bytes
        int d;      // -> 4 bytes
    } e;
    char f[4];      // -> 4 bytes
} u;


/** The compiler leaves 16 bytes for u **/
