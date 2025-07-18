#include<iostream>
using namespace std;


class Pattern
{
    public:

        int iNo;

        Pattern(int a)
        {
            this->iNo = a;
        }

        void Display()
        {
            int iCnt = 0;

            if(iNo < 0)
            {
                iNo = -iNo;
            }

            for(iCnt = 1; iCnt <= iNo; iCnt++)
            {
                cout<<"$\t";
            }

            cout<<"\n";
        }
};
int main()
{
    int iValue = 0;

    cout<<"Enter the frequency : \n";
    cin>>iValue;

    Pattern obj(iValue);

    obj.Display();


    return 0;
}