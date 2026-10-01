#include <stdio.h>
int main(){
    
    int choice ;
    int accountNo = 3909;
    float amount = 10000;
    float withdraw;
    float deposit;
    float total;
    float remaining;
    int i = 1;

    printf("-----Welcome to my Bank-----\n");

    while (i==1){
    printf("1. deposit\n");
    printf("2.withdraw\n");
    printf("3.account view\n");
    printf("4.exit\n");
    

    printf("enter your choice\n");
    scanf("%d", &choice);

    if(choice==1){
        printf("enter your account number\n");
        scanf("%d", &accountNo);

        if(accountNo==3909){
            printf("valid account number\n");
             printf("how much money do you want to deposit\n");
                  scanf("%f", &deposit);
        printf("DEPOSIT SUCCESSFUL\n");

        total = amount + deposit;
        printf("the total amount in bank is = %.2f", total);
        }
        else{
            printf("invalid account number\n");
        }
         
    }
    
    

    if(choice==2){
        printf("enter your account number\n");
        scanf("%d", &accountNo);

        if(accountNo==3909){
            printf("valid account number\n");
            printf("how much money do you want to withdraw?\n");
        scanf("%f",&withdraw);

        if(withdraw>amount){
            printf("insufficient balance");
        }
        else{
        remaining = amount - withdraw;
        printf("the amount remaining in bank after withdrawing = %.2f" , remaining);
        }
        }
        else{
            printf("invalid account number\n");
        }

    }
    if(choice==3){
        printf("your account balance is = %.2f\n", total);

    } 
}
    
    if(choice==4){
        printf("thank you for using my bank\n");
    }

    return 0;


}