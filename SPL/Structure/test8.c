#include<stdio.h>
struct student
{
    char name[20];
    int id;
    float cgpa;
};
int main ()
{
    struct student res[100];
    FILE *fp;
    FILE *fp2;
    fp = fopen("student.txt","r");
    if(fp == NULL)
    {
        printf("File is not opened\n");
    }
    else
    {
        printf("File is opened\n");
    }
    int i,i_max = 0,i_min = 0;
    float max = 0,min = 100;
    for(i = 0; i < 3; i++)
    {
        fscanf(fp,"%s",res[i].name);
        fscanf(fp,"%d",&res[i].id);
        fscanf(fp,"%f",&res[i].cgpa);
    }
    for(i = 0; i < 3; i++)
    {
        if(res[i].cgpa > max)
        {
            max = res[i].cgpa;
            i_max = i;
        }
    }
    for(i = 0; i < 3; i++)
    {
        if(res[i].cgpa < min)
        {
            //min++;
            min = res[i].cgpa;
            i_min = i;

        }
    }
    fp2 = fopen("output3.txt","w");

    fprintf(fp2,"Name: %s\n",res[i_max].name);
    fprintf(fp2,"ID: %d\n",res[i_max].id);
    fprintf(fp2,"Cgpa: %.2f\n",res[i_max].cgpa);

    fprintf(fp2,"Name: %s\n",res[i_min].name);
    fprintf(fp2,"ID: %d\n",res[i_min].id);
    fprintf(fp2,"Cgpa: %.2f\n",res[i_min].cgpa);
    fclose(fp);
    fclose(fp2);
    return 0;
}