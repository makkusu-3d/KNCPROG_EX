/** see question in book **/

struct shape {
    int shape_kind;         /* RECTANGLE or CIRCLE  */
    struct point center;    /* coordinates of center */
    union {
        struct {
            int height, width;
        } rectangle;
        struct {
            int radius;
        } circle;
    } u;
} s;

/**
 * (a) Is not legal unless RECTANGLE has been defined (#defined)
 * as a preprocessor and given an integer value.
 * For example
 * #define RECTANGLE 0
 * #define CIRCLE 1
 *
 * (b) This legal as this designates to the x variable
 * in the center structure which is contained in the s
 * structure
 *
 * (c) This is not legal as it does designate the union
 * and the contained rectangle or circle structures
 * it should be:
 * s.u.rectangle.height = 25;
 *
 * (d) This is legal
 *
 * (e) This is not legal and can fixed by changing it to the
 * following:
 * s.u.circle.radius = 5;
 *
 * (e) This is not legal and can fixed by changing it to the
 * following:
 * s.u.circle.radius = 5;
 */
