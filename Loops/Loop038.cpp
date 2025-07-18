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

        void PrintEvenFactors()
        {
            int iCnt = 0;

            if(iNo < 0)
            {
                iNo = -iNo;
            }   

            for(iCnt = 1; iCnt <= iNo; iCnt++)
            {
                if((iNo % iCnt == 0) && (iCnt % 2 == 0))
                {
                    cout<<"Even factors are : "<<iCnt<<"\n";
                }
            }
        }

};
int main()
{
    int iValue1 = 0;

    cout<<"Enter a number : \n";
    cin>>iValue1;


    Show sobj(iValue1);

    sobj.PrintEvenFactors();

    return 0;
}