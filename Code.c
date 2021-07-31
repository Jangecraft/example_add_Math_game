#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	srand(time(NULL));
	
	printf("Math\n");
	
	while(1)
	{
		int r1 = rand() % 10;
		int r2 = rand() % 10;
		int sum = r1+r2;
		int ans;
		
		printf("%d + %d = ",r1,r2);
		scanf("%d",&ans);
		
		if(ans == sum)
		{
			printf("True\n");
		}
		else
		{
			printf("False\n");
		}
	}
	
	
	getch();
	return(0);
}
