/**
 * Write the following function, which evaluates a chess position:
 *
 * int evaluate_position(char board[8] [8]);
 *
 * board represents a configuration of pieces on a chessboard, where
 * the letters K, Q, R, B, N, P represent White pieces and the letters
 * k, q, r, b, n, p represent Black pieces. evaluate_position should
 * sum the values of the White pieces (Q = 9, R = 5, B = 3, N = 3,
 * P = 1). It should also sum the values of the black pieces
 * (done in a similar way). The function will return the difference
 * between the two numbers. This value will be positive if White
 * has an advantage in material and negative if Black has an
 * advantage.
 */


 #include <stdio.h>
 int i,j;
 char chess_array[8][8], character;

 int evaluate_position(char board[8] [8]); // Function Prototype

 int main(void)
 {
     printf("Enter a 8 x 8 chess board\n");
     for (i = 0; i < 8; i++) {
        printf("Enter chess row %d: ", i + 1);
        for (j = 0; j < 8; j++) {
            scanf(" %c", &character);
            chess_array[i][j] = character;
        }
     }

     /*
     printf("Testing if the chess array works: ");
     for (i = 0; i < 8; i++) {
        printf("\n");
        for (j = 0; j < 8; j++) {
            printf("%c", chess_array[i][j]);
        }
     }
     */

     printf("\nReturn value for function: %d", evaluate_position(chess_array));

     return 0;
 }

 int evaluate_position(char board[8] [8])
 {
     int i, j, white_piece = 0, black_piece = 0;

     for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            switch(board[i][j]){
                case 'Q': white_piece += 9; break;
                case 'R': white_piece += 5; break;
                case 'B': white_piece += 3; break;
                case 'N': white_piece += 3; break;
                case 'P': white_piece += 1; break;
                case 'q': black_piece += 9; break;
                case 'r': black_piece += 5; break;
                case 'b': black_piece += 3; break;
                case 'n': black_piece += 3; break;
                case 'p': black_piece += 1; break;
            }
        }
        return white_piece - black_piece;
     }
 }
