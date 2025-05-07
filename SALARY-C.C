#include<stdio.h>
#include<conio.h>

main()
{
	int baseSalary, hra, da, ta, grossSalary;
	clrscr();
	printf("Enter the Base Salary :");
	scanf("%d",&baseSalary);

	hra = (baseSalary * 10) / 100;
	printf("Value of HRA is : %d\n", hra);
	da = (baseSalary * 5) / 100;
	printf("Value of DA is : %d\n", da);
	ta = (baseSalary * 8) / 100;
	printf("Value of TA is : %d\n", ta);

	grossSalary = baseSalary + hra + da + ta;
	printf("Gross Salary is : %d",grossSalary);
	getch();
}



