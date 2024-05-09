#include<stdio.h>
#include<conio.h>
int main()
{
    int pin,pin1=5555,c=1,ch,amt,balance=5000;
    printf("Welcome to the bank server\n");
    start:
    printf("Enter the pin number\n");
    scanf("%d",&pin);
    if(pin==pin1)
    {
    printf("Please select your option\n");
    printf("1.Deposit \n2.Withdraw \n3.Check balance \n4.Change pin\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
           printf("Enter the Deposit amount\n");
           scanf("%d",&amt);
           if(amt<=20000)
           {
            balance=balance+amt;
            printf("%d",balance);
           }
           else
            {
            printf("Max limit of Withdraw is 20 k\n");
            }
        break;
    case 2:
           printf("Enter the Withdraw amount\n");
           scanf("%d",&amt);
           if(amt<=20000)
           {
           balance=balance-amt;
           printf("After withdraw %d\ncurrent balance=%d\n",amt,balance);
           }
           else
           {
            printf("Insufficient balance");
           }

        break;
    case 3:
          printf("Your balance is=%d\n",balance);
          break;
    case 4:
           printf("Enter the new pin");
           scanf("%d",&pin1);
           printf("Your pin is updated successfully...!\nlogin with new pin\n");
           goto start;
           break;

    }
    }
    else
    {
    printf("Enter the valid pin number\n");
    if(c<3)
    {
    c++;
    goto start;
    }

 }
 printf("Press 1 to continue...!\n");
 scanf("%d",&ch);
 if(ch==1)
 goto start;
 printf("Thanks for visiting our ATM");
}

