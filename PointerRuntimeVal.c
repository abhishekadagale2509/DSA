/*#include<stdio.h>
#include<conio.h>
int main(){

    int *ptr,i,size;
    printf("ente size you want");
scanf("%d",&size);
for(i=1;i<=size;i++){
    printf("enter val on %u memory block",ptr);
    scanf("%d",ptr);
    ptr++;
}
ptr=ptr-size;
printf("print val");
for(i=1;i<=size;i++){
    printf("%u-->%d",ptr,*ptr);
    ptr++;
}

}*/


#include <stdio.h>
#include <stdlib.h> // for malloc

int main() {

    int *ptr, i, size;

    // Input the size of the array
    printf("Enter the size you want: ");
    scanf("%d", &size);

    // Dynamically allocate memory for the array
    ptr = (int *)malloc(size * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    int *basePtr = ptr;  // Save the base address of allocated memory

    // Input values into the dynamically allocated memory
    for (i = 0; i < size; i++) {
        printf("Enter value for memory block %p: ", (void *)(ptr + i));
        scanf("%d", ptr + i);
    }

    // Print the values stored in the allocated memory
    printf("The values are:\n");
    for (i = 0; i < size; i++) {
        printf("%p --> %d\n", (void *)(ptr + i), *(ptr + i));
    }

    // Free the dynamically allocated memory
    free(basePtr);

    return 0;
}
