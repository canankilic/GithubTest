//deneme yorum satırı

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