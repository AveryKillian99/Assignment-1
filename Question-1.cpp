#include<stdio.h>
#include<stdlib.h>
int main(){
    // initialize int for arraysize
    int arraySize;

    //ask for array size and insert into initialized variable
    printf("enter array size: ");
    scanf("%d", &arraySize);

    //allocate memory for int array of variable size decided by user
    int *array = (int *)malloc(arraySize * sizeof(int));
    printf("Your array size is: %d\n", arraySize);

    if (arraySize <= 0){
        printf("Array is less than or equal to 0");
        return 1;
    }
    //for loop to ask for integers that are put into our array
    for (int i = 0; i < arraySize; i ++){
        printf("Enter integer into array: ");
        scanf("%d", &array[i]);
    }

    //for loop to print our integers in array in reverse order
    for ( int i = arraySize-1; i >= 0; i --){
        printf("%d",array[i]);
    }

    free(array);
    array = NULL;
}