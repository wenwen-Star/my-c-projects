#include<stdio.h>
int main()
{
	int year;
	int count = 0;
	for (year = 1900; year <= 2000; year++) {
		if ((year % 4 == 0 && year % 100 != 0 || year % 400 == 0)) 
		{
			printf("%d  ", year);
			count++;
			if (count % 3 == 0) {
				printf("\n");
			}
		}
	}
	return 0;
}