#include <stdio.h>

int main(){
	//Every Variables Declare Here
	char customerChoice;
	int numberOfDays;
	char needMealsYesOrNo;
	float sum=0;
	float total=0;
	char roomNeddOrNo;
	int i=1;
	float discount=0;
	

	//Header Section
	printf("\n");
	printf("Welcome to Araliya Holiday Resort Room Reservation System\n");
do{
	printf("\n");
	printf("____________________________________________________________________\n");
	printf("Select the room type: \n");
	
	//Types
	
	printf("- Single (S/s)\n");
	printf("- Double (D/d)\n");
	printf("- Triple (T/t)\n");
	
	printf("Enter Choice: ");
	scanf(" %c",&customerChoice);
	
	switch (customerChoice){
		case 's':
		case 'S':
			printf("Do You Want to order meals y? n? : ");
			scanf(" %c",&needMealsYesOrNo);
			
			if(needMealsYesOrNo=='y'){
				sum=sum+8000;
			}else if(needMealsYesOrNo=='n'){
				sum=sum+5000;
			}else{
				printf("Invalid choice! Please enter a valid letter.\n");
			}
			break;
		
		case 'd':
		case 'D':
			printf("Do You Want to order meals y? n? : ");
			scanf(" %c",&needMealsYesOrNo);
			
			if(needMealsYesOrNo=='y'){
				sum=15000;
			}else if(needMealsYesOrNo=='n'){
				sum=10000;
			}else{
				printf("Invalid choice! Please enter a valid letter.n");
			}
			break;
		case 't':
		case 'T':
			printf("Do You Want to order meals y? n? : ");
			scanf(" %c",&needMealsYesOrNo);
			
			if(needMealsYesOrNo=='y'){
				sum=20000;
			}else if(needMealsYesOrNo=='n'){
				sum=15000;
			}else{
				printf("Invalid choice! Please enter a valid letter.\n");
			}
			break;
			
		default:
			printf("Invalid choice! Please enter a valid letter.\n");
			continue;
			
	}
	
	//Multyfly By the Day
	printf("Enter number of Days: ");
	scanf("%d",&numberOfDays);
	
	total=total+(sum*numberOfDays);
	
	printf("\n");
	printf("Do you want to Reverse onother Room? y? n? : ");
	scanf(" %c",&roomNeddOrNo);
	
	i=i+1;
	
	}while(roomNeddOrNo=='y');
	
	printf("\n");
	printf("____________________________________________________________________\n");
	printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
	printf("\n");
	
	//last Output Print
	
	//logic
	
	if((i>1)&&(total>30000)){
		discount=total*(15.0/100);
	}
	
	//print
	printf("Total Bill : %.2f \n",total);
	printf("Discount: %.2f \n",discount);
	//paybel ammount
	total=total-discount;
	printf("Payable Amount: %.2f \n",total);
	return 0;
}
