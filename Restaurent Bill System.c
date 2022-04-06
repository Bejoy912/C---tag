#include<stdio.h>
int main()

{

char item [5][100]={"burger","pizza","fried rice","chicken fry","french fry"};
float price[5]={250,300,175,90,75};
float item_choose[5],quantity[5],sub,p;
int i;
float total=0;
printf("choose item\n1:Burger\n2:pizzah\n3:fried rice\n4:chicken fry\n5:french fry\n6:exit\n");


 for(i=0;i<=6;i++){

    printf("Enter the item number: ");
    int x;
    scanf("%d",&x);

    if(x>=6 || x<=0)
    {
        printf("Thank you order again.");
           break;
    }
    else{
            item_choose[i]=x;

    printf("Enter the item quantity:");
    scanf("%f",&quantity[i]);
    total = total +(price[x-1]*quantity[i]);
    }
 }
    printf("Your total amount of bill is: %f",total);

     for(i=1;i<5;i++){


     if((item[5],"item1") == 0){
        price[5];
     }

     if((item[5],"item2") == 0){
        price[5];
     }

     if((item[5],"item3") == 0){
        price[5];
     }

     if((item[5],"item4") == 0){
        price[5];
     }

     if((item[5],"item5") == 0){
        price[5];

       }


     printf("total value    =%f\n" , total);

     printf("received money =");
     scanf("%f" ,&p);

     sub = p-total;

     printf("return   =%f",sub);




  return 0;
 }

}







