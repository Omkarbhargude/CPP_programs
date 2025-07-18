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

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        for(iCnt = iNo; iCnt >= 1; iCnt--)
        {
            cout<<iCnt<<"\n";
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