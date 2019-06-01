/**
 * Use a series of type definitions to simplify each of the
 * declarations in Exercise 8.
 *
 * (a) char  (*x[10])(int);
 *     ANS: typedef char Fcn(int);
 *          typedef Fcn  *Fcn_ptr;
 *          typedef Fcn_ptr Fcn_ptr_array[10];
 *          Fcn_ptr_array x;
 *
 *
 * (b) int   (*x(int))[5];
 *     ANS: typedef int Fcn [5];
 *          typedef Fcn *Fcn_ptr;
 *          typedef Fcn_ptr Fcn_ptr_Fcn(int);
 *          typedef Fcn_ptr_Fcn x
 *
 * (c) float (*(*x(void))(int);
 *     ANS: typedef float Fcn(int);
 *          typedef Fcn   *Fcn_ptr;
 *          typedef Fcn_ptr *Fcn_2(void);
 *          typedef Fcn_2 x;
 *
 * (d) void  (*x(int, void (*y)(int)))(int);
 *     ANS: typedef void Fcn(int);
 *          typedef Fcn *Fcn_Ptr;
 *          typedef Fcn_Ptr Var (arg1 , arg2);
 *          typedef arg1 int
 *          typedef arg2 *arg2_Fcn(int);
 *          typedef Var x;
 *          typedef arg2_Fcn y;
 */
