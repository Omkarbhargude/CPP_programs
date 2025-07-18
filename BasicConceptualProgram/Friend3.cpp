#include<iostream>
using namespace std;

class Hello
{
    public:
        void Display();
        void Accept();
};

class Demo
{
    public:     int i;
    private:    int j;
    protected:  int k;
    public:
        Demo()
        {
            i = 10; j = 20; k = 30;
        }
        friend void Hello::Display();
        friend void Hello::Accept();
};

void Hello::Display()
{
    Demo obj;
    cout<<obj.i<<"\n";
    cout<<obj.j<<"\n";
    cout<<obj.k<<"\n";
}

void Hello::Accept()
{
    Demo obj;
    cout<<obj.i<<"\n";
    cout<<obj.j<<"\n";
    cout<<obj.k<<"\n";
}

int main()
{
    Hello hobj;
    hobj.Display();
    hobj.Accept();

    return 0;
}