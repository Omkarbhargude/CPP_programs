#include<iostream>
using namespace std;

// Nocasting 
int main()
{
    char ch = 'A';
    int i = 11;
    float f = 90.99f;

    char *cp = &ch;
    int *ip = &i;
    float *fp = &f;

    return 0;
}