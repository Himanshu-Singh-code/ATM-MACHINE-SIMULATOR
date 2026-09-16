#include <stdio.h>
 int main() {
int pin , choice ;
float balance = 500000 , amount ;

printf("========================================\n");
printf("              ATM MACHINE               \n");
printf("========================================\n");

printf("Enter your PIN :  ");
scanf("%d" , &pin);
printf("\n");
if(pin!=1234){
    printf("Access Denied ! \n");
    printf("  Wrong Pin entered ! \n");
return 0 ;
}
else{
    printf("Login Succesful ! \n");
    printf("\n");
    printf("WELCOME TO THE ATM !\n");
    printf("\n");
}

do{

printf(" 1 . Check your Balance \n ");
printf(" 2 . Deposit The Money \n ");
printf(" 3 . Withdraw The Money \n ");
printf(" 4 . Exit \n ");

printf("\n");
printf("Enter your Choice : ");
scanf("%d",&choice);
printf("\n");
if (choice > 4 || choice < 1){
    printf("Invalid choice ! , Try Again !\n ");
    continue ;
}

switch (choice)
{
case 1 :

    printf("Your Account Balance is : %.2f \n", balance);
    printf("\n");
   
    break;
case 2 :
printf("Enter the Amount To deposit : ");
scanf("%f",&amount);
if(amount<= 0 ){
    printf("Invalid amount entered ! ");
}
else{
balance = balance + amount ;
printf("remaining balance is : %.2f \n" , balance);
printf("\n");
}
break ;

case 3 :
printf("Enter the Amount To withdraw : ");
scanf("%f",&amount);
printf("\n");

if(amount <= 0){
    printf("invalid amount entered ! ");
}
else if(amount>balance){
    printf("Insufficient Balance ! \n");
    printf("\n");
}
else{
balance = balance - amount ;
printf("Amount withdrawn successfully ! \n");
printf("remaining balance is : %.2f \n" , balance);
printf("\n");
}
break ;
case 4 :
printf("You have exited the ATM \n");
printf("Thank you for using our ATM \n");
break ; 
}
}while(choice!=4 );
  return 0;
}