//sum in c program use pointer in c program...
#include <stdio.h>

int add(int *num1, int *num2) {
    int sum = 0;
    sum = *(num1) + *(num2);
    return sum;
};

int main() {
    int x = 10, y = 20;
    int *ptr1, *ptr2;
    ptr1 = &x;
    ptr2 = &y;

    int result = add(ptr1, ptr2);
    printf("Sum is: %d \n", result);
}

