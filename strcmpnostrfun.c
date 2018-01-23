#include <stdio.h>

int main(void) {
	int i,sl=0,tl=0;
	char s[30],t[30];
       	gets(s);
	gets(t);
	for(i=0;s[i]!='\0';i++)
	sl++;
	for(i=0;t[i]!='\0';i++)
	tl++;
	if(sl==tl)
	printf("%s",t);
	else if(sl>=tl)
	printf("%s",s);
	else
	printf("%s",t);
	

	// your code goes here
	return 0;
}
