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
    struct student stdrecord[5]={
        {1001, "Chris Hemsworth", {11, 12, 2552}, {3, 5, 2560}, 4},
        {1002, "Tom Cruise", {3, 4, 2552}, {6, 5, 355}, 4},
        {1003, "Taylor Swift", {13, 12, 2552}, {1, 5, 2560}, 2},
        {1004, "Hugh Grant", {9, 9, 2551}, {1, 5, 2560}, 1},
        {1005, "Kristen Stewart", {9, 4, 2552}, {7, 5, 2560}, 1}
    };

    int glo_min=0;
    for(int i=0; i<5; i++){
        if(stdrecord[i].std_birth.year > stdrecord[glo_min].std_birth.year){
            glo_min=i;
        }
        else if(stdrecord[i].std_birth.year == stdrecord[glo_min].std_birth.year){
            if(stdrecord[i].std_birth.month > stdrecord[glo_min].std_birth.month){
                glo_min=i;
            }
            else if(stdrecord[i].std_birth.month == stdrecord[glo_min].std_birth.month){
                if(stdrecord[i].std_birth.day > stdrecord[glo_min].std_birth.day){
                    glo_min=i;
                }
            }
        }
    }

    printf("%s has minimum age", stdrecord[glo_min].std_name);

    return 0;
}