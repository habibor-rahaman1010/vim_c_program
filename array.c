#include <stdio.h>

int find_max_element(int number[10]) {
    int i, max = number[0];

    for(i = 0; i < 10; i++) {
        if(number[i] > max){
            max = number[i];
        }
    }
    
    return max;
}

int main() {
    int arr[10] = {23, 45, 43, 56, 78, 89, 12, 100, 99, 88};
    int result = find_max_element(arr);
    printf("Max value of arr: %d \n", result);


return 0;
}
