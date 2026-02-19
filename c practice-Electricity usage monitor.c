#include <stdio.h>

int main() {
	int N;
	int total = 0;
	scanf("%d", &N);
	int units[N];
	for(int i = 0; i < N; i++) 
	{
		scanf("%d", &units[i]);
		total += units[i];   
	}
	printf("Total Units: %d\n", total);

	return 0;
}
