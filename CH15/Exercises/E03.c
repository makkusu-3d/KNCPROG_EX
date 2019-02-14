/**
 * We saw that writing #include <file> instead of
 * #instead "file" may not work if file is one that
 * we've written. Would there be any problem
 * with writing #include "file" instead of #includes
 * <file> if file is a system header?
 *
 * Yes there would be a problem, during preprocessing the
 * compiler will look in the local directory for the
 * system header not the global include paths.
 */
