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

        int EvenFactorial()
        {
            int iCnt = 0;
            int iFact = 1;

            for(iCnt = 1; iCnt <= iNo; iCnt++)
            {
                if(iCnt % 2 == 0)
                {
                    iFact = iFact * iCnt;
                }
            }

            return iFact;

        }
};
int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter a number : \n";
    cin>>iValue;

    Show sobj(iValue);

    iRet = sobj.EvenFactorial();

    cout<<"The even factorial of number is : "<<iRet<<"\n";

    return 0;
}