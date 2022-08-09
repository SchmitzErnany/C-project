#include <stdio.h>
#include <math.h>

struct myStructure {
    int myNum;
    char myLetter;
};

// function that sorts an array
int sortArrayInCLanguage(int *array) {
    int i, j, temp;
    for (i = 0; i < sizeof(array); i++) {
        for (j = 0; j < sizeof(array); j++) {
            if (array[i] < array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    return array[4];
}

int main() {
    // // Create a structure variable and assign values to it
    // struct myStructure s1 = {13, 'B'};

    // // Create another structure variable
    // struct myStructure s2;

    // // Copy s1 values to s2
    // s2 = s1;

    // // Change s2 values
    // s2.myNum = 30;
    // s2.myLetter = 'C';

    // // Print values
    // printf("%d %c\n", s1.myNum, s1.myLetter);
    // printf("%d %c\n", s2.myNum, s2.myLetter);

    int arr[] = {3,7,5,1,10,2,9,4,6,8};
    int test = sortArrayInCLanguage(arr);
    printf("%d", test);

    return 0;
}

