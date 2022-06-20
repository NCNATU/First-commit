#include<stdio.h>
#include<conio.h>
struct employee
{
	char name[20];
	int sal;	
}e1;
int main()
   {
   	printf("Enter name of employee");
   	scanf("%d",&e1.name);
   	printf("Enter the salary=");
   	scanf("%d",&e1.sal);
   	{
   		printf("Name of employee=%s\n",e1.name);
   		printf("salary=%d",e1.sal);
	   }
	   return 0;
}
