#include <stdio.h>
#include <stdlib.h>
#define SIZE 7

int HFunctn(int *h, int *e, int key) {

int i, ind;
for(i = 0; i < SIZE; i++){
	ind =( key + i * i ) % SIZE;
		if(e[ind] == 0 ){
			h[ind] = key;
			e[ind] = -1;
		return ind;
		}
	}
return -1;
}
int main(int argc, char *argv[]) {
int table[SIZE];
int e[SIZE] = {0};

int i, key;
time_t t;
srand((unsigned) time(&t));

printf("Keys: ");
for(i = 0; i < SIZE; i++){
	key = rand() % 100;
	HFunctn(table, e, key);
printf("%d ",key);
}
printf("\nHash table: ");
	for(i = 0; i < SIZE; i++){
		printf("%d ", table[i]);
}
for(i = 0; i < SIZE; i++){
	if (table[i] % 2 == 0){
		table[i] = 0;
		e[i] = 0;
	}
}
printf("\nHash table without even keys: ");
for(i = 0; i < SIZE; i++){
	printf("%d ", table[i]);
	}
return 0;
}
