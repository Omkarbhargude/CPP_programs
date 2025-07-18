#include<iostream>
using namespace std;

class Show
{
    public:

        int iNo;
        int iFrequency;

        Show(int a, int b)
        {
            this->iNo = a;
            this->iFrequency = b;

        }

        void Accept()
        {
            int iCnt = 0;
            if(iFrequency < 0)
            {
                iFrequency = -iFrequency;
            }   

            for(iCnt = 1; iCnt <= iFrequency; iCnt++)
            {
                cout<<iNo<<"\n";
            }
        }

};
int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout<<"Enter a number : \n";
    cin>>iValue1;

    cout<<"Enter Frequency : \n";
    cin>>iValue2;

    Show sobj(iValue1, iValue2);

    sobj.Accept();

    return 0;
}