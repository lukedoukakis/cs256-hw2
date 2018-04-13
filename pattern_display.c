/*
 * pattern_display.c
 *
 *  Created on: Apr 12, 2018
 *      Author: Luke
 */

int main(){

	int i;
	int j;

	printf("pattern A\n");

	for(i = 1; i < 11; i++){ //pattern A
		for(j = 1; j <= i; j++){
			printf("+");
		}
		printf("\n");
	}

	printf("pattern B\n");

	for(i = 10; i >= 1; i--){ //pattern B
		for(j = 1; j <= i; j++){
			printf("+");
		}
		printf("\n");
	}
}
