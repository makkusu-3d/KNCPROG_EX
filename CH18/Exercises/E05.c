/**
 * State whether each of the following statements is true or false
 * Justify each answer.
 *
 * (a) Every variable with static storage duration has file scope
 *     ANS: False - Variables declared in a block even with
 *          static storage duration does not have file scope
 *
 * (b) Every variable declared inside a function has no linkage
 *     ANS: False - Variables declared with extern will have
 *          external linkage
 *
 * (c) Every variable with internal linkage has static storage
 *     duration
 *     ANS: True - To be internal the variable must be static
 *
 *
 * (d) Every parameter has block scope
 *     ANS: True - Since parameters are declared in the function scope
 */
