#include <stdio.h>

int main(){
    int p, s, r;
    scanf("%d %d %d", &p, &r, &s);
    
    if((p+r+s) == 100){
        if(p>s && p>r){
            printf("paper");
        }
        else if(s>p && s>r){
            printf("Scissors");
        }
        else if(r>p && r>s){
            printf("rock");
        }
        else{
            printf("i love you");
        }
    }
    else{
        printf("error");
    }

    return 0;
}