/*06) Implemente um programa C que leia 2 strings digitados pelo usu�rio e verifique se
seus conte�dos s�o iguais. Este programa deve imprimir os strings digitados e uma
mensagem dizendo que as strings s�o iguais ou diferentes.
*/

#include<stdio.h>
#include<string.h>

main(){

char s[40],s1[40];

printf("String 1: ");
gets(s);

printf("\nString 2: ");
gets(s1);

if(strcmp(s,s1)==0)
printf("\nSao iguais");

else
printf("\nSao diferentes");
}
