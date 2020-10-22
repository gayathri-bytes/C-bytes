#include<stdio.h>
#include<stdlib.h>

void main(int argc, char *argv[])
{
  int i, n;
  int n1 = 0;
  int n2 = 1;
  int n3;
  n = atoi(argv[1]);
  scanf("%d", &n);
  printf("The respective fibonacci series is: 0 1 ");
 
  for( i =3; i<=n; i++)
  {
    n3 = n1 + n2;
    printf("%d ", n3);
    n1 = n2;
    n2 = n3;                                      
  }
  
}
