#include<Stdio.h>
int main()
{
	int n,i,j;
	int num[100];
	printf("input number of elements to be stored in the array : ");
	scanf_s("%d", &n);
	for (i = 1;i <= n;i++) {
		printf(" %d. number : ", i);
		scanf_s("%d", &num[i]);
	}
	printf("the position of the number you want to delete. : ");
	scanf_s("%d", &j);
	for (i = 1;i <= n;i++) {
		if (i != j) {
			printf("%d\t", num[i]);
		}
	}
	return 0;
}