#include<iostream>
using namespace std;

class Pattern
{
    public:
        int iNo;
        char Ch;
    
    Pattern(int A, char B)
    {
        this->iNo = A;
        this->Ch = B;
    }

    void DisplayPattern()
    {
        int iCnt = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            cout<<Ch<<"\t";
        }

        cout<<"\n";
    }
};
int main()
{
    int iValue = 0;
    char cValue = '\0';

    cout<<"Enter a number : \n";
    cin>>iValue;

    cout<<"Enter a character : \n";
    cin>>cValue;

    Pattern pobj(iValue,cValue);

    pobj.DisplayPattern();

    return 0;
}