#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//resolution e l'equation f(x)=ax+b avec x déja donné
int solution(int a,int b,int c)
{
 int res;
 res=a*c+b;
 return(res);
}
int condition(int arg)
//calcul
{
  if(arg<3)
  {
    printf("manque d' argument");
    printf("vous devez ecrire de la forme \"f(x)=ax+b\" x=c où a,b,c sont des reèls");
  }
  else if(arg>3)
  {
    printf("trop d'argument");
    printf("vous devez ecrire de la forme \"f(x)=ax+b\" x=c où a,b,c sont des reèls");
  }
 return(1);
}
int condition1(char *ch[])
//condition d'ecriture
{
  if(strcmp(ch[1],"f(x)=ax+b") != 0)
  {
    printf("vous devez ecrire de la forme \"f(x)=ax+b\" x=c où a,b,c sont des reèls");
  }
  return(1);
}
void aff(int c,int d)
//affichage du résultat
{
  printf("f(%d)=%d\n",c,d);
}
int main(int arg,char *ch[])
 {
  int a,b,c,d;
  a=atoi(&ch[1][5]);
  b=atoi(&ch[1][8]);
  c=atoi(&ch[2][2]);
  d=solution(a,b,c);
  condition(arg);
  condition1(ch);
  aff(c,d);
 }
