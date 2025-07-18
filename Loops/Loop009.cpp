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

    int Summation()
    {
        int iCnt = 0, iSum = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            iSum = iSum + iCnt;
        }

        return iSum;
    }
};
int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    Show sobj(iValue);

    iRet = sobj.Summation();

    cout<<"Summation of given number is  : "<<iRet<<"\n";

    return 0;
}