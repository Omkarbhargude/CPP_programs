#include<iostream>
using namespace std;

class Demo
{
    public:
        int i,j;
        const int x,y;

        Demo() : x(30), y(40)
        {
            i = 0; j= 0; 
        }
        Demo(int a, int b, int c, int d) : x(c), y(d)
        {
            i = a;  j = b;
        }
};

int main()
{
    Demo obj1;                  // 0,0,30,40
    Demo obj2(1,2,3,4);         // 1,2,3,4
    
    cout<<"Values of obj1 : "<<obj1.i<<"\t"<<obj1.j<<"\t"<<obj1.x<<"\t"<<obj1.y<<"\n";
    cout<<"Values of obj2 : "<<obj2.i<<"\t"<<obj2.j<<"\t"<<obj2.x<<"\t"<<obj2.y<<"\n";

    obj1.i++;
    obj1.j++;
    //obj1.x++;
    //obj1.y++;
    
    return 0;
}