#include<iostream>
using namespace std;

class Show
{
    public:

    void Display()
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= 5; iCnt++)
        {
            cout<<"--HELLO--\n";
        }
    }
};
int main()
{
    Show sobj;
    sobj.Display();

    return 0;
}