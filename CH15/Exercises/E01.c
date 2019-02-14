/**
 * Section 15.1 listed several advantages of dividing
 * a program into multiple source files.
 *
 * (a) Describe several other advantages
 * (b) Describe some disadvantages
 *
 * (a) splitting code responsibilities among programmers:
 *     It is not practical for more than one programmer
 *     make changes to one file at a time. So instead
 *     you have multiple files with a single programmer
 *     working on each one
 *
 *     Handling of project size:
 *     If the project becomes very large the splitting
 *     of the code will make it easier to handle and
 *     structure correctly
 *
 *     Simplifies the program into easier and more
 *     manageable sections
 *
 * (b) Cyclic dependencies, where headers need to
 *     #include each others work
 *
 *     May be over complicated for a small programs.
 *     It would be easier to manage a small program
 *     without splitting it.
 *
 *     You may face recursive inclusion of header files
 *     For example: File A asks for file B which asks
 *     for file C which asks for file A
 *
 *     Having more headers increases dependencies on
 *     source files
 */
