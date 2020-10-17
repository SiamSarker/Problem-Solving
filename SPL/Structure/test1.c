#include <stdio.h>
#include<string.h>


struct student
{
  int id;
  float cgpa;
  char name[100];
};

int main()
{
    int n,i,j;
    struct student s[100], temp;
    printf("Input number of students\n");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Input %d no student info\n",i+1);
        scanf("%d%f",&s[i].id,&s[i].cgpa);
        getchar();
        gets(s[i].name);
    }

    for(i=0; i< n-1; i++)
    {
        for(j=0; j< n-1-i; j++)
        {
            if(strcmp(s[i].name, s[i+1].name)==1)
            {
                //temp=s[i];
                temp.id=s[i].id;
                temp.cgpa=s[i].cgpa;
                strcpy(temp.name,s[i].name);

                //s[i]=s[i+1];
                s[i].id=s[i+1].id;
                s[i].cgpa=s[i+1].cgpa;
                strcpy(s[i].name,s[i+1].name);

                //s[i+1]=temp;
                s[i+1].id=temp.id;
                s[i+1].cgpa=temp.cgpa;
                strcpy(s[i+1].name,temp.name);
            }
        }
    }

    for(i=0; i<n; i++)
    {
        printf("%d %f ", s[i].id, s[i].cgpa);
        puts(s[i].name);
        printf("######\n");
    }

    return 0;
}
