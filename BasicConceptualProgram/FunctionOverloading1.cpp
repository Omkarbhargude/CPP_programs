#include<iostream>
using namespace std;

class Demo
{
    public:
        int Addition(int no1, int no2)              // Addition2@ii
        {
            cout<<"Inside first addition\n";
            return no1+ no2;
        }

        int Addition(int no1, int no2, int no3)     // Addition3@iii
        {
            cout<<"Inside second addition\n";
            return no1+ no2 + no3;
        }

        float Addition(float no1, float no2)        // Addition2@ff
        {
            cout<<"Inside third addition\n";
            return no1+ no2;
        }    
};

int main()
{
    Demo obj;

    cout<<obj.Addition(10,11)<<"\n";
    cout<<obj.Addition(10,11,21)<<"\n";
    cout<<obj.Addition(10.0f,11.2f)<<"\n";
    
    return 0;
}


/*

void fun();
void fun(int a);

void fun()
int fun()

int fun(int a, int b)
int fun(int i, int j)

void fun(int i, float f)
void fun(float i, int f)

int fun(int a, int b)
int fun(int b, int a)

void fun(int a, int b, int c)
void fun(int a, int b, int c, int d)
void fun(int a, int b)
void fun(int a)

void fun(int i)
void gun(int i, int j)

void fun(int i)
int fun(int i)



*/