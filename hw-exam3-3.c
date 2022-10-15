#include <stdio.h>


int main(){
    char in;
    int u=0, l=0, n=0, s=0;
    printf("Enter text: ");
    in = getchar();

    while(in != 10){
        if(48>=in && 57<=in){
            n++;
        }
        else if(90>=in && 65<=in){
            u++;
        }
        else if(122>=in && 97<=in){
            l++;
        }
        else{
            s++;
        }
        in = getchar();
    }

    printf("#0-9=%d\n", n);
    printf("#A-Z=%d\n", u);
    printf("#a-z=%d\n", l);
    printf("#special chracter=%d\n", s);

    return 0;
}