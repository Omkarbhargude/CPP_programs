#include<iostream>
using namespace std;


class Digit
{
    public:

        int iNo;

        Digit(int a)
        {
            this->iNo = a;
        }

        void Display()
        {
            int iDigit = 0;

            if(iNo < 0)
            {
                iNo = -iNo;
            }

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                cout<<iDigit<<"\n";
                iNo = iNo / 10;
            }
        }
};
int main()
{
    int iValue = 0;

    cout<<"Enter the value : \n";
    cin>>iValue;

    Digit dobj(iValue);

    dobj.Display();


    return 0;
}