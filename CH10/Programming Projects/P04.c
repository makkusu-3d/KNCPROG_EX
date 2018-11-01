/**
 * Modify the poker.c program of section 10.5 by having it
 * recognise an additional category. "royal flush"
 * (ace, king, queen, jack, ten of the same suit). A royal
 * flush ranks higher than all other hands
 */

/* Classifies a poker hand */

#include <stdbool.h>    /* C99 only */
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

// External Variable
int hand[5][2];

bool royal_flush, straight, flush, four, three;
int pairs;  /* can be 0, 1, or 2 */
int i, j, check;

/* prototypes */
void initialize_array(void);
void read_cards(void);
void print_array(void);
void analyze_hand(void);
void print_result(void);
int part_factorial(int);
void wipe_array(void);

/**********************************************************
 * main: Calls read_cards, analyse_hand, and print_result *
 *       repeatedly                                       *
 **********************************************************/
int main(void)
{
    for (;;) {
        initialize_array();
        read_cards();
        // print_array();
        analyze_hand();
        print_result();
        wipe_array();
    }
}

/**********************************************************
 * read_cards: Reads the cards into the external          *
 *             variables num_in_rank and num_in_suit;     *
 *             checks for bad cards and duplicate cards.  *
 **********************************************************/
void read_cards(void)
{
    // bool card_exists[NUM_RANKS][NUM_SUITS];
    char ch, rank_ch, suit_ch;
    int rank, suit;
    bool bad_card;
    int cards_read = 0;
    int check = 0;

    while (cards_read++ < NUM_CARDS) {
        bad_card = false;

        // print_array();

        printf("Enter a card: ");

        rank_ch = getchar();

        switch (rank_ch) {
            case '0':            exit(EXIT_SUCCESS);
            case '2':            rank = 0; break;
            case '3':            rank = 1; break;
            case '4':            rank = 2; break;
            case '5':            rank = 3; break;
            case '6':            rank = 4; break;
            case '7':            rank = 5; break;
            case '8':            rank = 6; break;
            case '9':            rank = 7; break;
            case 't': case 'T':  rank = 8; break;
            case 'j': case 'J':  rank = 9; break;
            case 'q': case 'Q':  rank = 10; break;
            case 'k': case 'K':  rank = 11; break;
            case 'a': case 'A':  rank = 12; break;
            default:             bad_card = true;
        }

        suit_ch = getchar();
        switch (suit_ch) {
            case 'c': case 'C':  suit = 0; break;
            case 'd': case 'D':  suit = 1; break;
            case 'h': case 'H':  suit = 2; break;
            case 's': case 'S':  suit = 3; break;
            default:             bad_card = true;
        }
        while ((ch = getchar()) != '\n')
            if (ch != ' ') bad_card = true;


        if (bad_card) {
            printf("Bad card; ignored.\n");
            // Requirement to decrement the card_read to discard
            // that increase
            cards_read--;
            // Jump to end of loop to skip the array assignment
            continue;
        }

        //printf("rank: %d ", rank);
        //printf("suit: %d ", suit);

        //Input the rank and suit into the array by row and column positions
        hand[i][0] = rank;  // E.g 5c -> [0][0] = 3 | [0][1] = 0
        hand[i][1] = suit;  // E.g 5c -> [1][0] = 3 | [1][1] = 0

        // Searching the array while ignoring the current input values.
        for (check = 0; check < 5; check++) {
            if (check == i) {continue;}
            if (hand[i][0] == hand[check][0] && hand[i][1] == hand[check][1]) {
                printf("Duplicate card; ignored.\n");
                // Requirement to decrement the card_read to discard
                // that increase
                cards_read--;
                // Used a goto to jump out of the for loop and avoid
                // the increment of i.
                goto end_loop;
            }
        }

        i++;
        //printf("card read %d\n", cards_read);
        end_loop:;
    }
}

/***********************************************************
 * analyse_hand: Determines whether the hand contains a    *
 *               straight, a flush, four-of-a-kind,        *
 *               and/or three-of-a-kind; determines the    *
 *               numbers of pairs; stores the results into *
 *               the external variables straight, flush,   *
 *               four, three, and pairs.                   *
 ***********************************************************/

void analyze_hand(void)
{
    int flush_check, rank_check, rank_sum, royal_flush_sum = 0;
    int i = 0;

    royal_flush = false;
    straight    = false;
    flush       = true;
    four        = false;
    three       = false;
    pairs       = 0;

    // check for flush

    flush_check = hand[i][1];
    for (i = 1; i < NUM_SUITS; i++) {
        if (hand[i][1] != flush_check) {
            flush = false;
        }
    }

    // *************************************************************** //
    // Check for royal flush
    // (ace, king, queen, jack, ten of the same suit)

                            // 8 9 10 11 12
    int royal_flush_array[5] = {0,0,0,0,0};
    if (flush == true) {
        for (i = 0; i < NUM_CARDS; i++) {
            if (hand[i][0] >= 8 && hand[i][0] <= 12) {
                royal_flush_array[(hand[i][0] - 8)] = 1;
            }
        }
    }
    for (i = 0; i < 5; i++) {
        if (royal_flush_array[i] = 1 ) {
            royal_flush_sum++;
        }
    }

    if (royal_flush_sum == 5) {
        royal_flush = true;
    }

    // **************************************************************** //

    // check for straight

    rank_check = 0;
    for (i = 0; i < NUM_CARDS; i++) {
        if (hand[i][0] > rank_check) {
            rank_check = hand[i][0];
        }
    }

    for (i = 0; i < NUM_CARDS; i++) {
        rank_sum *= hand[i][0];
    }

    if (rank_sum == (part_factorial(rank_check))) {
        straight = true;
    }

    // check for 4-of-a-kind, 3-of-a-kind, and pairs

    int array[13] = {false}, test_kind, pair = 0;


    for (i = 0; i < NUM_CARDS; i++) {
        array[hand[i][0]]++;
    }

    for (i = 0; i < 13; i++) {
        if ( array[i] == 3 ) {
            test_kind = 3;
        } else if ( array[i] == 4) {
            test_kind = 4;
        } else if ( array[i] == 2) {
            pair++;
            printf(" pair: %d", pair);
        }
    }

    if (test_kind == 3) {three = true;}
    if (test_kind == 4) {four  = true;}
}

/*********************************************************
 * print_result: Prints the classification of the hand,  *
 *               based on the values of the external     *
 *               variables straight, flush, four, three, *
 *               and pairs.                              *
 *********************************************************/
void print_result(void)
{
    if (royal_flush) printf("Royal flush");
    else if (straight && flush) printf("Straight flush");
    else if (four)         printf("Four of a kind");
    else if (three &&
             pairs == 1)   printf("Full house");
    else if (flush)        printf("Flush");
    else if (straight)     printf("Straight");
    else if (three)        printf("Three of kind");
    else if (pairs == 2)   printf("Two pairs");
    else if (pairs == 1)   printf("Pair");
    else                   printf("High card");

    printf("\n\n");
}

/*********************************************************
 * print_array: Prints out the array for testing. Reads  *
 *              hand array that is set globally          *
 *********************************************************/
void print_array(void)
{
    int i,j;
    printf("\n");
    for (i = 0; i < 5; i++) {
        printf("\n");
        for (j = 0; j < 2; j++) {
            printf("%d ", hand[i][j]);
        }
    }
    printf("\n\n");
}

/***********************************************************
 * part_factorial: returns the calculated multiplied range *
 *                 of number: rank_check * n - 1 * n - 2.. *
 *                 with the number of multiplications      *
 *                 based on the NUM_CARDS size .           *
 **********************************************************/
int part_factorial(int rank_check)
{
    int i, sum = rank_check;
    for (i = 0; i < NUM_CARDS - 1; i++) {
        rank_check *= sum - (i + 1);
    }
    return rank_check;
}
/***********************************************************
 * wipe_array:     writes zero to all elements in the hand  *
 *                 array.                                  *
 ***********************************************************/
void wipe_array(void)
{
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 2; j++) {
            hand[i][j] = 0;
        }
    }
}
/************************************************************
 * initialize_array:  writes specified value to all element *
 ************************************************************/
void initialize_array(void) {
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 2; j++) {
            hand[i][j] = 20;
        }
    }
}
