#include <iostream>
#include <gsl/gsl_rng.h>
#include <stack>
#include <time.h>

int
main (void)
{
std::stack <unsigned long int> st1;  
  const gsl_rng_type * T;
  gsl_rng * r;

  int i, n = 10;

  gsl_rng_env_setup();

  T = gsl_rng_random_bsd;
  r = gsl_rng_alloc (T);
  gsl_rng_set(r,time(0));

  for (i = 0; i < n; i++)
    {
      unsigned long int u = gsl_rng_get (r);
      std::cout<<u<<"\n";
      st1.push(u);
    }

  std::cout<< st1.top()<<"\n";
  st1.pop();
  std::cout<< st1.top()<<"\n";
  std::cout<<gsl_rng_name(r)<<"\n";
 // std::cin.get();
  gsl_rng_free (r);

  return 0;
}
