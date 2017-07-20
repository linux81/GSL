#include <stdio.h>
#include <stdlib.h>
#include <gsl/gsl_histogram.h>
// compilation gcc -Wall -o gslhis1  histogram.c -lgsl -lgslcblas -lm
int
main (void)
{

  FILE *plik;
      if ((plik=fopen("roz1.txt","r"))==NULL) {
       fprintf(stderr,"Nie otworzyc pliku\n");
       return(-1);}
    double x;
    gsl_histogram * h = gsl_histogram_alloc (200);
    gsl_histogram_set_ranges_uniform (h, -100, 100);


    while (fscanf (plik, "%lg", &x) == 1)
      {
        gsl_histogram_increment (h, x);
      }
      
    gsl_histogram_fprintf (stdout, h, "%g", "%g");
    gsl_histogram_free (h);
  
  exit (0);
}
