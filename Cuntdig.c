#include <stdio.h>

int main(void) {
	long int n,count=0,r;
	scanf("%ld",&n);
	while(n!=0)
	{
		r=n%10;
		count++;
		n=n/10;
	}
	printf("count of digit is %d",count);
	return 0;
}
