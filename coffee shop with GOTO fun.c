#include<stdio.h>

int main(){
    int ch,q,i,amt;
    a:
    printf("\t\t\tMENU CARD\n");
    printf("\n\t\t1.Coffee      Rs:15 ");
    printf("\n\t\t2.Tea         Rs:10");
    printf("\n\t\t3.Cold Coffee Rs:25");
    printf("\n\t\t4.Milk Shake  Rs:35");
    printf("\n\t\t Enter your choice :");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("\nYou are selecting coffee\n");
            printf("Enter the Quantity:\n");
            scanf("%d",&q);
            amt+=(q*15);
            break;
        case 2:
            printf("\nYou are selecting Tea\n");
            printf("Enter the Quantity:\n");
            scanf("%d",&q);
            amt+=(q*10);
            break;
        case 3:
            printf("\nYou are selecting Cold Coffee\n");
            printf("Enter the Quantity:");
            scanf("%d",&q);
            amt+=(q*25);
            break;
        case 4:
            printf("\nYou are selecting Milk Shake\n");
            printf("Enter the Quantity:\n");
            scanf("%d",&q);
            amt+=(q*35);
            break;
        default:
            printf("Please select above items:");
            break;
    }
    printf("Do you want to continue Enter 1:");
    scanf("%d",&i);
    if(i==1){
        goto a;
    }
    else{
        printf(" Total amount:%d",amt);
        printf("\nThank you! for Comming!");
    }
    return 0;

}

