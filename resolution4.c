#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//resolution e l'equation f(x)=cos(ln(x+1)) avec x déja donné
float solution(float x)
{
 float res;
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
  float c;
  if(strcmp(ch[1],"f(x)=cos(ln(x+1))") != 0 || sscanf(ch[2],"x=%f",&c) != 1)
  {
    printf("vous devez ecrire de la forme \"f(x)=cos(ln(x+1))\" x=c où c est un reèl");
  }
  return(1);
}
void aff(float c,float d)
//affichage du résultat
{
  printf("f(%f)=%f\n",c,d);
}
int main(int arg,char *ch[])
 {
  float x;
  float d;
  x=atof(&ch[2][2]);
  d=solution(x);
  condition(arg);
  condition1(ch);
  aff(x,d);
 }
