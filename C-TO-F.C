#include<stdio.h>
#include<conio.h>

main()
{
	float cel, feh;
	clrscr();

	printf("Enter the value of celsius : ");
	scanf("%f",&cel);
	feh = (9.0 / 5.0 * cel) + 32;
	printf("Value of Fahrenheit is : %f",feh);

	getch();
}