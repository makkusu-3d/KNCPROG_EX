/**
 * Let GENERIC_MAX be the following macro:
 *
 * #define GENERIC_MAX(type)        \
 * type type##_max(type x, type y)  \
 * {                                \
 *    return x > y ? x : y;         \
 * }
 *
 * (a) Show the pre-processor's expansion of GENERIC_MAX(long)
 * (b) Explain why GENERIC_MAX doesn't work for basic types
 *     such as unsigned long.
 * (c) Describe a technique that would allow us to use
 *     GENERIC_MAX with basic types such as unsigned long.
 *     Hint: Don't change the definition of GENERIC_MAX.
 *
 *  ----------------------------------------------------------
 *
 * (a) Expansion of GENERIC_MAX(long):
 *     long long_max(long x, long y)
 *     {
 *        return x > y ? x : y;
 *     }
 *
 * (b) Because GENERIC_MAX only has one argument input
 *
 * (c) Use a typedef to give a identifier name to basic type such as
 *     unsigned long
 *
 *     Example:
 *
 *     typedef unsigned long Unsigned_Long
 *
 */
