#include<stdio.h>

int main()
{
    FILE *fp;
    long int f,accnum,newacc;
    int ch,b,d,e,o,u,with,depo,amt=2500;
    char a[100],c[100];

printf("\t \t \twelcome to canara bank\n");

start:
printf("press [1] to create an account\n");
printf("press [2] to check your balance\n");
printf("press [3] to withdrawl\n");
printf("press [4] to change pin\n");
printf("press [5] to deposit\n");
printf("enter your choice::");
scanf("%d",&ch);
 if (ch==1)
 {
     printf("enter your name ::");
     
     scanf("%s",a);
     printf("enter your age::");
     scanf("%d",&b);
     printf("enter your mobile  number::");
     scanf("%ld",&f);
     printf("enter your gender::");
     scanf("%s",c);
     printf("\t \t \tyour bank account details\n");
     printf("\nyour name is %s\n",a);
     printf("your age is %d\n",b);
     printf("your mobile number is %ld\n",f);
     printf("your gender is %s\n",c);
     printf("your account number is 100%ld%d00\n",f,b);
     printf("press 0 to continue\n press 1 to exit ");
     scanf("%d",&o);
     if(o==0)
     {
         goto start;
         }
     else {
         printf("thankyou\n");
     }


 }
 else if(ch==2)
 {
     printf("enter your account number\n");
     scanf("%ld",&accnum);
     fp=fopen("bank","w");
     fprintf(fp,"%ld %d",accnum,amt);
     
     printf("you have %dRs\n",amt);
     fclose(fp);
     printf("press 0 to continue\n");
     scanf("%d",&o);
     if(o==0)
     {
         goto start;}
     else{
         printf("thannkyou\n");
     }


     
 }
 else if(ch==3)
     {
      printf("enter your account number ::");
      scanf("%ld",&newacc);
      fp=fopen("bank","r");
      fscanf(fp,"%ld %d",&accnum,&amt);
      fclose(fp);
      printf("oldacccount = %ld\n",accnum);
      if(newacc==accnum)
     { 
      printf("enter amount to withdraw\n");
      scanf("%d",&d);
      amt=amt-d;
      fp=fopen("bank","w");
      fprintf(fp,"%ld %d",accnum,amt);
      fclose(fp);

      printf("please wait while your transaction is being processed\n");
    
      printf("transaction succesful\n");
     }
     
     else
     {
         printf("your account doesnot exists\n");
     }
     
      printf("press 0 to continue\n");
      scanf("%d",&o);
      if (o==0)
      {
          goto start;}
      else{
          printf("thankyou\n");
      }
      fclose(fp);
      
     }
      
      else if(ch==4)
     {
         printf("enter OTP\n");
     scanf("%d",&b);
     printf("enter new pin\n");
     scanf("%d",&d);
     printf("enter pin again\n");
     scanf ("%d",&e);
     if(d==e)
     {
         printf("pin changed succesfully\n");
     }
     else
     {
         printf("entered pin are differenet\n");
     }
     printf("press 0 to continue\n");
     scanf("%d",&o);
     if (o==0)
     {
         goto start;
         }
     else{
         printf("thankyou\n");
     }

     }
     else if(ch==5)
     {
        printf("enter your account number to proceed::");
        scanf("%ld",&newacc);
        fp=fopen("bank","r");
        fscanf(fp,"%ld %d",&accnum,&amt);
        fclose(fp);
        printf("oldacccount = %ld\n",accnum);
      if(newacc==accnum)
      {
          printf("enter amount to be deposited::");
          scanf("%d",&depo);
          amt=amt+depo;
      }
      else
      {
          printf("your account doesnt exist\n");
      }
      fclose(fp);
      
    printf("press 0 to continue\n");
     scanf("%d",&o);
     if (o==0)
     {
         goto start;
         }
     else{
         printf("thankyou\n");
     }

      
      
    
               
     }

}