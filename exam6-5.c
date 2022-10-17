#include <stdio.h>
#include <string.h>

int main(){
    char str1[1000];
    printf("Input String1 ==> ");
    fgets(str1, 1000, stdin);
    str1[strlen(str1)-1] = '\0';

    int vowel[5]={0, 0, 0, 0, 0}, al=0, num=0;
    char i;
    for(int j=0; j<strlen(str1); j++){
        i = str1[j];
        if(i>=48 && i<=57){
            num++;
        }
        else if((i>=65 && i>=97) || (i<=90 && i<=122)){
            switch (i){
                case 65:
                    vowel[0]++;
                    break;
                case 97:
                    vowel[0]++;
                    break;
                case 69:
                    vowel[1]++;
                    break;
                case 101:
                    vowel[1]++;
                    break;
                case 73:
                    vowel[2]++;
                    break;
                case 105:
                    vowel[2]++;
                    break;
                case 79:
                    vowel[3]++;
                    break;
                case 111:
                    vowel[3]++;
                    break;
                case 85:
                    vowel[4]++;
                    break;
                case 117:
                    vowel[4]++;
                    break;
                default:
                    al++;
            }
        }
    }

    printf("Length of String ==> %d\n", strlen(str1));
    printf("Reverse String ==> ");
    for(int k=strlen(str1)-1; k>=0; k--){
        printf("%c", str1[k]);
    }

    printf("\nUpper String ==> ");
    for(int k=0; k<strlen(str1); k++){
        printf("%c", str1[k]);
        if(str1[k]>=97 && str1[k]<=122){
            printf("%c", str1[k]-32);
        }
        else{
            printf("%c", str1[k]);
        }
    }

    printf("\n=-=-=-=-=-=-=-=-=-=");
    printf("\nNumber of Vowel");
    printf("\n=-=-=-=-=-=-=-=-=-=");
    printf("\nA or a = %d", vowel[0]);
    printf("\nE or e = %d", vowel[1]);
    printf("\nI or i = %d", vowel[2]);
    printf("\nO or o = %d", vowel[3]);
    printf("\nU or u = %d", vowel[4]);
    printf("\n=-=-=-=-=-=-=-=-=-=");

    return 0;
}