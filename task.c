#include <stdio.h> 
#include <string.h> 

int main() { 

    int custid, num, ca;
    float spy, num1 = 0, less, hens, change;
    char get[50], show[50];
    char choice, choice2, choice3;

    printf("  \n\n WELCOME TO ELECTRICITY ONLINE BILLS\n\n");
    printf("\n=======================================================================\n");

option:
    printf("\n\n");
    printf("\n\n  ********************************\n");      
    printf("\n\n  *                              *\n");                                                   
    printf("\n\n  * A. Registration  B. Pay Bills *\n");
    printf("\n\n  *                              *\n");       
    printf("\n\n  ********************A************\n\n");    
    printf("\nChoose Option Above: ");
    scanf(" %c", &choice);

    switch (choice) {
        case 'A':
        case 'a':
            printf("\\You chose Registration\\");
            printf("\n\nInput Customer ID: "); 
            scanf("%d", &custid); 
            printf("Input the name of the customer: "); 
            scanf("%s", get);
            printf("Input the customer address: ");
            scanf("%s", show);
            printf("Input the unit consumed by the customer: "); 
            scanf("%d", &num); 

            if (num < 200) 	
                spy = 1.20; 
            else if (num >= 200 && num < 400) 		
                spy = 1.50; 	
            else if (num >= 400 && num < 600) 			
                spy = 1.80; 		
            else 			
                spy = 2.00; 
            less = num * spy; 
            if (less > 300) 	
                num1 = less * 15 / 100.0; 
            hens = less + num1; 
            if (hens < 100) 	
                hens = 100;

            printf("\n_______________________________________________________________________"); 
            printf("\nElectricity Bill");
            printf("\nCustomer IDno: %d", custid); 
            printf("\nCustomer Name: %s", get); 
            printf("\nCustomer Address: %s", show);
            printf("\nUnit Consumed: %d", num); 
            printf("\nAmount Charges @Rs. %4.2f per unit: %8.2f", spy, less); 
            printf("\nSurchange Amount: %8.2f", num1); 
            printf("\nNet Amount to be Paid By the Customer: %8.2f", hens); 
            printf("\nMr/Mrs. %s, your net amount to pay is %.2f", get, hens);

            printf("\n\nDo you want to register again? (Y) for Yes, (N) for No: ");
            scanf(" %c", &choice3);

            if (choice3 == 'Y' || choice3 == 'y') {
                goto option;
            } else if (choice3 == 'N' || choice3 == 'n') {
                printf("Continuing to the main menu...\n");
            } else {
                printf("Invalid input\n");
            }

            break;

        case 'B':
        case 'b':
            printf("\\You chose to Pay bills\\");
            printf("\n\nInput Customer ID: "); 
            scanf("%d", &custid); 
            printf("Input the name of the customer: "); 
            scanf("%s", get);
            printf("Input the customer address: ");
            scanf("%s", show);

printf("Input the customer address :%s\n",show);
printf("unit Consumed :%d\n",num); 
printf("Amount Charges @Rs. %4.2f per unit :%8.2f\n",spy,less); 
printf("Surchange Amount :%8.2f\n",num1); 
printf("Net Amount to be Paid By the Customer :%8.2f\n\n",hens); 
printf("\\Mr. %s your net amount to pay is %.2f",get,hens);
pay:
printf("\n\n\nPAY NOW YOU BILLS\n\n");
printf("\nEnter Cash Amout: ");
scanf("%d",&ca);
printf("\n   Amount to Pay: %.2f\n",hens);
printf("\n\n\_______\n");

change=ca-hens;
printf("\n\n CHANGE : %.2f\n\n",change);
printf("Mr./nMrs.  %s  do you want to pay another bill again?\n",get);
printf("Type (y) for Yes 👎 for No:  ");
scanf("%s",&choice3);
if(choice3=='Y' || choice3=='y')
{
   goto option;
}
else if(choice3=='n' || choice3=='N')
{
   printf("You are quiting now\\");
}
else
{
   printf("Invalid Input");
}

	break;
	
	
	default:
	  printf(" Invlaid Input\n");
}



printf("Thank you Mr/Mrs.  %s  \n",get);
printf(".......HAVE A GOOD DAY\n");


return 0;
}