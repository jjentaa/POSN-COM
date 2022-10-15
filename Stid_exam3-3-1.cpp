#include <iostream>
using namespace std;

int main(){
    int j, n=0;
    int i =1 ;
    cout << "Enter number : ";
    cin >> j;
    // //while do
    // while (i <= j) {
    //     n += i;
    //     i++;
    // }
    // cout << "Sum = " << n;

    //do while
    do{
        n += i;
        i ++;
    }
    while (i<=j);

    cout << "Sum = " << n;

    return 0;
}

