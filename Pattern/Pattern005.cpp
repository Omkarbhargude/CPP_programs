#include<iostream>
using namespace std;

class Pattern
{
    public:

        void Display()
        {
            int iCnt = 0;

            for(iCnt = 1; iCnt <= 4; iCnt++)
            {
                cout<<"*\t";
            }

            cout<<"\n";

            for(iCnt = 1; iCnt <= 4; iCnt++)
            {
                cout<<"*\t";
            }

            cout<<"\n";

            for(iCnt = 1; iCnt <= 4; iCnt++)
            {
                cout<<"*\t";
            }

            cout<<"\n";
        }
};

int main()
{
    Pattern pobj;

    pobj.Display();


    return 0;
}