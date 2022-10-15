#include <stdio.h>

int main(){
    int n;
    
    printf("Enter num : ");
    scanf("%d", &n);

    int i=2, counter=1;
    while(i<=n){
        counter++;
        i *= 2;
    }

    int remain[counter];

    for(int j=1; j<counter+1; j++){
        remain[counter-j]=n%2;
        n /= 2;
    }

    for(int k=0; k<counter; k++){
        printf("%d", remain[k]);
    }

    return 0;
}