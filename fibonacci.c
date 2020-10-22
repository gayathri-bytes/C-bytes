#include<stdio.h>

void main()
{
  int i, n;
  int n1 = 0;
  int n2 = 1;
  int n3;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf("The respective fibonacci series is: ");
 
  for( i =1; i<=n; i++)
  {
    printf("%d, ", n1);
    n3 = n1 + n2;
    n1 = n2;
    n2 = n3;                                      
  
  }
  
}

