#include <stdio.h>

int main(void) {
	int n,i,a[n];
	float s=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	{
		s=s+a[i];
	}
            printf("%.2f",s/n);
            return 0;
}
