/*05) Construa um programa que contenha dois vetores um do tipo int e outro do tipo float
de 10 posição já inicializados (0 até 9). Após mostre os valores que se encontram
dentro dos dois vetores. Faça esse procedimento utilizando ponteiros. */

#include<stdio.h>

main(){

int v[10]={0,1,2,3,4,5,6,7,8,9},i,*p=v;
float v2[10]={9,8,7,6,5,4,3,2,1,0},*p2=v2;

for(i=0;i<10;i++)
{
    printf("\nvetor int: %d",*p);
    p++;
}

for(i=0;i<10;i++)
{
    printf("\nvetor float: %f",*p2);
    p2++;
}

}
