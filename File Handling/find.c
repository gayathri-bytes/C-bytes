//C Program to find and replace a string in a file

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(int argc, char *argv[])

{
 FILE *iptr, *optr;
 char dart;
 char replaceWord[100], readWord[100];
 iptr = fopen("file.txt", "r");
 optr = fopen("ofile.txt", "w+");
 if ((iptr == NULL) || (optr == NULL))
 {
   printf("File doesn't exist ");
 }
 printf("The input file: \n");
   while(1)
   {
     dart = fgetc(iptr);
     if (dart == EOF)
     { 
       break;
     }
     else
     {
       printf("%c", dart);
     }
   }
   
  char* findWord = argv[1];
   
  printf("Enter the word to replace with: ");
  fgets(replaceWord, 100, stdin);
   
  replaceWord[strlen(replaceWord) - 1] = replaceWord[strlen(replaceWord)]; 
  
  
  rewind(iptr); 
  while (!feof(iptr))
    { 
  
        fscanf(iptr, "%s", readWord); 
  
        if (strcmp(readWord, findWord) == 0) 
        { 
  
            strcpy(readWord, replaceWord); 
        } 
 
        fprintf(optr, "%s ", readWord); 
    } 
  
  rewind(optr); 
  while (1)
    { 
        dart = fgetc(optr); 
        if (dart == EOF) 
        { 
            break; 
        } 
        printf("%c", dart); 
    } 
   
  fclose(iptr); 
  fclose(optr);
  
}



