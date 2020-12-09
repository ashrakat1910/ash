#include <stdio.h>
#include <stdlib.h>
struct football_team{
int est;
char rank ;
char captin[20];
};

int main()
{
struct football_team Alahly;
 Alahly.est =1997;
 Alahly.rank =22;
 strcpy(Alahly.captin,"Ahmed");

 printf("%d\n",Alahly.est);
  printf("%d\n",Alahly.rank);
 printf("%s\n",Alahly.captin);








    return 0;
}
