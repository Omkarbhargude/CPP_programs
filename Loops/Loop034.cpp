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

        void Accept()
        {
            if(iNo < 0)
            {
                iNo = -iNo;
            }   

            int iCnt = 1;
            while(iCnt <= iNo)
            {
                cout<<"*\n";
                iCnt++;
            }
        }
        

};
int main()
{
    int iValue = 0;

    cout<<"Enter a number : \n";
    cin>>iValue;

    Show sobj(iValue);

    sobj.Accept();

    return 0;
}