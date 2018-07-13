#include <stdio.h>
int main(int argc, char **argv)
{
	unsigned int i = 0;
	unsigned char chChar[] = "abc中";

	while(chChar[i])
	{
		printf("%x ", chChar[i++]);
	}
	
	printf("\n");
	return 0;
}
	
