#include<iostream>
using namespace std;

#define ERR_INVALID_INPUT -1
class Show
{
    public:
    
    int iNo;
    Show(unsigned int a)
    {
        this->iNo = a;
    }

    unsigned long Factorial()
    {
        int iCnt = 0;
        unsigned long iFact = 1;

        if(iNo < 0)
        {
            return ERR_INVALID_INPUT;
        }

        for(iCnt = iNo; iCnt >= 1; iCnt--)
        {
            iFact = iFact * iCnt;
        }

        return iFact;
    }
};
int main()
{
    unsigned int iValue = 0;
    unsigned long iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    Show sobj(iValue);

    iRet = sobj.Factorial();

    if(iRet == ERR_INVALID_INPUT)
    {
        cout<<"Invalid Input\n";
    }
    else
    {
        cout<<"Factorial of given number is  : "<<iRet<<"\n";
    }
    return 0;
}