/* (Credit-Limit Calculator) Develop a C program that will determine whether a
department-store customer has exceeded the credit limit on a charge account. For
each customer, the following facts are available:
a) Account number
b) Balance at the beginning of the month
c) Total of all items charged by this customer this month
d) Total of all credits applied to this customer's account this month
e) Allowed credit limit
The program should use scanf to input each fact, calculate the new balance (=
beginning balance + charges – credits), and determine whether the new balance exceeds
the customer's credit limit. For those customers whose credit limit is exceeded, the
program should display the customer's account number, credit limit, new balance
and the message “Credit limit exceeded.” */

#include <stdio.h>
#include <stdbool.h>

int main (){
	
	int acc; // account number
	float bb, charges, credits, limit, nb; // bb = beginning balance , nb = new balance
	
	printf("Enter account number(-1 to end)");
	scanf("%d", &acc);
	
	while (true){
		
	if (acc == -1){
		goto end;
	}
	
	printf("Enter beginning balance: ");
	scanf("%f", &bb);
	
	printf("Enter total charges: ");
	scanf("%f", &charges);
	
	printf("Enter total credits: ");
	scanf("%f", &credits);
	
	printf("Enter credit limit: ");
	scanf("%f", &limit);
	
	nb = bb + charges - credits;
	

	if (nb>limit){
		printf("Account: %d\nCredit Limit: %f\nNew Balance: %f\nCredit limit exceeded!\n", acc, limit, nb);
	}
}
	end:
	return 0;
}