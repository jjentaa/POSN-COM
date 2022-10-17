#include <stdio.h>
#include <string.h>

int main(){
    char str1[1000];
    printf("Input String1 ==> ");
    fgets(str1, 1000, stdin);
    str1[strlen(str1)-1] = '\0';

    int vowel=0, al=0, num=0;
    char i;
    for(int j=0; j<strlen(str1); j++){
        i = str1[j];
        if(i>=48 && i<=57){
            num++;
        }
        else if((i>=65 && i>=97) || (i<=90 && i<=122)){
            switch (i){
                case 65:
                    vowel++;
                    break;
                case 97:
                    vowel++;
                    break;
                case 69:
                    vowel++;
                    break;
                case 101:
                    vowel++;
                    break;
                case 73:
                    vowel++;
                    break;
                case 105:
                    vowel++;
                    break;
                case 79:
                    vowel++;
                    break;
                case 111:
                    vowel++;
                    break;
                case 85:
                    vowel++;
                    break;
                case 117:
                    vowel++;
                    break;
                default:
                    al++;
            }
        }
    }

    printf("Length of String ==> %d\n", strlen(str1));
    printf("Number of Vowel ==> %d\n", vowel);
    printf("Number of Alphabet ==> %d\n", al);
    printf("Number of Number ==> %d\n", num);

    return 0;
}