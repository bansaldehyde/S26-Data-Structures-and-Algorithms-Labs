#include <stdio.h>
#include <stdlib.h>

int main() {
	int n; scanf("%d", &n);
	int **array=malloc(n*sizeof(int*));
	int length[n];

	for (int i=0; i<n; i++) {
		scanf("%d", &length[i]);
		array[i]=malloc(length[i]*sizeof(int));
		for (int j=0; j<length[i]; j++) {
			scanf("%d", &array[i][j]);
		}
	}

	for (int i=n-1; i>=0; i--) {
		for (int j=0; j<length[i]; j++) {
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
}