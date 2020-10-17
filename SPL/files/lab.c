#include<stdio.h>
#include<string.h>
/*
int main()
{
    FILE *F = fopen("test.txt", "r");
    int i;
    char str[100] = "Rafeed Rahman";
    char temp[6];
    int age = 25;
    char chr;

    char name[100];
    int id;
    float cgpa;
    // "r" -> read mode. File should exist
    // "w" -> Write mode. New file create if not exist
    // "a" -> Append mode. New file create if not exist
    if(F == NULL)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File opened successfully\n");


        // .txt file writing. File should be opened in "w"/ "a" mode.
        //for(i=0; i<strlen(str); i++)
          //  fputc(str[i], F);  // writes one character at a time to file

        //fputs(str, F); // writes full string

        //fprintf(F, "Name: %s\n Age: %d\n", str, age); //works just like printf.



        // .txt file reading. File should be opened in "r" mode
        while(!feof(F))  // feof(F)is 1 only when end of file reached. Otherwise, it's zero
        {
            //chr = fgetc(F); // Reads one character at a time
            //printf("%c\n",chr);

            //fgets(temp, 6, F); // char array, length (includes NULL char), file pointer
            //printf("%s\n",temp);

            fscanf(F, "%s%d%f", name, &id, &cgpa);
            printf("Name: %s, ID: %d, CGPA: %f\n", name, id, cgpa);
        }
    }
    fclose(F);
    // you can now reopen the file like before. Everything will start from the beginning of the file.
    return 0;
}
*/

// Read integers from a "numbers.txt" file. Write odd ones into "odd.txt" file and even ones into "even.txt" file.
int main()
{
    FILE *Num = fopen("numbers.txt", "r");
    FILE *Even = fopen("even.txt", "w");
    FILE *Odd = fopen("odd.txt", "w");

    int num;
    while(!feof(Num))  // feof(F)is 1 only when end of file reached. Otherwise, it's zero
    {
        fscanf(Num, "%d", &num);
        if(num%2==0)
            fprintf(Even, "%d ", num);
        else
            fprintf(Odd, "%d ", num);
    }
    fclose(Num);
    fclose(Even);
    fclose(Odd);
    return 0;
}