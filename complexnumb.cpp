#include <iostream>
#include <math.h>
#include <gsl/gsl_complex.h>
#include <gsl/gsl_complex_math.h>


// compilation g++ -Wall -o complexnumb.cpp -lgsl -lgslcblas -lm


int main()
{

gsl_complex a;
gsl_complex b;
gsl_complex c;
GSL_SET_COMPLEX(&a, 2.0, 5.0);
GSL_SET_COMPLEX(&b, 3.0, 7.0);
GSL_SET_COMPLEX(&c, 6.0, 9.0);



       std::cout<< gsl_complex_arg(a);
       std::cout<< "\n";
       std::cout<< gsl_complex_abs(b);
       std::cout<< "\n";
       std::cout<<c.dat[0];
       std::cout<< "\n";
       std::cout<<c.dat[1];
       std::cout<< "\n";
  


return(0);
}
