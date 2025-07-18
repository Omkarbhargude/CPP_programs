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

        int DiffFact()
        {
            int iCnt = 0;
            int iSum1 = 0, iSum2 = 0;

            if(iNo < 0)
            {
                iNo = -iNo;
            }
            
            for(iCnt = 1; iCnt <= iNo; iCnt++)
            {
                if(iNo % iCnt == 0)
                {
                    iSum1 = iSum1 + iCnt;
                }
                else if(iNo % iCnt != 0)
                {
                    iSum2 = iSum2 + iCnt;
                }
            }

            return iSum1 - iSum2;
        }
};
int main()
{
    int iValue1 = 0;
    int iRet = 0;

    cout<<"Enter a number : \n";
    cin>>iValue1;


    Show sobj(iValue1);

    iRet = sobj.DiffFact();

    cout<<"Diff between factors and non factors are : "<<iRet<<"\n";

    return 0;
}