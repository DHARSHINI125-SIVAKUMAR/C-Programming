#include <stdio.h>
int main() {
	int N;
	scanf("%d", &N);
	int errors[N];
	int total = 0;
	int critical = 0;
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &errors[i]);
		total += errors[i];

		if(errors[i] > 50)
		{
			critical++;
		}
	}
	printf("Total Errors: %d\n", total);
	printf("Critical Hours: %d\n", critical);
	return 0;
}