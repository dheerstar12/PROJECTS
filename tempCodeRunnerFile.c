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