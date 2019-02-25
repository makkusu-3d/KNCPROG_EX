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

/** (a) **/
int area_function(struct shape s)
{
    if (s.shape_kind == RECTANGLE) {
        return s.u.rectangle.height * s.u.rectangle.width;
    } else if (s.shape_kind == CIRCLE) {
        r = s.u.circle.radius;
        return r*r*PI;
    }
}

/** (b) **/
struct shape modified_position(struct shape s, int x, int y)
{
    s.center.x += x;
    s.center.y += y;

    return s;
}

/** (c) **/
struct shape scale(struct shape s, double c)
{
    if(s.shape_kind == RECTANGLE) {
        s.u.rectangle.height *= c;
        s.u.rectangle.width  *= c;
    } else if (s.shape_kind == CIRCLE) {
        s.u.circle.radius *= c;
    }

    return s;
};
