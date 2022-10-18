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
        {1002, "Tom Cruise", {3, 4, 2552}, {6, 5, 2555}, 4},
        {1003, "Taylor Swift", {13, 12, 2552}, {1, 5, 2560}, 2},
        {1004, "Hugh Grant", {9, 9, 2551}, {1, 5, 2560}, 1},
        {1005, "Kristen Stewart", {9, 4, 2552}, {7, 5, 2560}, 1}
    };

    int glo_last=0;
    for(int i=0; i<5; i++){
        if(stdrecord[i].std_checkin.year > stdrecord[glo_last].std_checkin.year){
            glo_last=i;
        }
        else if(stdrecord[i].std_checkin.year == stdrecord[glo_last].std_checkin.year){
            if(stdrecord[i].std_checkin.month > stdrecord[glo_last].std_checkin.month){
                glo_last=i;
            }
            else if(stdrecord[i].std_checkin.month == stdrecord[glo_last].std_checkin.month){
                if(stdrecord[i].std_checkin.day > stdrecord[glo_last].std_checkin.day){
                    glo_last=i;
                }
            }
        }
    }

    printf("%s has come last", stdrecord[glo_last].std_name);

    return 0;
}