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
    int n;
    printf("How many id u want to search : ");
    scanf("%d", &n);

    int id[n];
    for(int i=0; i<n; i++){
        printf("Enter ID : ");
        scanf("%d", &id[i]);
    }

    struct student stdrecord[5]={
        {1001, "Chris Hemsworth", {11, 12, 2552}, {3, 5, 2560}, 4},
        {1002, "Tom Cruise", {3, 4, 2552}, {6, 5, 2555}, 4},
        {1003, "Taylor Swift", {13, 12, 2552}, {1, 5, 2560}, 2},
        {1004, "Hugh Grant", {9, 9, 2551}, {1, 5, 2560}, 1},
        {1005, "Kristen Stewart", {9, 4, 2552}, {7, 5, 2560}, 1}
    };

    int k;
    printf("Information :\n");
    for(int j=0; j<n; j++){
        k=(id[j]%10)-1;
        printf("id : %d\n", stdrecord[k].std_id);
        printf("name : %s\n", stdrecord[k].std_name);
        printf("birth : %d-%d-%d\n", stdrecord[k].std_birth.day, stdrecord[k].std_birth.month, stdrecord[k].std_birth.year);
        printf("checkin : %d-%d-%d\n", stdrecord[k].std_checkin.day, stdrecord[k].std_checkin.month, stdrecord[k].std_checkin.year);
        printf("class : %d\n", stdrecord[k].class);
        printf("\n");
    }

    return 0;
}