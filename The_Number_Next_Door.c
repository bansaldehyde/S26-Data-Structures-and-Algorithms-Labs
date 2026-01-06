#include <stdio.h>
#include <stdlib.h>

typedef struct row {
	int no;
	int* rw;
} row;

int main() {
	int n; scanf("%d", &n);
	int *(*addr)=malloc((n+1)*sizeof(int*));

	int r; scanf("%d", &r);
	row *array=malloc(r*sizeof(row));

	for (int i=0; i<r; i++) {
		int size; scanf("%d", &size);
		array[i].no=size;
		array[i].rw=malloc(size*sizeof(int));
		for (int j=0; j<size; j++) {
			int elem; scanf("%d", &elem);
			(array[i].rw)[j]=elem;
			addr[elem]=(array[i].rw)+j;
		}
	}

	int q; scanf("%d", &q);
	for (int i=0; i<q; i++) {
		int f, l, x; scanf("%d %d %d", &f, &l, &x);
		int* pf=(int*)addr[f];
		int* px=(int*)addr[x];

		if ((px-pf)==l-1) printf("-1\n");
		else printf("%d\n", *(px+1));
	}
}