#include<stdio.h>
struct student
{
    char name[100],address[100];
    int age,roll;
};

void displayNames14(struct student res[])
{
    FILE *fp;
    fp = fopen("name14.txt", "w");
    for(int i = 0; i<4; i++)
    {
        if(res[i].age == 14)
        fprintf(fp,"%s",res[i].name);
    }
    
}
void DisplayEvenNames(struct student res[])
{
    FILE *fp;
    fp = fopen("evenname.txt", "w");
    for(int i = 0; i<4; i++)
    {
        if(res[i].roll % 2 == 0)
        fprintf(fp,"%s",res[i].name);
    }
    
}
void DisplayNamesRoll(struct student res[])
{
    int n;
    scanf("%d", &n);
    FILE *fp;
    fp = fopen("nameRoll.txt", "w");
    for(int i = 0; i<4; i++)
    {
        if(res[i].roll == n)
        fprintf(fp,"%s",res[i].name);
    }
    
}

int main()
{
    struct student res[100];
    FILE *fp;
    fp = fopen("input2.txt","r");
    if(fp == NULL)
    {
        printf("File is not opened\n");
    }
    else
    {
        printf("File is opened\n");
    }
    int i;
    for(i = 0; i < 4; i++)
    {
        fscanf(fp,"%d",&res[i].roll);
        fscanf(fp,"%s",res[i].name);
        fscanf(fp,"%d",&res[i].age);
        fscanf(fp,"%s",res[i].address);
    }
    
    displayNames14(res);
    DisplayEvenNames(res);
    DisplayNamesRoll(res);
    
    fclose(fp);
    return 0;
}
