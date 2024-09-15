#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void generateBillHeader(char name[50],char date[30])
{

    printf("\n\n");
    printf("\n WELCOME TO MY RESTORENT");
    printf("\n\t  ----------------------");
    printf("\nDate:%s",date);
    printf("\nInvoice To:%s,name");
    printf("\n");
    printf("---------------------------------\n");
    printf("Items\t\n");
    printf("Quantity\t\t");
    printf("Total\t\t");
    printf("\n-------------------------------------");
    printf("\n\n");
}
void generateBillBody(char item[30],int Quantity,float Price)
{
    printf("%s\t\t",item);
    printf("%d\t\t",Quantity);
    printf("%.2f\t\t",Quantity*Price);
    printf("\n");
}
void generateBillFooter(float total)
{
    printf("\n");
    float dis=0.1*total;
    float nettotal=total-dis;
    float cgst=0.09*nettotal,Grandtotal=nettotal+2*cgst;
    printf("--------------------------------------------\n");
    printf("sub total\t\t\t%.2f",total);
    printf("\nDiscount @10%s\t\t\t%.2f","%",dis);
    printf("\n\t\t\t\t-------");
    printf("\n Net total\t\t\t%.2f",nettotal);
    printf("\nCGST @9%s\t\t\t%.2f","%",cgst);
    printf("\nSGST @9%s\t\t\t%.2f","%",cgst);
    printf("\n-----------------------------");
    printf("Grandtotal\t\t\t%.2f",Grandtotal);
    printf("\n-----------------------------------\n");
}
int main()
{


printf("\t============WELCOME TO RESTORENT============");
printf("\n1.Generate Invoice");
printf("\n2.Show all invoices");
printf("\n3.Search invoice");
printf("\n4.Exit");

printf("\n\nPlease select your prefered operation");
scanf("%d,&opt");


printf("\n\n");
return 0;
}
