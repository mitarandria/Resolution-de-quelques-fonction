#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//resolution e l'equation f(x)=cos(ln(x+1)) avec x déja donné
float solution(int x)
{
 double res;
 res=log(x+1);
 res=cos(res);
 return(res);
}
int condition(int arg)
//calcul
{
  if(arg<3)
  {
    printf("manque d' argument");
    printf("vous devez ecrire de la forme \"f(x)=cos(ln(x+1))\" x=c où c est un reèl");
  }
  else if(arg>3)
  {
    printf("trop d'argument");
    printf("vous devez ecrire de la forme \"f(x)=cos(ln(x+1))\" x=c où c est un reèl");
  }
 return(1);
}
int condition1(char *ch[])
//condition d'ecriture
{
  if(strcmp(ch[1],"f(x)=cos(ln(x+1))") != 0)
  {
    printf("vous devez ecrire de la forme \"f(x)=cos(ln(x+1))\" x=c où c est un reèl");
  }
  return(1);
}
void aff(int c,float d)
//affichage du résultat
{
  printf("f(%d)=%f\n",c,d);
}
int main(int arg,char *ch[])
 {
  int x;
  float d;
  x=atoi(&ch[2][2]);
  d=solution(x);
  condition(arg);
  condition1(ch);
  aff(x,d);
 }
