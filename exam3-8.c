#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        printf("%d %.0f\n", i, pow(2, i));
    }

    return 0;
}