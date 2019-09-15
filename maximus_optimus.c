#include<stdio.h>
void maximus_optimus() {
  int a=0,b=0,c=0,repeat=0,maximus=0;
  scanf("%d",&a );
  scanf("%d",&b );
  scanf("%d",&c );
  scanf("%d",&repeat );
  //printf("%d\n",ar[4] );
  for(int j = 0;j<repeat;j++)
  {
    if(a>=b && a>=c)
    {
      maximus += a;
      a -= 1;
    }
    else if (b>=a && b>=c) {
      /* code */
      maximus += b;
      b -= 1;
    }
    else
    {
      maximus += c;
      c -= 1;
    }
  }
  printf("%d\n",maximus);
    //Your code goes here
}

int main() {
    maximus_optimus();
    return 0;
}
