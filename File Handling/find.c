//C Program to find and replace a string in a file

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUF_SIZE 100

int main(int argc, char *argv[])
{
	FILE *iptr, *optr;
	char dart;
	char replaceword[BUF_SIZE], readword[BUF_SIZE];
	char *findword;

	if (argc < 2) {
		printf ("Please input the find string\n");
		return -1;
	}
	findword = argv[1];
	iptr = fopen("file.txt", "r");
	optr = fopen("ofile.txt", "w+");
	if ((iptr == NULL) || (optr == NULL)) {
		printf("File doesn't exist ");
		return -1;
	}
	printf("The input file: \n");
	while (1) {
		dart = fgetc(iptr);
		if (dart == EOF)
		{ 
			break;
		} else {
			printf("%c", dart);
		}
	}
	printf("Enter the word to replace with: ");
	fgets(replaceword, 100, stdin);

	replaceword[strlen(replaceword) - 1] =
			replaceword[strlen(replaceword)]; 
	rewind(iptr); 
	while (!feof(iptr)) { 
		fscanf(iptr, "%s", readword); 
		if (strcmp(readword, findword) == 0) { 
			strcpy(readword, replaceword); 
		} 
		fprintf(optr, "%s ", readword); 
	} 
	rewind(optr); 
	while (1) { 
		dart = fgetc(optr); 
		if (dart == EOF) { 
			break; 
		} 
		printf("%c", dart); 
	} 

	fclose(iptr); 
	fclose(optr);
	return 0;
}






