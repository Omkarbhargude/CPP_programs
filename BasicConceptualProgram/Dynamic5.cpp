#include<iostream>
using namespace std;

int  main()
{
    int Arr[5];     // Static
    int size = 0;
    int *p = NULL;

    cout<<"Enter number of elements : \n";
    cin>>size;

    p = new int[size];
    if(p == NULL)
    {
        cout<<"Unable to allocate the memory\n";
        return -1;
    }

    cout<<"Memory gets allocated succesfully\n";

    // Use

    delete []p;

    return 0;
}