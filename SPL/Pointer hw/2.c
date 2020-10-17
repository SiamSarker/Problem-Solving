#include <stdio.h>

int main(void) {
    int number;
    int array[100];
    int num = 0;
    int index;


    printf("How many number?");
    scanf("%d", &number);

    for (int i = 0; i < number; i++) {
        scanf("%d", &array[i]);
    }

    int maxcount = 0;
    for (int i = 0; i < number; i++) {
        index = 0;

        for (int j = 0; j < number; j++) {
            if (array[i] == array[j]) {
                index++;
            }
        }
        if (index > maxcount) {
            maxcount = index;
            num = array[i];
        }
    }

    printf("Number: %d Occurred: %d times\n", num, maxcount);
    return 0;
}