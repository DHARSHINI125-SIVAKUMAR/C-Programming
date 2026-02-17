#include <stdio.h>

int main() {
	int A, B, lcm;

	scanf("%d %d", &A, &B);

	lcm = (A > B) ? A : B;

	for(; ; lcm++) {
		if(lcm % A == 0 && lcm % B == 0) {
			break; 
		}
	}

	printf("%d\n", lcm);

	return 0;
}
