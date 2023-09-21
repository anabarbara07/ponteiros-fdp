/*04) Escreva um programa que declare uma matriz 100x100 de inteiros. Você deve
inicializar a matriz com zeros usando ponteiros. Preencha depois a matriz com os
números de 1 a 10.000 usando ponteiros.
*/

#include<stdio.h>

main(){

int m[100][100],i,j,*p=&m[0][0];


for(i=0;i<10000;i++)
{
  *p=0;
  p++;

}

p=m[0][0];

for(i=0;i<10000;i++)
{
   *p=i;
}

printf("%d",m[2][1]);

}
