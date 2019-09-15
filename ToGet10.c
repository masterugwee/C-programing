#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void ToGet10() {
    //Your Code goes here.
     int anumber;
     scanf("%d",&anumber );
     float sum=0;
     int counter=0;
     char str[50];
     scanf(" %[^\n]s",str );
  char * pch;
  pch = strtok (str," ,.-");
  while (pch != NULL)
  {
    sum += (float)atoi(pch);
    pch = strtok (NULL, " ,.-");
  }
  while(sum/(float)anumber < 9.5)
  {
    sum += 10;
    anumber += 1;
    counter += 1;
  }
  printf("%d\n",counter);
}

int main() {
    ToGet10();
    return 0;
}
