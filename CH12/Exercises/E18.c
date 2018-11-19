/**
 * Write the evaluate_position function described in Exercise
 * 13 of Chapter 9. Use pointer arithmetic - not subscripting
 * to visit array elements. Use a single loop instead of nested
 * loops
 */

 // Preprocessing Directives
 #include <stdio.h>

 // External Variables
 int i,j;
 char chess_array[8][8], character;

 // Function Prototype
 int evaluate_position_pointer_arithmetic(char *);

 // Function Definition
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

     printf("\nReturn value for function: %d", evaluate_position_pointer_arithmetic(chess_array));

     return 0;
 }

 // Modified evaluate position function with pointer arithmetic
 int evaluate_position_pointer_arithmetic(char *p)
 {
     int white_piece = 0, black_piece = 0;
     char *a = p;

     for (;;p++)
     {
         printf("white piece: %d\n", white_piece);
         printf("black_piece: %d\n", black_piece);

         if ( !(((int)*p >= 65 && (int)*p <= 90) || ((int)*p >= 97 && (int)*p <= 122) || (int)*p == 46) ) {
            return white_piece - black_piece;
         }
         switch(*p){
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
 }

 // Original evaluate position function
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
