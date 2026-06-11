#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//resolution e l'equation f(x)=ln(x)+b avec x déja donné
float solution(float b,float x)
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
  float b,d,c;
  if (sscanf(ch[1], "f(x)=ln(x)+%f", &b) != 1 || sscanf(ch[2],"x=%f",&c) != 1)
  {
    printf("vous devez ecrire de la forme \"f(x)=ln(x)+b\" x=c où b et c sont des reèls\n");
    printf("Exemple : f(x)=ln(x)+2.5 x=4\n");
    return(1);
  }
}
int aff(float x,float d)
//affichage du résultat
{
  printf("f(%f)=%f\n",x,d);
}
int main(int arg,char *ch[])
 {
  float b,c,d;
  sscanf(ch[1], "f(x)=ln(x)+%f", &b);
  sscanf(ch[2], "x=%f", &c);
  d=solution(b,c);
  condition(arg);
  condition1(ch);
  aff(c,d);
 }
