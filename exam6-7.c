#include <stdio.h>
#include <string.h>

int main(){
    char target[1000];
    printf("Enter Something : ");
    scanf("%s", target);

    int counter = 0, n=strlen(target)/2, nlen=strlen(target);

    for(int i=0; i<n; i++){
        if(target[i]==target[nlen-i-1]){
            counter++;
        }
    }

    if(counter == n){
        printf("%s is Palindrome", target);
    }
    else{
        printf("%s is not Palindrome", target);
    }
    
    return 0;
}