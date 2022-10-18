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

    int n_day[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m, d, y;
    for(int i=0; i<5; i++){
        d=n_day[stdrecord[i].std_birth.month-1]-stdrecord[i].std_birth.day+1;
        m=12-(stdrecord[i].std_birth.month);
        y=2564-(stdrecord[i].std_birth.year+1);
        printf("%d %s age : %d years %d months %d days\n\n", stdrecord[i].std_id, stdrecord[i].std_name, y, m, d);
    }

    return 0;
}