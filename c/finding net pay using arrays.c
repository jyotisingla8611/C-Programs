/*design a program that computes the net pay for the employees ..allow the user to continuously input the employee id until a sentinel value is entered .
Input the employee wages acc to hour and number of working hours . Compute each employee's gross pay witholding the tax percentage , tax amount and the net pay.
display all the results for each employee ater the last employee detail the total gross pay of all the employees , total working hours and the total witholdings 
with net pay display with arrays.*/

#include <stdio.h>
		int main()
	{
		int id[100],wages[100],gross[100],hr[100],tot_hr=0,tot_gross=0;
		float tax=10,tax_amt[100],net[100],tot_net=0,tot_tax=0;;
		printf("Enter id=0 to exit");
		int i=0,c=0;
		printf("\nEnter Employee ID :");
		scanf("%d",&id[i]);
		while(id[i])
		{
			c++;
			printf("Enter wages per hour : ");
			scanf("%d",&wages[i]);
			
			printf("Enter hours worked : ");
			scanf("%d",&hr[i]);			
				tot_hr+=hr[i];
				
			gross[i]=wages[i]*hr[i];			
			printf("\nGross Pay : %d",gross[i]);
				tot_gross+=gross[i];
				
			tax_amt[i]=tax*gross[i]/100;			
			printf("\nTax : %.2f",tax_amt[i]);
				tot_tax+=tax_amt[i];
			net[i]=gross[i]-tax_amt[i];
			
			printf("\nNet : %.2f",net[i]);
				tot_net+=net[i];
			
			
			
			printf("\n\nEnter next Employee ID :");
			scanf("%d",&id[++i]);
		}
		
		printf("\n\n\t Results : ");
		
		for(i=0;i<c;i++)
		{
			printf("\n\nID : %d",id[i]);
			printf("\nGross Pay : %d",gross[i]);
			printf("\nTax : %.2f",tax_amt[i]);
			printf("\nNet : %.2f",net[i]);
		}
		
		printf("\n\n\tFinal Result : ");
		printf("\nTotal Gross : %d",tot_gross);
		printf("\nTotal Hours : %d",tot_hr);
		printf("\nTotal Tax : %.2f",tot_tax);
		printf("\nTotal of net pay : %.2f",tot_net);
		
	}
