#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void uniform(char *str, int len)
{
int i;
FILE *fp;

fp = fopen(str,"w");
//Generate numbers
for (i = 0; i < len; i++)
{
fprintf(fp,"%lf\n",-2*log(1 - (double)rand()/RAND_MAX));
}
fclose(fp);

}

int  main(void) //main function begins
{
uniform("test.dat", 1000000);

return 0;
}
