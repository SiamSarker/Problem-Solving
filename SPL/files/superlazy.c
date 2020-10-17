#include <stdio.h>
int main()
{
    int a, b, sum;
    FILE *fpInput;
    FILE *fpOutput;
    fpInput = fopen("input.txt", "r");
    fscanf(fpInput, "%d", &a);
    fscanf(fpInput, "%d", &b);
    fclose(fpInput);
    fpOutput = fopen("output.txt", "w");
    sum = a + b;
    fprintf(fpOutput, "sum = %d\n", sum);
    fclose(fpOutput);
    return 0;
}