#include<iostream>
using namespace std;

void numbershow(int n)
{
    cout<<n<<" "<<endl;
}

int main(){


    // when i do inline fun ction so interally it remove the above function and work as a line cout<<10<<endl 
    numbershow(10);
    numbershow(10);
    numbershow(10);
    numbershow(10);
    numbershow(10);

    numbershow(10);
    numbershow(10);

    numbershow(10);
    numbershow(10);
    numbershow(10);
    numbershow(10);
    numbershow(10);
    numbershow(10);

    numbershow(10);
    numbershow(10);


    // if we use more inline fuction then size of executable will increased
    //  we can check through g++ InlineFunction.cpp 
    // then ls -al a.out
}