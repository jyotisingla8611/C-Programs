/*design a program that computes the net pay for the employees ..allow the user to continuously input the employee id until a sentinel value is entered .
Input the employee wages acc to hour and number of working hours . Compute each employee's gross pay witholding the tax percentage , tax amount and the net pay.
display all the results for each employee ater the last employee detail the total gross pay of all the employees , total working hours and the total witholdings 
with net pay display with arrays.*/

#include <stdio.h>

	int main()
	{
		int id,wages,gross,hr,tot_hr=0,tot_gross=0;
		float tax=10,tax_amt,net,tot_net=0,tot_tax=0;;
		printf("Enter id=0 to exit");
		printf("\nEnter ID :");
		scanf("%d",&id);
		while(id)
		{
			printf("Enter wages per hour : ");
			scanf("%d",&wages);
			
			printf("Enter hours worked : ");
			scanf("%d",&hr);			
				tot_hr+=hr;
				
			gross=wages*hr;			
			printf("\nGross Pay : %d",gross);
				tot_gross+=gross;
				
			tax_amt=tax*gross/100;			
			printf("\nTax : %.2f",tax_amt);
				tot_tax+=tax_amt;
			net=gross-tax_amt;
			
			printf("\nNet : %.2f",net);
				tot_net+=net;
			
			
			
			printf("\n\nEnter next ID :");
			scanf("%d",&id);
		}
		printf("\n\nFinal Result : ");
		printf("\nTotal Gross : %d",tot_gross);
		printf("\nTotal Hours : %d",tot_hr);
		printf("\nTotal Tax : %.2f",tot_tax);
		printf("\nTotal of net pay : %.2f",tot_net);
		
	}
