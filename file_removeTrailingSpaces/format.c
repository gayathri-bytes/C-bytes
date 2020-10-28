// C program to remove trailing white spaces from all lines in a file

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define BUFFER_SIZE 1000

void main()
{
FILE *ipt, *opt;
char str[BUFFER_SIZE];
ipt = fopen("sample.txt", "r");
opt = fopen("out.txt", "w");
if ((ipt == NULL) || (opt == NULL)
   printf("File doesn't exist ");
while (fgets(str, BUFFER_SIZE, ipt) != NULL) {
      int index, i;
      index = -1;
      i = 0;
      while (str[i] != '\0') {
            if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
                     index= i;
            i++;
}
      str[index + 1] = '\0';
      fprintf(opt, "%s\n", str); 
}
fclose(ipt);
fclose(opt);  
}







    
