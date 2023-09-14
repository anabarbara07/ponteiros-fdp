#include<stdio.h>
#include<conio.h>

main(){

float matrix[50][50];
float *p;
int cont,i,j;

p=matrix[0];

for(cont=0;cont<2500;cont++)
{
  *p=0.0;
  p++;

}

for(i=0;i<50;i++)
{
    for(j=0;j<50;j++)
    {
        printf("%f",matrix[i][j]);
    }
}
}
