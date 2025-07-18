#include<iostream>
using namespace std;

class Loop
{
    public:

        void Display()
        {
            int iCnt = 0;

            for(iCnt = 5; iCnt >= 1; iCnt--)
            {
                cout<<iCnt<<"\n";
            }
        }
};
int main()
{
    Loop obj;


    obj.Display();


    return 0;
}