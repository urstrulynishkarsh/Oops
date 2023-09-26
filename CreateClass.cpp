#include <iostream>
using namespace std;
class Nishkarsh
{
   // properties 
    // if we don't define the data members  public /private then by default it comes in private then we can't access from ouside the class
    string name; // 24
    int age;     // 4
    char ch;     // 4
};
int main()
{
    // if the class is empty then yhe output will one the sizewill never 0 because we can't identify the class thats why minimum size is zero
    cout << "size of nishkarsh class: " << sizeof(Nishkarsh) << endl; // 32
}