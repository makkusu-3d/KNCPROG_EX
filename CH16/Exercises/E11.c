/** See Question in the book **/

struct point{int x, y};
struct rectangle { struct point upper_left, lower-right};

/** (a) Compute the area of r **/
int area_function(struct rectangle r)
{
    int x, y;

    x = r.lower_right.x - r.upper_left.x;
    y = r.upper_left.y - r.lower_right.y;

    return x * y;
}

/** (b) Compute the center of r, returning it as a point value. If
 *   either the x or y coordinate of the center isn't an integer,
 *   store its truncated value in the point structure.
 */

struct point centre_function(struct rectangle r)
{
    int x, y;
    struct point p;

    p.x = r.upper_left.x  + ((r.lower_right.x - r.upper_left.x) / 2);
    p.y = r.lower_right.y + ((r.upper_left.y - r.lower_right.y) / 2);

    return p;
};

/**
 * (c) Move r by x units in the x direction and y units in the y
 *  direction, returning the modified version of r. (x and y are
 *  additional arguments to the function.)
 */

struct rectangle move_rectangle(struct rectangle r, int x, int y)
{
    r.lower_right.x + x;
    r.upper_left.x  + x;

    r.lower_right.y + y;
    r.upper_left.y  + y;

    return r;
};

/**
 * (d) Determine whether a point p lies within r, returning true
 *  or false . (p is an additional argument of type struct point.)
 */

bool is_point_in_rectangle(struct rectangle r, struct point p)
{
    int i;

    bool in_rectangle[2] = {};
    bool true_false = true;

    if (p.x > r.lower_right.x && p.x < r.upper_left.x) {
        in_rectangle[0] = true;


    if (p.y > r.upper_left.y && p.y < r.lower_right.y) {
        in_rectangle[1] = true;

    for (i = 0; i < 2; i++) {
        if (in_rectangle[i] == false) {
            true_false = false;
        }
    }
    return true_false;
}
