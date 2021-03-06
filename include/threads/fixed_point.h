#define F (1<< 14)  //fixed point 1
#define INT_MAX ((1<< 31) -1)
#define INT_MIN (-(1<< 31))
// x and y denote fixed_pointnumbers in 17.14 format
// n is an integer
int int_to_fp(int n);
int fp_to_int_round(int x);
int fp_to_int(int x);
int add_fp(int x,int y);
int add_mixed(int x, int n);
int sub_fp(int x, int y);
int sub_mixed(int x, int n);
int mult_fp(int x, int y);
int mult_mixed(int x, int y);
int div_fp(int x, int y);
int div_mixed(int x, int n);