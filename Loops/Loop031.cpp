#include<iostream>
using namespace std;

class Loop
{
    public:

        void Display()
        {
            int iCnt = 0;

            for(iCnt = 1; iCnt <= 5; iCnt++)
            {
                cout<<"MARVELLOUS\n";
            }
        }
};
int main()
{
    Loop obj;


    obj.Display();


    return 0;
}