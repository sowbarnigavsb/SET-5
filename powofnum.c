#include <stdio.h>
#include<math.h>

int main(void) {
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
            if(pow(2,i)==n)
            printf(" Yes",n);
            
	
	return 0;
}
