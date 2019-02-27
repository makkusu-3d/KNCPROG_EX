/** see question in book **/

enum {NORTH, SOUTH, EAST, WEST} direction;

int x,y;

switch(direction) {
    case NORTH: y--; break;
    case SOUTH: y++; break;
    case  EAST: x++; break;
    case  WEST: x--; break;
    default:         break;
}
