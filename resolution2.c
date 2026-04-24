#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//resolution e l'equation f(x)=ln(x)+b avec x déja donné
float solution(int b,int x)
{
 float res;
 res=log(x);
 res=res+b;
 return(res);
}
int condition(int arg)
//calcul
{
  if(arg<3)
  {
    printf("manque d' argument");
    printf("vous devez ecrire de la forme \"f(x)=ln(x)+b\" x=c où b,c sont des reèls");
  }
  else if(arg>3)
  {
    printf("trop d'argument");
    printf("vous devez ecrire de la forme \"f(x)=ln(x)+b\" x=c où b,c sont des reèls");
  }
 return(1);
}
int condition1(char *ch[])
//condition d'ecriture
{
  if(strcmp(ch[1],"f(x)=ln(x)+1") != 0)
  {
    printf("vous devez ecrire de la forme \"f(x)=ln(x)+b\" x=c où c,b sont des reèls");
  }
  return(1);
}
void aff(int x,float d)
//affichage du résultat
{
  printf("f(%d)=%f\n",x,d);
}
int main(int arg,char *ch[])
 {
  float b,c,d;
  b=atof(&ch[1][11]);
  c=atof(&ch[2][2]);
  d=solution(b,c);
  condition(arg);
  condition1(ch);
  aff(c,d);
 }
