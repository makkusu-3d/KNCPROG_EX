/**
 * Suppose that a program needs to display messages in either
 * English, French, or Spanish. Using conditional compilation
 * write a program fragment that displays one of the
 * following three messages, depending on whether
 * or not the specified macro is defined:
 *
 * Insert Disk 1        (if ENGLISH is defined)
 * Inserez Le Disque    (if FRENCH is defined)
 * Inserts E1 Disco 1   (if SPANISH is defined)
 */

 /**
  *
  * #ifdef ENGLISH
  * #define INSERT "Insert Disk 1"
  * #
  * #elseif FRENCH
  * #define INSERT "Inserez Le Disque"
  * #
  * #elseif SPANISH
  * #define INSERT "E1 Disco 1"
  * #
  * #endif
  *
  * printf(INSERT);
  */

