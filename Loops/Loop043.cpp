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

        int SumNonFact()
        {
            int iCnt = 0;
            int iSum = 0;

            if(iNo < 0)
            {
                iNo = -iNo;
            }
            
            for(iCnt = 1; iCnt <= iNo; iCnt++)
            {
                if(iNo % iCnt != 0)
                {
                    iSum = iSum + iCnt;
                }
            }

            return iSum;
        }
};
int main()
{
    int iValue1 = 0;
    int iRet = 0;

    cout<<"Enter a number : \n";
    cin>>iValue1;


    Show sobj(iValue1);

    iRet = sobj.SumNonFact();

    cout<<"Summation of non factors are : "<<iRet<<"\n";

    return 0;
}