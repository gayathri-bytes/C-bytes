// C Program to simulate the ls command

#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>

void simulate_ls(const char *path);

void main()
{
         char path[100];
         printf("Enter the path of the directory: ");
         scanf("%s", path);
         simulate_ls(path);
}

void simulate_ls(const char *path)
{
          struct dirent *dirI;
          DIR *dir = opendir(path);
          if (!dir) 
                 return; 
          while ((dirI = readdir(dir)) != NULL)
                 printf("%s\n", dirI->d_name);
          closedir(dir);
}
