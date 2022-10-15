#include <stdio.h>
#include <stdbool.h>

int main(){
    int mid, final;
    float total;
    bool t1, t2;

    printf("Please enter midterm score : ");
    scanf("%d", &mid);
    t1 = (100>mid) && (mid>0);
    switch (t1){
        case 0:
            printf("Invalid input!");
            break;
        default:
            printf("Please enter final score : ");
            scanf("%d", &final);
            t2 = (100>final) && (final>0);
            switch (t2){
                case 0:
                    printf("Invalid input!");
                    break;
            
                default:
                        total = (final+mid)/2;

                        if(total>=80){
                            printf("Grade = G, Good");
                        }
                        else if(total>=50){
                            printf("Grade = P, Pass");
                        }
                        else{
                            printf("Grade = F, Fail");
                        }
                    break;
            }
            break;
    }

    return 0;
}