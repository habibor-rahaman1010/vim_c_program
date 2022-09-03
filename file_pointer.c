//file write use FILE pointer in c program...
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    fp = fopen("data.txt", "w");

    if(fp == NULL){
    	printf("Error!");
	exit(1);
    }
    else{
	//way 1 to write in file, write A to Z character here...
    	int i;
	for(i = 65; i <= 90; i++){
	    fputc(i, fp);
	}

	//way 2 to write in file...
	char buffer[100] = {"\nHello programmer how are you! You are ginious programmer in world, move aheade."};
	for(i = 0; i < 10; i++) {
	   fputs(buffer, fp);
	}

	//way 3 to write in file...
	for(i = 0; i < 10; i++){
	    fprintf(fp, "\nMy computer processor is cor i%d %d.", 5, 10500);
	}

    }

    fclose(fp);
return 0;
}
