#include <stdio.h>
#include<string.h>
int main() {
printf("      HOSTEL INVENTORY      \n");
      int choice,choice1;
      int price[5]={22000,10000,20000,13000,30000};
      int quantity[5]={1,2,1,5,2};
      int new;
      char*items[5]={"cereal","orios","noodles","ketchup"
      ,"peanutbutter"};
      int updatedquantity;
      printf("1.Add item\n");
      printf("2.Display Inventory\n");
      printf("3.Update Item\n");
      printf("4.Calculate total value\n");
      printf("5.Exit\n");
      printf("\nChoose a number to continue: ");
      scanf("%d",&choice);
if(choice==1){
    printf("Choose item to add\n");
    for (int i = 0; i<5; i++) {
        int No=i+1;
        printf("%d.%s>Quantity:%d\n",No,items[i],quantity[i]);}
    printf("Enter choice here: ");
    scanf("%d",&choice1);
    quantity[choice1-1]++;
    printf("\n'Your item has been added'\n");
    printf("[%s>New Quantity:%d]",items[choice1-1],quantity[choice1-1]);}
else if (choice== 2){
        printf("INVENTORY\n") ;
        printf("  Item name    Quantity    Unit Price\n");
        for(int i=0;i<5;i++){
            int No=i+1;
        printf("%d.%s             %d          %d       \n",No,items[i],quantity[i],price[i]);}
}
if (choice==3){
    printf("Choose any product to be updated\n");
    for(int i=0;i<5;i++){
        int No=i+1;
        printf("%d.%s\n",No,items[i]);}
    int No;
    scanf("%d",&No);
    printf("Enter new quantity:");
    scanf("%d",&new);

    quantity[No-1]=new;
    printf("%s---New quantity=%d",items[No-1],quantity[No-1]);}
if (choice==4){
    int total;
    for(int c=0;c<5;c++){
    total= total+quantity[c]*price[c];}
    printf("Total value=%d", total);
}
else if(choice==5){
    printf("Bye");
}
     return 0;}
