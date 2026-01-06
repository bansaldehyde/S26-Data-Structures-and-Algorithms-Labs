#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct num
{
	char no[4];
	char str[10000];
} num;

int compare_ints(const void* a, const void* b)
{
	char arg1[10000], arg2[10000];
	strcpy(arg1, (*(num*)a).str);
	strcpy(arg2, (*(num*)b).str);
 
    return strcmp(arg1, arg2);
}

int main() {
	int n; scanf("%d", &n);
	num *array=malloc((n+1)*sizeof(num));

	for (int i=0; i<=n; i++) {
		sprintf(array[i].no, "%d", i);
		for (int j=0; j<(strlen(array[i].no)); j++) {
			char ch=(array[i].no)[j];
			if (ch=='1') strcat(array[i].str, "one ");
			else if (ch=='2') strcat(array[i].str, "two ");
			else if (ch=='3') strcat(array[i].str, "three ");
			else if (ch=='4') strcat(array[i].str, "four ");
			else if (ch=='5') strcat(array[i].str, "five ");
			else if (ch=='6') strcat(array[i].str, "six ");
			else if (ch=='7') strcat(array[i].str, "seven ");
			else if (ch=='8') strcat(array[i].str, "eight ");
			else if (ch=='9') strcat(array[i].str, "nine ");
			else if (ch=='0') strcat(array[i].str, "zero ");
		}
	}

	qsort(array, n+1, sizeof(num), compare_ints);

	for (int i=0; i<=n; i++) printf("%s\n", array[i].no);
}