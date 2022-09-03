#include <stdio.h>

int main() {
	int arr[10] = {43, 54, 65, 76, 87, 32, 61, 83, 75, 88};
	int i, sum = 0;
	
	for(i = 0; i < 10; i++) {
		int value = arr[i];
		sum += value;
	}
	printf("Total sum is: %d \n", sum);

return 0;
}
