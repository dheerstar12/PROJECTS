// 4. Implement a simple interface of an ATM similar to what you did in the lab. You should print a set of
// options for the user.
// 1. Check balance
// 2. Withdraw
// 3. Deposit
// 4. Change pin
// 5. Exit
// Assume that the initial balance is ₹1000, and the initial pin is 1234. For each operation, you must
// ask the user to enter the pin and check if it matches with 1234. While changing pins, you are
// allowed to have pins of the form 0123 (with a leading zero). If the user enters any option other than
// the digits 1 to 5, you should ask them to enter again. Like in the lab exercise, the withdrawal should
// only be allowed if there is sufficient balance and the withdrawal amount is a multiple of 100


#include<stdio.h>
int main(){    int bal, wd, dep,ex, inp, pina,pinb,pinc,pind;
    bal= 1000;
    while(1){
    printf("Choose a number:\n1. Check balance\n2. Withdraw\n3. Deposit\n4. Change pin\n5. Exit\n");
scanf("%d", &inp);
switch(inp){
    case 1: printf("Balance = %d", bal); break;
    case 2: printf("Enter amount to be withdrawn -");scanf( "%d", &wd);
    if(wd<bal && (wd%100)==0){bal = bal- wd; printf("Amount withdrawn = %d\n",wd);printf("Remaining balance = %d",  bal); }
else{printf("Invalid input.");}break;
case 3: printf("Enter amount to deposit -");scanf("%d", &dep);
bal= bal+dep;
   printf("Amount deposited = %d\n",dep);printf("New balance = %d",  bal); break;

case 4: printf("Enter new pin :");scanf( "%d%d%d%d", &pina, &pinb,&pinc,&pind);
if(pina>5 || pinb>5 || pinc>5|| pind > 5){printf("Invalid pin try again!");}
else{printf("Your new pin is %d%d%d%d. Pin change successful.", pina,pinb,pinc,pind);}break;

case 5: return 0;
default : printf("Please provide valid input");
}
}
}

