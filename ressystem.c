#include <stdio.h>
#include <stdlib.h>
int main() {
    int choice1;
    int D_choice;
	int S_choice;
    printf("welcome to the store ,we hope that you will have such a great experience! ");
    printf("1-drinks\n2-sand");
    printf("please select a number");
    scanf("%d",&choice1);
    if (choice1==1){
        printf("1-1 oz. vodka\n2-coke");
        scanf("%d",&D_choice);
        if (D-choice==1){
            printf("great choice please enter your creadit card's N°");
            scanf("%ld",&creditcard);
            if (creditcard>=1000000000000000){
                printf("sucsses !");
            }
            else{
                printf("sorry!");
            }
        }
        if else(D_choice==2){
            printf("great choice please enter your creadit card's N°");
            scanf("%ld",&creditcard);
            if (creditcard>=1000000000000000){
                printf("sucsses !");
            }
            else{
                printf("sorry!");

        }

        }
    }
    if else(choice1==2){
        printf("Please choose one \n 1-Turkey and Cranberry Sandwich \n 2-Grilled Cheese and Bacon Sandwich.");
		printf("\n please choose a number 1 or 2:");
		scanf("%d",&S_choice);
		 if (S_choice==1){
            printf("great choice please enter your creadit card's N°");
            scanf("%ld",&creditcard);
            if (creditcard>=1000000000000000){
                printf("sucsses !");
            }
            else{
                printf("sorry!");
            }
        }
        if else(S_choice==2){
            printf("great choice please enter your creadit card's N°");
            scanf("%ld",&creditcard);
            if (creditcard>=1000000000000000){
                printf("sucsses !");
            }
            else{
                printf("sorry!");

        }

        }

    }
    return 0;
}
