#include<iostream>
using namespace std;

class Pattern
{
    public:
        int iNo;
    
    Pattern(int A)
    {
        this->iNo = A;
    }

    void DisplayPattern()
    {
        int iCnt = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        for(iCnt = -iNo; iCnt <= iNo; iCnt++)
        {
            cout<<iCnt<<"\t";
        }

        cout<<"\n";
    }
};
int main()
{
    int iValue = 0;

    cout<<"Enter a number : \n";
    cin>>iValue;

    Pattern pobj(iValue);

    pobj.DisplayPattern();

    return 0;
}