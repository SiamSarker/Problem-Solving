#include<stdio.h>
#include<stdlib.h>
#include <string.h>

 struct student{
  char name[50];
  char username[50];
  char password[50];
} students;


registration(){
    FILE *file,*file2;
    char username[50];
    file=fopen("output.txt","a");
    printf("                                           Registration                                  ");
    printf("\nName: ");
    scanf("%s",students.name);
    printf("Username: ");
    scanf("%s",students.username);
    printf("Password: ");
    scanf("%s",students.password);
    fprintf(file,"%s\t%s\t%s\n",students.name,students.username,students.password);
    fclose(file);  

}


int main(){

  registration();
  char str[20];
  scanf("%s",str);
  if(strcmp(str, students.name) == 0){
      printf("Found\n");
  }
  else
      printf("Not found\n");
  return 0;
}