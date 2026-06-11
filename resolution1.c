#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//resolution e l'equation f(x)=ax+b avec x déja donné
float solution(float a,float b,float c)
{
 float res;
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
    return(1);
  }
  else if(arg>3)
  {
    printf("trop d'argument");
    printf("vous devez ecrire de la forme \"f(x)=ax+b\" x=c où a,b,c sont des reèls");
    return(1);
  }
}
int condition1(char *ch[])
//condition d'ecriture
{
 float b,c,d;
  if(sscanf(ch[1],"f(x)=%fx+%f",&b,&c) != 2 || sscanf(ch[2],"x=%f",&d) != 1)
  {
    printf("vous devez ecrire de la forme \"f(x)=ax+b\" x=c où a,b,c sont des reèls\n");
    printf("Exemple: \"f(x)=3x+2\" x=7\n");
    return(1);
  }
}
void aff(float c,float d)
//affichage du résultat
{
  printf("f(%f)=%f\n",c,d);
}
int main(int arg,char *ch[])
 {
  float a,b,c,d;
  sscanf(ch[1],"f(x)=%fx+%f",&a,&b);
  sscanf(ch[2],"x=%f",&c);
  d=solution(a,b,c);
  condition(arg);
  condition1(ch);
  aff(c,d);
 }
