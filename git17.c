#include<stdio.h>
#include<conio.h>
struct details
{
char name[100];
int price,code,quantity,mfg;
};
main()
{
struct details item[100];
int i,n;
clrscr();
printf("enter no items u want to insert:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nenter item name:");
scanf("%s",&item[i].name);
printf("enter item code:");
scanf("%d",&item[i].code);
printf("enter price of an item:");
scanf("%d",&item[i].price);
printf("enter quantity of item:");
scanf("%d",&item[i].quantity);
printf("enter manufacturing date:");
scanf("%d",&item[i].mfg);
}
printf("\n-------------------------------------------------------------------------");
printf("\n                              item details                               ");
printf("\n-------------------------------------------------------------------------");
printf("\nitem name\titem code\tprice\tquantity\tmanufacturing date\n");
printf("---------------------------------------------------------------------------\n");
for(i=0;i<n;i++)
{
printf("%s\t\t%d\t\t%d\t%d\t\t%d\n",item[i].name,item[i].code,item[i].price,item[i].quantity,item[i].mfg);
}
printf("---------------------------------------------------------------------------\n");
getch();
return 0;
} 
