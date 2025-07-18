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

        int DiffFactorial()
        {
            int iCnt = 0;
            int iFact1 = 1, iFact2 = 1;

            for(iCnt = 1; iCnt <= iNo; iCnt++)
            {
                if(iCnt % 2 == 0)
                {
                    iFact1 = iFact1 * iCnt;
                }
                else
                {
                    iFact2 = iFact2 * iCnt;
                }
            }

            return (iFact1 - iFact2);

        }
};
int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter a number : \n";
    cin>>iValue;

    Show sobj(iValue);

    iRet = sobj.DiffFactorial();

    cout<<"The Diff between odd and even factorial of number is : "<<iRet<<"\n";

    return 0;
}