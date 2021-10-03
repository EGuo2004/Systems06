#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int intarray1[10];
	intarray1[0] = 0;
	
	srand(time(NULL));
	int counter;
	for(counter = 1; counter < 10; counter++) {
		intarray1[counter] = rand();
	}
	
	printf("[");
	for(counter = 0; counter < 10; counter++) {
		printf("%d", intarray1[counter]);
		if(counter != 9) {
		    printf(", ");
		}
	}
	printf("]\n");
	
	//Part 2
	int intarray2[10];
	int *ip1 = intarray1;
	int *ip2 = intarray2;
	for(counter = 0; counter < 10; counter++) {
	    *(ip2 + counter) = *(ip1 + (9 - counter));
	}
	
	printf("[");
	for(counter = 0; counter < 10; counter++) {
	    if(counter % 2 == 1) {
	        printf("%d", intarray2[counter]);
	    } else {
	        printf("%d", *(ip2 + counter));
	    }
	    if(counter != 9) {
	        printf(", ");
	    }
	}
	printf("]");
	return 0;
}


