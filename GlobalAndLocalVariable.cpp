#include<iostream>
using namespace std;

int x=10; //global variable
int main()
{
 
    {
        cout<<"global variable"<<x<<endl;
    }

       int x=4;
    cout<<"local variable"<<x<<endl;
     cout<<"global variable"<<::x<<endl;



      {
        int x=40;
        cout<<"global variable"<<x<<endl;
            cout<<"global variable"<<::x<<endl;
    }
    
}