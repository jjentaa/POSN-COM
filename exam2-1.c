#include <stdio.h>
#include <stdbool.h>

int main(){

    float mean;
    int total, s1, s2, s3, s4;
    bool t;
    
    printf("Enter score :");
    scanf("%d", &s1);
    t = (s1>100) || (s1<0);
    switch (t){
        case 1:
            printf("Invalid Input!\n");
            break;
        
        case 0:
            total = total + s1;
            break;
    }

    printf("Enter score :");
    scanf("%d", &s2);
    t = (s2>100) || (s2<0);
    switch (t){
        case 1:
            printf("Invalid Input!\n");
            break;
        
        case 0:
            total = total + s2;
            break;
    }

    printf("Enter score :");
    scanf("%d", &s3);
    t = (s3>100) || (s3<0);
    switch (t){
        case 1:
            printf("Invalid Input!\n");
            break;
        
        case 0:
            total = total + s3;
            break;
    }

    printf("Enter score :");
    scanf("%d", &s4);
    t = (s4>100) || (s4<0);
    switch (t){
        case 1:
            printf("Invalid Input!\n");
            break;
        
        case 0:
            total = total + s4;
            break;
    }

    mean = total/4;

    printf("%f", mean);

    return 0;
}