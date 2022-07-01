#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "gauss.h"
#include "mean.h"
#include "variance.h"
int  main(void) //main function begins
{

printf("%lf",mean("gau.dat"));
printf("%lf",variance("gau.dat"));
return 0;
}
