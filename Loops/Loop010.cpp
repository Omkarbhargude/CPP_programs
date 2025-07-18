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

    int Factorial()
    {
        int iCnt = 0, iFact = 1;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            iFact = iFact * iCnt;
        }

        return iFact;
    }
};
int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    Show sobj(iValue);

    iRet = sobj.Factorial();

    cout<<"Factorial of given number is  : "<<iRet<<"\n";

    return 0;
}