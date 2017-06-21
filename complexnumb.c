#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <gsl/gsl_complex.h>
#include <gsl/gsl_complex_math.h>


// compilation gcc -Wall -o zesp complexnumb.c -lgsl -lgslcblas -lm


int main()
{

gsl_complex a;
gsl_complex b;
gsl_complex c;
GSL_SET_COMPLEX(&a, 2.0, 5.0);
GSL_SET_COMPLEX(&b, 3.0, 7.0);
GSL_SET_COMPLEX(&c, 6.0, 9.0);



       printf ("gsl_complex_arg(a)=%f\n", gsl_complex_arg(a));
       printf ("gsl_complex_abs(b)=%f\n", gsl_complex_abs(b));
       printf ("real c = %f, im c = %f\n", c.dat[0],c.dat[1]);


return(0);
}
