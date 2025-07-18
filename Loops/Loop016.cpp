#include<iostream>
using namespace std;

class NNumber
{
    public:

    int iNo;

    NNumber(int a)
    {
        this->iNo = a;
    }

    void DisplayFactors()
    {
        int iCnt = 0;

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