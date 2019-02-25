/**
 * Let color be the following structure:
 *
 * struct color {
 *   int red;
 *   int green;
 *   int blue;
 * };
 *
 * (a) Write a declaration for a const variable named MEGENTA of
 * type struct color whose member have the value 255,0 and 255
 * respectively.
 *
 * (b) (C99) Repeat part (a), but use a designated initializer
 * that doesn't specify the value of the green, allowing it to
 * default to 0.
 */

 struct color {
     int red;
     int green;
     int blue;
 };

/** (a) **/
struct color MEGENTA = {255, 0, 255};

/** (b) **/
struct color MEGENTA = {.red = 255, .blue = 255};
