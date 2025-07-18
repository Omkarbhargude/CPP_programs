#include<iostream>
using namespace std;

#pragma pack(1)
class Demo
{
    public:
        int i;
        float f;
        char ch;
        int d;
};

int main()
{
    Demo obj;

    cout<<"Size of Demo is : "<<sizeof(obj)<<"\n";

    return 0;
}