#include<iostream>
using namespace std;

class NNumber
{
    public:
        int iNo;

        // Constructor
        NNumber(int a)
        {
            this->iNo = a;
        }

        int SumFactor()
        {
            int iCnt = 0, iSum = 0;

            //Updater
            if(iNo < 0)
            {
                iNo = -iNo;
            }

            for(iCnt = 1; iCnt <= (iNo / 2) ; iCnt++)
            {
                if(iNo % iCnt == 0)
                {
                    iSum = iSum + iCnt;
                }
            }

            return iSum;
        }
};
int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    NNumber nobj(iValue);

    iRet = nobj.SumFactor();

    cout<<"Summation of factors are : "<<iRet<<"\n";
    return 0;
}