#include <stdio.h>

struct date{
    int day;
    int month;
    int year;
};

struct student{
    int std_id;
    char std_name[40];
    struct date std_birth;
    struct date std_checkin;
    int class;
};

int main(){
    int month;
    printf("Enter month (Jan=1) : ");
    scanf("%d", &month);


    struct student stdrecord[5]={
        {1001, "Chris Hemsworth", {11, 12, 2552}, {3, 5, 2560}, 4},
        {1002, "Tom Cruise", {3, 4, 2552}, {6, 5, 2555}, 4},
        {1003, "Taylor Swift", {13, 12, 2552}, {1, 5, 2560}, 2},
        {1004, "Hugh Grant", {9, 9, 2551}, {1, 5, 2560}, 1},
        {1005, "Kristen Stewart", {9, 4, 2552}, {7, 5, 2560}, 1}
    };

    int j=0;
    for(int k=0; k<5; k++){
        if(stdrecord[k].std_birth.month == month){
            printf("id : %d\n", stdrecord[k].std_id);
            printf("name : %s\n", stdrecord[k].std_name);
            printf("birth : %d-%d-%d\n", stdrecord[k].std_birth.day, stdrecord[k].std_birth.month, stdrecord[k].std_birth.year);
            printf("checkin : %d-%d-%d\n", stdrecord[k].std_checkin.day, stdrecord[k].std_checkin.month, stdrecord[k].std_checkin.year);
            printf("class : %d\n", stdrecord[k].class);
            printf("\n");
            j++;
        }
    }
    if(j==0){
        printf("There is not student born in that month.");
    }

    return 0;
}