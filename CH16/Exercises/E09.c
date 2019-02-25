/** See book for questions **/

struct color {
    int red;
    int green;
    int blue;
};

/** function (a) **/

struct color make_color(int red, int green, int blue)
{
    struct color r = {.red = red, .green = green, .blue = blue};

    return r;
}

/** function (b) **/

int getRed(struct color c)
{
    return c.red;
}

/** function (c) **/

bool equal_color(struct color color1, struct color color2)
{
    int i;
    bool equal = true;

    /** Created function to cycle through the color structure **/
    int subscript_structure(struct color c, int i)
    {
        switch(i) {
            case 0: return c.red;
            case 1: return c.green;
            case 2: return c.blue;
        }
    }

    for (i = 0; i < 3; i++) {
        if subscript_structure(color1,i) != subscript_structure(color2,i) {
            equal = false;
        }
    }

    return equal;
}

/** function (d) **/

/** Possible could be simplified if you can point to member of an structure **/
struct color brighter(struct color c)
{
    int i;
    bool zero = true;

    /** Created function to cycle through the color structure **/
    int subscript_structure(struct color c, int i)
    {
        switch(i) {
            case 0: return c.red;
            case 1: return c.green;
            case 2: return c.blue;
        }
    }

    for (i = 0; i < 3; i++) {
        if (subscript_structure(c,i) > 0) {
            zero = false;
        }
    }

    if (zero = true) {
        c.red = c.green = c.blue = 3;
    } else {
        for (i = 0; i < 3; i++) {
            if (subscript_structure(c,i) > 0 && subscript_structure(c,i) < 3) {
                switch(i) {
                    case 0: c.red   = 3 / 0.7; break;
                    case 1: c.green = 3 / 0.7; break;
                    case 2: c.blue  = 3 / 0.7; break;
                }
            } else {
                switch(i) {
                    case 0: c.red   /= 0.7; break;
                    case 1: c.green /= 0.7; break;
                    case 2: c.blue  /= 0.7; break;
                }
            }

        }
        for (i = 0; i < 3; i++) {
            if (subscript_structure(c,i) > 255) {
                switch(i) {
                    case 0: c.red   = 255; break;
                    case 1: c.green = 255; break;
                    case 2: c.blue  = 255; break;
                }
            }
        }
    }
    return c;
}

/** (d) **/

struct color darker(struct color c)
{
    c.red   = (int) c.red   * 0.7;
    c.green = (int) c.green * 0.7;
    c.blue  = (int) c.blue  * 0.7;

    return c;
};
