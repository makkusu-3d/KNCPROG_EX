/**
 * Write a program that finds the "smallest" and "largest"
 * in a series of words. After the user enters the words
 * the program will determine which words would come first
 * and last if the words were listed in dictionary order.
 * The program must stop accepting input when the user
 * enters a four-letter word. Assume that no word is
 * more than 20 letters long. An interactive session
 * with the program might look like this:
 *
 * Enter word: dog
 * Enter word: zebra
 * Enter word: rabbit
 * Enter word: catfish
 * Enter word: walrus
 * Enter word: cat
 * Enter word: fish
 *
 * Smallest word: cat
 * Largest word: zebra
 *
 * Hint: Use two strings named smallest_word and largest_word
 * "smallest" and "largest" words entered so far. Each time
 * the user enters a new word, use strcmp to compare it with
 * smallest_word; if the new word is "smaller", use strcpy
 * to save it in smallest_word. Do a similar comparison
 * with largest_word. Use strlen to determine when the user
 * has entered a four-letter word.
 */

 // Preprocessing Directives
 #define STR_LEN 21
 #include <stdio.h>
 #include <string.h>

 // External Variables
 char smallest_word[STR_LEN] = "xxxxxxxxxxxxxxxxxxxx";
 char largest_word[STR_LEN]  = "";

 // Function Prototypes
  void smallest_largest(char *smallest_word, char *largest_word);

 // Function Definitions
 int main(void)
 {
    smallest_largest(smallest_word, largest_word);

    return 0;
 }

 void smallest_largest(char *smallest_word, char *largest_word)
 {
    for(;;) {
        char str[STR_LEN] = "";

        printf("Enter word: ");
        scanf("%s", str);

        if (strlen(str) == 4) {
            break;
        }

        // Return Value
        // 0                | s1 and s2 are equal
        // Negative Integer | The stopping character in s1 was less than the stopping character in s2
        // Positive Integer | The stopping character in s1 was greater than the stopping character in s2

        if (strcmp(str, smallest_word) < 0) {
            strcpy(smallest_word, str);
        }

        if (strcmp(str, largest_word) > 0) {
            strcpy(largest_word, str);
        }
    }

    printf("Smallest Word: %s\n", smallest_word);
    printf("Largest Word:  %s\n", largest_word);

 }
