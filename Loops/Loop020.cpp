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

        void DisplayEvenFactors()
        {
            int iCnt = 0;

            //Updater
            if(iNo < 0)
            {
                iNo = -iNo;
            }

            for(iCnt = 1; iCnt <= iNo ; iCnt++)
            {
                if(((iNo % iCnt ) == 0) && ((iCnt % 2) == 0))
                {
                    cout<<"Even Factors are : "<<iCnt<<"\n";
                }
            }
        }
};
int main()
{
    int iValue = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    NNumber nobj(iValue);

    nobj.DisplayEvenFactors();

    return 0;
}