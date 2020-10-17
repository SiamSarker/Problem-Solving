#include<stdio.h>
struct student
{
    char name[100],address[100];
    int age,roll;
    float marks;
};
int main()
{
    struct student res[100];
    FILE *fp,*fp2;
    fp = fopen("input1.txt","r");
    if(fp == NULL)
    {
        printf("File is not opened\n");
    }
    else
    {
        printf("File is opened\n");
    }
    int i;
    for(i = 0; i < 3; i++)
    {
        fscanf(fp,"%d",&res[i].roll);
        fscanf(fp,"%s",res[i].name);
        fscanf(fp,"%d",&res[i].age);
        fscanf(fp,"%s",res[i].address);
        fscanf(fp,"%f",&res[i].marks);
    }
    fp2 = fopen("Output1.txt","w");
    for(i = 0; i < 3; i++)
    {
        fprintf(fp2,"%s\n",res[i].name);
        fprintf(fp2,"Roll: %d\n",res[i].roll);
        fprintf(fp2,"Age: %d\n",res[i].age);
        fprintf(fp2,"Address: %s\n",res[i].address);
        fprintf(fp2,"Marks: %.2f\n",res[i].marks);
        fprintf(fp2,"\n");
    }
    fclose(fp);
    fclose(fp2);
    return 0;
}
