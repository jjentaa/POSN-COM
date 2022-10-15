#include <stdio.h>

int main(){
    const float PI = 3.1415;
    int r, c;

    printf("Please input radius : ");
    scanf("%d", &r);

    printf("Calculator Menu\n");
    printf("              1.Find area\n");
    printf("              2.Find circumferrence\n");

    printf("Choose menu : ");
    scanf("%d", &c);

    switch (c){
        case 1:
            printf("\nArea = %f", PI*r*r);
            break;
        case 2:
            printf("\nCircumference = %f", PI*2*r);
            break;
    }

    return 0;

}