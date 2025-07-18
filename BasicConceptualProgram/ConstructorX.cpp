#include<iostream>
using namespace std;

class Arithematic
{
    public:
        int No1;
        int No2;

        Arithematic()
        {
            cout<<"Inside default cnostructor\n";
            No1 = 0;
            No2 = 0;
        }
        Arithematic(int A, int  B)
        {
            cout<<"Inside parametrised cnostructor\n";
            No1 = A;
            No2 = B;
        }
        ~Arithematic()
        {
            cout<<"Inside destructor\n";
        }
        
        int Addition()
        {
            int Ans = 0;
            Ans = No1 + No2;
            return Ans;
        }
        int Substraction()
        {
            int Ans = 0;
            Ans = No1 - No2;
            return Ans;   
        }
    };

int main()
{
    Arithematic obj1;
    Arithematic obj2(11,10);
    int Ret = 0;

    Ret = obj1.Addition();
    cout<<"Addition of obj1 is : "<<Ret<<"\n";

    Ret = obj2.Addition();
    cout<<"Addition of obj2 is : "<<Ret<<"\n";
    
    Ret = obj1.Substraction();
    cout<<"Substraction of obj1 is : "<<Ret<<"\n";

    Ret = obj2.Substraction();
    cout<<"Substraction of obj2 is : "<<Ret<<"\n";

    return 0;
}