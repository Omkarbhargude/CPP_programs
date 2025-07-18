#include<iostream>
using namespace std;

int main()
{
    char ch = 'A';
    int i = 11;

    char *cp = (char *)&i;  //  Upcasting
    int *ip = (int *)&ch;  //  Downcasting

    return 0;
}