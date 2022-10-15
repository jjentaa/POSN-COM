#include <stdio.h>

int main(){
    unsigned long long int a=1;
    unsigned long long int d;
    printf("Enter num : ");
    scanf("%llu", &d);

    for(unsigned long long int i=2; i<d; i++){
        printf("%llu x ", i);
        a *= i;
    }
    a *= d;
    printf("%llu = %llu", d, a);

    return 0;
}