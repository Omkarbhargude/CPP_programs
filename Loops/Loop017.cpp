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

        void DisplayFactors()
        {
            int iCnt = 0;

            //Updater
            if(iNo < 0)
            {
                iNo = -iNo;
            }

            for(iCnt = 1; iCnt <= iNo; iCnt++)
            {
                if(iNo % iCnt == 0)
                {
                    cout<<iCnt<<"\n";
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

    nobj.DisplayFactors();

    return 0;
}