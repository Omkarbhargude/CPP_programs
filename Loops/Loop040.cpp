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

        int MultFact()
        {
            int iCnt = 0;
            int iFact = 1;

            if(iNo < 0)
            {
                iNo = -iNo;
            }   

            for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
            {
                if(iNo % iCnt == 0)
                {
                    iFact = iFact * iCnt;
                }
            }


            return iFact;
        }

};
int main()
{
    int iValue1 = 0;
    int iRet = 0;

    cout<<"Enter a number : \n";
    cin>>iValue1;


    Show sobj(iValue1);

    iRet = sobj.MultFact();

    cout<<"Multiplication of factors is : "<<iRet<<"\n";

    return 0;
}