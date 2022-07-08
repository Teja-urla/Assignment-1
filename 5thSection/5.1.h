
void equiprobable(char *str,int len);

int signum(double a){
if( a > 0){
return 1;
}

else{
return -1;
}

}

void equiprobable(char *str,int len)
{
    int i;
    FILE *fp;
    fp=fopen(str,"w");
    for (i = 0; i < len; i++)
    {
    fprintf(fp,"%d\n",signum((double)rand()/(double)RAND_MAX - 0.5));
    }
    fclose(fp);
}
