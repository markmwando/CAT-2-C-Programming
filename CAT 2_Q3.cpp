#include <stdio.h>

int main()
{
	double hours_worked,hourly_wage,gross_pay,taxes,net_pay;
	
	#define BASE_HOURS 40
	#define OVERTIME_MULTIPLIER 1.5
	#define FIRST_TAX_BRACKET 600
	#define FIRST_TAX_RATE 0.15
	#define SECOND_TAX_RATE 0.20
	
	printf("Enter hours_worked in a week");
	scanf("%lf",&hours_worked);
	printf("Enter hourly_wage");
	scanf("%lf",&hourly_wage);
	
	//calcilating gross pay
	if(hours_worked<=BASE_HOURS){
		gross_pay=hours_worked*hourly_wage;}
		else
		{
			gross_pay=(BASE_HOURS*hourly_wage)+((hours_worked - BASE_HOURS)* hourly_wage * OVERTIME_MULTIPLIER);
		}
		
		//Calculating taxes
		if(gross_pay<=FIRST_TAX_BRACKET){
		taxes=gross_pay*FIRST_TAX_RATE;	}
		else
		{
			taxes=(FIRST_TAX_BRACKET*FIRST_TAX_RATE)+((gross_pay-FIRST_TAX_BRACKET)*SECOND_TAX_RATE);
		}
		
		//Calculating net pay
	net_pay=gross_pay - taxes;
	
	printf("Gross Pay:$%.2f\n",gross_pay);
	printf("Taxes:$%.2f\n",taxes);
	printf("Net Pay:$%.2f\n",net_pay);
	
	return 0;
}