#include<stdio.h>

struct Student 
{
char name[20];
int id;
float gpa[3];
};

int main(void)
{
    int n;
    float cg[10];
    struct Student std[10];
    scanf("%d", &n);
    float max = 0;
    int index = 0;
    for(int i = 0; i<n; i++)
    {
        scanf("%s", std[i].name);
        scanf("%d", &std[i].id);
        float total = 0;
        for(int j = 0; j<3; j++)
        {
            scanf("%f", &std[i].gpa[j]);
            total += std[i].gpa[j];
        }
        cg[i] = total/3;
        if(cg[i] > max)
        {
            max = cg[i];
            index = i;
        }
    }

    printf("%s id %d has the highest cgpa %.2f ", std[index].name, std[index].id, cg[index]);
    return 0;
}