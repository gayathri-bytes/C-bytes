// C Program to simulate the ls command

#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>

void lsSim(const char *path);

void main()
{
    char path[100];
    printf("ENTER THE PATH TO DIRECTORY: ");
    scanf("%s", path);
    lsSim(path);
}

void lsSim(const char *path)
{
    struct dirent *dirI;
    DIR *dir = opendir(path);
    if (!dir) 
          return; 
    while ((dirI = readdir(dir)) != NULL)
          printf("%s\n", dirI->d_name);
    closedir(dir);
}
