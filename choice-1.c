#include <stdio.h>

int main(){
    char str1[1000], str2[1000];
    char *p1, *p2;
    int n_str1=0, n_str2=0; //len of str
    scanf("%s", str1);
    scanf("%s", str2);

    for(p1=str1; *p1!='\0'; p1++){
        n_str1++;
    }

    for(p2=str2; *p2!='\0'; p2++){
        n_str2++;
    }

    char temp;
    char *p3, *p4;
    if(n_str1 == n_str2){
        //sort str1
        for(p3=str1; *(p3+1)!='\0'; p3++){
            for(p4=p3+1; *(p4)!='\0'; p4++){
                if(*p3>*p4){
                    temp = *p3;
                    *p3 = *p4;
                    *p4 = temp;
                }
            }
        }
        //sort str2
        for(p3=str2; *(p3+1)!='\0'; p3++){
            for(p4=p3+1; *(p4)!='\0'; p4++){
                if(*p3>*p4){
                    temp = *p3;
                    *p3 = *p4;
                    *p4 = temp;
                }
            }
        }
        
        int counter=0;
        p1=str1;
        p2=str2;
        for(int k=0; k<n_str1; k++){
            if(*(p1+k) != *(p2+k)){
                printf("no");
                break;
            }
            else{
                counter++;
            }
        }
        if(counter == n_str1){
            printf("yes");
        }

    }
    else{
        printf("no");
    }

    return 0;
}