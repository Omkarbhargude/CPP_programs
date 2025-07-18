#include<iostream>
using namespace std;

class Show
{
    public:
    
    int iNo;
    Show(int a)
    {
        this->iNo = a;
    }

    void Display()
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= 5; iCnt++)
        {
            cout<<iNo<<"\n";
        }
    }
};
int main()
{
    int iValue = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    Show sobj(iValue);

    sobj.Display();

    return 0;
}