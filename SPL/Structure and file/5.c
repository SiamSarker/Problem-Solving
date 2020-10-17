#include<stdio.h>
#include<math.h>
struct plane
{
    int x1,x2,y1,y2;
};
int main ()
{
    FILE *fp,*fp2;
    fp = fopen("input.txt","r");
    if(fp == NULL) {
    printf("Not Open\n");
    }
    else {
        printf("File Open\n");
}
    struct plane car;
    float sum=0,dis=0;
    fscanf(fp,"%d",&car.x1);
    fscanf(fp,"%d",&car.y1);
    fscanf(fp,"%d",&car.x2);
    fscanf(fp,"%d",&car.y2);
    sum = ((car.x2 - car.x1)*(car.x2 - car.x1)) + ((car.y2 - car.y1)*(car.y2 - car.y1));
    dis = sqrt(sum);
    fp2 = fopen("output.txt","w");
    fprintf(fp2,"Distance: %f\n",dis);
    fclose(fp);
    fclose(fp);
    return 0;
}
