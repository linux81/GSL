#include <stdio.h>
#include <gsl/gsl_block.h>

int
main (void)
{
  gsl_block * b = gsl_block_alloc (1000);
  FILE *plik;
    int i;
  
    if ((plik=fopen("l1.txt","r"))==NULL) {
       fprintf(stderr,"Nie otworzyc pliku\n");

    return(-1);
}
    gsl_block_fscanf(plik,b);
    
  printf ("length of block = %zu\n", b->size);

  for(i=0;i<100;i++){ 
  printf ("%d\n", (int)b->data[i]);
}
  gsl_block_free (b);
  ferror(plik);
fclose(plik);
  return 0;
}
