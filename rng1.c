#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <gsl/gsl_rng.h>
#include <time.h>

// compilation gcc -Wall -o rng2 genliczlos6.c -lgsl -lgslcblas -lm







int main(int argc, char **argv)
{
FILE *plik;

int i,a,b,c,N;
const gsl_rng_type * T1;
gsl_rng * r1;
const gsl_rng_type * T2;
gsl_rng * r2;
const gsl_rng_type * T3;
gsl_rng * r3;

char *nazwapl;

// definition of input parameters: prg_name nbr_rows nbr_alg1 nbr_alg2 nbr_alg3 file_name  


if (argc <=1){

fprintf(stderr,"Brak odpowiedzniej liczby argumentow\n");
fprintf(stderr,"Sposob uzycia:\n");
fprintf(stderr,"nazwa_programu liczba_wierszy numer_algorytmu_gsl1 numer_algorytmu_gsl2 numer_algorytmu_gsl3 nazwa_pliku_danych\n");

return(-1);

}

else

{

N=atoi(argv[1]);
a=atoi(argv[2]);
b=atoi(argv[3]);
c=atoi(argv[4]);
nazwapl=argv[5];

    if ((plik=fopen(nazwapl,"w"))==NULL) {
       fprintf(stderr,"Nie otworzyc pliku\n");

    return(-1);
}

}

/* list GLS alghoritms acc to GSL manual:
https://www.gnu.org/software/gsl/manual/html_node/Random-number-generator-algorithms.html#Random-number-generator-algorithms */

switch (b)
     {
    
     case 1:

    T2 = gsl_rng_mt19937;
    break;

     case 2:

    T2 = gsl_rng_ranlxs0;
    break;

     case 3:

    T2 = gsl_rng_ranlxs1;
    break;

     case 4:

    T2 = gsl_rng_ranlxs2;
    break;


     case 5:

    T2 = gsl_rng_ranlxd1;
    break;

     case 6:

    T2 = gsl_rng_ranlxd2;
    break;

     case 7:

    T2 = gsl_rng_ranlux;
    break;

     case 8:

    T2 = gsl_rng_ranlux389;
    break;

     case 9:

    T2 = gsl_rng_cmrg;
    break;

     case 10:

    T2 = gsl_rng_mrg;
    break;

     case 11:

    T2 = gsl_rng_taus;
    break;

     case 12:

    T2 = gsl_rng_taus2;
    break;

     case 13:

    T2 = gsl_rng_gfsr4;
    break;

     case 14:

    T2 = gsl_rng_rand;
    break;

     case 15:

    T2 = gsl_rng_random_bsd;
    break;

     case 16:

    T2 = gsl_rng_random_libc5;
    break;

     case 17:

    T2 = gsl_rng_random_glibc2;
    break;

     case 18:

    T2 = gsl_rng_rand48;
    break;

     case 19:

    T2 = gsl_rng_ranf;
    break;

     case 20:

    T2 = gsl_rng_ranmar;
    break;

     case 21:

    T2 = gsl_rng_r250;
    break;

     case 22:

    T2 = gsl_rng_tt800;
    break;

     case 23:

    T2 = gsl_rng_vax;
    break;

     case 24:

    T2 = gsl_rng_transputer;
    break;

     case 25:

    T2 = gsl_rng_randu;
    break;

     case 26:

    T2 = gsl_rng_minstd;
    break;

     case 27:

    T2 = gsl_rng_uni;
    break;

     case 28:

    T2 = gsl_rng_uni32;
    break;

     case 29:

    T2 = gsl_rng_slatec;
    break;

     case 30:

    T2 = gsl_rng_zuf;
    break;

     case 31:

    T2 = gsl_rng_knuthran2;
    break;

     case 32:

    T2 = gsl_rng_knuthran2002;
    break;

     case 33:

    T2 = gsl_rng_knuthran;
    break;

     case 34:

    T2 = gsl_rng_borosh13;
    break;

     case 35:

    T2 = gsl_rng_fishman18;
    break;

     case 36:

    T2 = gsl_rng_fishman20;
    break;

     case 37:

    T2 = gsl_rng_lecuyer21;
    break;

     case 38:

    T2 = gsl_rng_waterman14;
    break;

     case 39:

    T2 = gsl_rng_fishman2x;
    break;

     case 40:

    T2 = gsl_rng_coveyou;
    break;



     default:

    T2 = gsl_rng_mt19937;
    break;



}

switch (a)
     {
    
     case 1:

    T1 = gsl_rng_mt19937;
    break;

     case 2:

    T1 = gsl_rng_ranlxs0;
    break;

     case 3:

    T1 = gsl_rng_ranlxs1;
    break;

     case 4:

    T1 = gsl_rng_ranlxs2;
    break;


     case 5:

    T1 = gsl_rng_ranlxd1;
    break;

     case 6:

    T1 = gsl_rng_ranlxd2;
    break;

     case 7:

    T1 = gsl_rng_ranlux;
    break;

     case 8:

    T1 = gsl_rng_ranlux389;
    break;

     case 9:

    T1 = gsl_rng_cmrg;
    break;

     case 10:

    T1 = gsl_rng_mrg;
    break;

     case 11:

    T1 = gsl_rng_taus;
    break;

     case 12:

    T1 = gsl_rng_taus2;
    break;

     case 13:

    T1 = gsl_rng_gfsr4;
    break;

     case 14:

    T1 = gsl_rng_rand;
    break;

     case 15:

    T1 = gsl_rng_random_bsd;
    break;

     case 16:

    T1 = gsl_rng_random_libc5;
    break;

     case 17:

    T1 = gsl_rng_random_glibc2;
    break;

     case 18:

    T1 = gsl_rng_rand48;
    break;

     case 19:

    T1 = gsl_rng_ranf;
    break;

     case 20:

    T1 = gsl_rng_ranmar;
    break;

     case 21:

    T1 = gsl_rng_r250;
    break;

     case 22:

    T1 = gsl_rng_tt800;
    break;

     case 23:

    T1 = gsl_rng_vax;
    break;

     case 24:

    T1 = gsl_rng_transputer;
    break;

     case 25:

    T1 = gsl_rng_randu;
    break;

     case 26:

    T1 = gsl_rng_minstd;
    break;

     case 27:

    T1 = gsl_rng_uni;
    break;

     case 28:

    T1 = gsl_rng_uni32;
    break;

     case 29:

    T1 = gsl_rng_slatec;
    break;

     case 30:

    T1 = gsl_rng_zuf;
    break;

     case 31:

    T1 = gsl_rng_knuthran2;
    break;

     case 32:

    T1 = gsl_rng_knuthran2002;
    break;

     case 33:

    T1 = gsl_rng_knuthran;
    break;

     case 34:

    T1 = gsl_rng_borosh13;
    break;

     case 35:

    T1 = gsl_rng_fishman18;
    break;

     case 36:

    T1 = gsl_rng_fishman20;
    break;

     case 37:

    T1 = gsl_rng_lecuyer21;
    break;

     case 38:

    T1 = gsl_rng_waterman14;
    break;

     case 39:

    T1 = gsl_rng_fishman2x;
    break;

     case 40:

    T1 = gsl_rng_coveyou;
    break;



     default:

    T1 = gsl_rng_mt19937;
    break;



}

switch (c)
     {
    
     case 1:

    T3 = gsl_rng_mt19937;
    break;

     case 2:

    T3 = gsl_rng_ranlxs0;
    break;

     case 3:

    T3 = gsl_rng_ranlxs1;
    break;

     case 4:

    T3 = gsl_rng_ranlxs2;
    break;


     case 5:

    T3 = gsl_rng_ranlxd1;
    break;

     case 6:

    T3 = gsl_rng_ranlxd2;
    break;

     case 7:

    T3 = gsl_rng_ranlux;
    break;

     case 8:

    T3 = gsl_rng_ranlux389;
    break;

     case 9:

    T3 = gsl_rng_cmrg;
    break;

     case 10:

    T3 = gsl_rng_mrg;
    break;

     case 11:

    T3 = gsl_rng_taus;
    break;

     case 12:

    T3 = gsl_rng_taus2;
    break;

     case 13:

    T3 = gsl_rng_gfsr4;
    break;

     case 14:

    T3 = gsl_rng_rand;
    break;

     case 15:

    T3 = gsl_rng_random_bsd;
    break;

     case 16:

    T3 = gsl_rng_random_libc5;
    break;

     case 17:

    T3 = gsl_rng_random_glibc2;
    break;

     case 18:

    T3 = gsl_rng_rand48;
    break;

     case 19:

    T3 = gsl_rng_ranf;
    break;

     case 20:

    T3 = gsl_rng_ranmar;
    break;

     case 21:

    T3 = gsl_rng_r250;
    break;

     case 22:

    T3 = gsl_rng_tt800;
    break;

     case 23:

    T3 = gsl_rng_vax;
    break;

     case 24:

    T3 = gsl_rng_transputer;
    break;

     case 25:

    T3 = gsl_rng_randu;
    break;

     case 26:

    T3 = gsl_rng_minstd;
    break;

     case 27:

    T3 = gsl_rng_uni;
    break;

     case 28:

    T3 = gsl_rng_uni32;
    break;

     case 29:

    T3 = gsl_rng_slatec;
    break;

     case 30:

    T3 = gsl_rng_zuf;
    break;

     case 31:

    T3 = gsl_rng_knuthran2;
    break;

     case 32:

    T3 = gsl_rng_knuthran2002;
    break;

     case 33:

    T3 = gsl_rng_knuthran;
    break;

     case 34:

    T3 = gsl_rng_borosh13;
    break;

     case 35:

    T3 = gsl_rng_fishman18;
    break;

     case 36:

    T3 = gsl_rng_fishman20;
    break;

     case 37:

    T3 = gsl_rng_lecuyer21;
    break;

     case 38:

    T3 = gsl_rng_waterman14;
    break;

     case 39:

    T3 = gsl_rng_fishman2x;
    break;

     case 40:

    T3 = gsl_rng_coveyou;
    break;



     default:

    T3 = gsl_rng_mt19937;
    break;



}

r1 = gsl_rng_alloc (T1);
gsl_rng_set(r1,time(0));
r2 = gsl_rng_alloc (T2);
gsl_rng_set(r2,time(0));
r3 = gsl_rng_alloc (T3);
gsl_rng_set(r3,time(0));
/* list GLS alghoritms acc to GSL manual:
https://www.gnu.org/software/gsl/manual/html_node/Random-number-generator-algorithms.html#Random-number-generator-algorithms */


		
fprintf(plik, "%s %s %s", gsl_rng_name (r1),gsl_rng_name (r2),gsl_rng_name (r3));
fprintf(plik, "\n");


for( i = 1; i <= N; i++)
{

	fprintf(plik, "%lu %lu %lu ", gsl_rng_get (r1),gsl_rng_get (r2),gsl_rng_get (r3));
	fprintf(plik, "\n");

}

/* Faza 3: sprzątanie */
ferror(plik);
fclose(plik);

gsl_rng_free (r1);
gsl_rng_free (r2);
gsl_rng_free (r3);
return(0);
}
