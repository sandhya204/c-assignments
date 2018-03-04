#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int i,ch,op;
void adding_cus();
void editing_cus();
void modifing_cus_details();
struct bank
{
 char cname[10],branch[10],password;
 int balance,accno;
 }bd[4];
 int main()
 {
 /*for(i=0;i<=1;i++)
 {
 printf("enter the details of customer");
 scanf("%s%s%s%d%d",&bd[i].cname,&bd[i].branch,&bd[i].balance,&bd[i].accno);
 }*/
 do{
 printf("enter ur choice");
 scanf("%d",&ch);
 
 switch(ch)
 {
 case 1:adding_cus();
 break;
 case 2:editing_cus();
 break;
 case 3:modifing_cus_details();
 break;
 /*case 4:password();
 break;
 case 5:money_withdraw();
 break;
 case 6:money_deposit();
 break;*/
 }
printf("do u want to continue(Y/N)");
 scanf("%c",&op);
}while(op=='y');
 }
 void adding_cus()
 {
 printf("enter custmer number");
 scanf("%d",&i);
 printf("enter customer name: \n,accno:\n,branch:\n,balance:\n");
 scanf("%s%d%s%d\n",bd[i].cname,&bd[i].accno,bd[i].branch,&bd[i].balance);
  printf("%s\n \t%d\n\t%s\n\t%d",bd[i].cname,bd[i].accno,bd[i].branch,bd[i].balance);
 
  }
void editing_cus()
{
	printf("enter custmer number");
	scanf("%d",&i);
	 printf("enter customer name: \n,accno:\n,branch:\n,balance:\n");
 scanf("%s%d%s%d\n",bd[i].cname,&bd[i].accno,bd[i].branch,&bd[i].balance);
  printf("%s\n%d\n%s\n%d",bd[i].cname,bd[i].accno,bd[i].branch,bd[i].balance);
 
	
}
void modifing_cus_details()
{
	printf("enter custmer number");
	scanf("%d",&i);
	 printf("enter customer name: \n,accno:\n,branch:\n,balance:\n");
 scanf("%s%d%s%d\n",bd[i].cname,&bd[i].accno,bd[i].branch,&bd[i].balance);
  printf("%s\n%d\n%s\n%d",bd[i].cname,bd[i].accno,bd[i].branch,bd[i].balance);
 
	
}

