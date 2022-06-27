double mean(char *str);

double variance(char *str)
{
double mean(char *str);

double variance(char *str)
{

double temp1 = 0;
int i=0,c;
FILE *fp;
double x, temp=0.0;

fp = fopen(str,"r");
//get numbers from file
while(fscanf(fp,"%lf",&x)!=EOF)
{

//Count numbers in file
i=i+1;
//Add all numbers in file
temp1 = temp1+x*x;
temp = temp + x;
}
fclose(fp);
temp =(double)(temp1/(i-1)) - (double)(temp/(i-1))*(double)(temp/(i-1));
return temp;
}
double temp1 = 0;
int i=0,c;
FILE *fp;
double x, temp=0.0;

fp = fopen(str,"r");
//get numbers from file
while(fscanf(fp,"%lf",&x)!=EOF)
{

//Count numbers in file
i=i+1;
//Add all numbers in file
temp1 = temp1+x*x;
temp = temp + x;
}
fclose(fp);
temp =(double)(temp1/(i-1)) - (double)(temp/(i-1))*(double)(temp/(i-1));
return temp;
}
