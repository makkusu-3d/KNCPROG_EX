/** see question in book **/

/** (a) **/
typedef enum {pawn, knight, bishop, rook, queen, king, empty} Piece;
typedef enum {black, white} Color ;

/** (b) **/
typedef struct {
    Piece;
    Color;
} square;

/** (c) **/
square board[8][8];

/** (d) **/
square board[8][8] = {{{rook, white},{knight,white},{bishop,white},{queen,white},
                       {king, white},{bishop,white},{knight,white},{rook, white}},
                      {{pawn, white},{pawn,  white},{pawn,  white},{pawn, white},
                       {pawn, white},{pawn,  white},{pawn,  white},{pawn, white}},
                      {{empty,black},{empty, black},{empty, black},{empty,black},
                       {empty,black},{empty, black},{empty, black},{empty,black}},
                      {{empty,black},{empty, black},{empty, black},{empty,black},
                       {empty,black},{empty, black},{empty, black},{empty,black}},
                      {{empty,black},{empty, black},{empty, black},{empty,black},
                       {empty,black},{empty, black},{empty, black},{empty,black}},
                      {{empty,black},{empty, black},{empty, black},{empty,black},
                       {empty,black},{empty, black},{empty, black},{empty,black}},
                      {{rook, black},{knight,black},{bishop,black},{queen,black},
                       {king, black},{bishop,black},{knight,black},{rook, black}},
                      {{pawn, black},{pawn,  black},{pawn,  black},{pawn, black},
                       {pawn, black},{pawn,  black},{pawn,  black},{pawn, black}}};
