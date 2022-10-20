#include <stdio.h>

struct Donut
{
    char name[25];
    int price;
};

int main(){
    struct Donut menu[3]={
        {"Choco Ring", 15},
        {"Mango Ring", 20},
        {"Special Donut", 25}
    };

    FILE *fp;
    fp = fopen("receipt.txt", "a");

    printf("MENU");
    for(int i=0; i<3; i++){
        printf("\t %d. %s (%d)\n", i+1, menu[i].name, menu[i].price);
    }
    
    int ord_name, n, counter=0;
    int all_ord[100][2];
    do{
        printf("Input number of donut and amount: ");
        scanf("%d %d", &ord_name, &n);
        all_ord[counter][0] = ord_name;
        all_ord[counter][1]  =n;
        counter++;
    }
    while(ord_name!=0);

    printf("======== Salaya Donut ========\n");
    fprintf(fp, "%s\n", "======== Salaya Donut ========");

    int index, total=0;
    for(int j=0; j<counter-1; j++){
        index = all_ord[j][0]-1;
        total += menu[index].price*all_ord[j][1];
        printf("%d\t%s\t%d\n", all_ord[j][1], menu[index].name, menu[index].price*all_ord[j][1]);
        fprintf(fp, "%d\t%s\t%d\n", all_ord[j][1], menu[index].name, menu[index].price*all_ord[j][1]);
    }
    printf("-----------------------------------------------\n");
    printf("Pre-VAT\t\t\t%d\n", total);
    printf("VAT\t\t\t%.2f\n", 0.07*total);
    printf("Total\t\t\t%.2f\n", 1.07*total);
    printf("-----------------------------------------------\n");

    int amount;
    float change;
    printf("Enter Amount : ");
    scanf("%d", &amount);
    change = amount-(1.07*total);
    printf("Amount\t\t\t%d\n", amount);
    printf("-----------------------------------------------\n");
    printf("Change\t\t\t%.2f\n", change);
    printf("===============================================\n");

    fprintf(fp, "%s\n", "-----------------------------------------------");
    fprintf(fp, "Pre-VAT\t\t\t%d\n", total);
    fprintf(fp, "VAT\t\t\t%.2f\n", 0.07*total);
    fprintf(fp, "Total\t\t\t%.2f\n", 1.07*total);
    fprintf(fp, "%s\n", "-----------------------------------------------");
    fprintf(fp, "Amount\t\t\t%d\n", amount);
    fprintf(fp, "%s\n", "-----------------------------------------------");
    fprintf(fp, "Change\t\t\t%.2f\n", change);
    fprintf(fp, "%s\n", "===============================================");

    fclose(fp);

    return 0;
}