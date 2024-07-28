#include<stdio.h>

int main(){
    int ch,q;
    printf("\t\t\tMENU CARD\n");
    printf("\n\t\t1.Coffee      Rs:15 ");
    printf("\n\t\t2.Tea         Rs:10");
    printf("\n\t\t3.Cold Coffee Rs:25");
    printf("\n\t\t4.Milk Shake  Rs:35");
    printf("\n\t\t Enter your choice ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("\nYou are selecting coffee\n");
            printf("Enter the Quantity:\n");
            scanf("%d",&q);
            printf("%d please Pay the Amount:%d",q*15);
            break;
        case 2:
            printf("\nYou are selecting Tea\n");
            printf("Enter the Quantity:\n");
            scanf("%d",&q);
            printf("please Pay the Amount:%d",q*10);
            break;
        case 3:
            printf("\nYou are selecting Cold Coffee\n");
            printf("Enter the Quantity:\n");
            scanf("%d",&q);
            printf("please Pay the Amount:%d",q*35);
            break;
        case 4:
            printf("\nYou are selecting Milk Shake\n");
            printf("Enter the Quantity:\n");
            scanf("%d",&q);
            printf("please Pay the Amount:%d",q*45);
            break;
        default:
            printf("please select above items");
            break;

    }
    return 0;

}

