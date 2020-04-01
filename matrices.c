#include<stdlib.h>
#include<stdio.h>
#include<time.h>
 int main(){
	srand(time(NULL));
	int m1[10][10];
	int m2[10][10];
	int mr[10][10];
	int j; // cont2
	int i; // contador
	int k; // cont3

	for (i=0; i< 10; i++){
			for(j =0; j< 10; j++){
		m1[i][j]= (rand() % 90) + 10;
		m2[i][j]= (rand() % 90) + 10;
		}
	}
	for(i=0; i< 10; j++){
		for(j = 0; j < 10; j++){
			printf(" %d ", m1[i][j]);
		}
		printf(" \n ");
	}
	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			printf(" %d ", m2[i][j]);
		}
		printf(" \n ");
	}

	for(i =0; i<10; i++){
		for(j=0; j<10; j++){
			int value = 0;
			for(k = 0; k < 10; k++){
				value = value + (m1[i][k] * m2[k][j]);
			}
			mr[i][j]=value;
		}
	}
	printf(" The result is: ");
		for(i=0; i<10; i++){
			for(j = 0; j < 10; j++){
				printf(" %d ", mr[i][j]);
		}
		printf("\n");
	}
return 0;
}

