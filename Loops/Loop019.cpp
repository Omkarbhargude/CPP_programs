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

        void DisplayFactorNonFactors()
        {
            int iCnt = 0;

            //Updater
            if(iNo < 0)
            {
                iNo = -iNo;
            }

            for(iCnt = 1; iCnt <= iNo ; iCnt++)
            {
                if(iNo % iCnt == 0)
                {
                    cout<<"Factors are : "<<iCnt<<"\n";
                }
                else
                {
                    cout<<"Non Factors are :"<<iCnt<<"\n";
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

    nobj.DisplayFactorNonFactors();

    return 0;
}