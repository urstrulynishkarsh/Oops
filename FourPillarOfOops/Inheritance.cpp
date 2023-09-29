#include<iostream>
using namespace std;


// in inheritance properties inherit from the super class  to the sub class 
// mode of inheritance public,private ,protected
 
// super class /parent class /base class 
class Animal{
    public:
        int age;
        int weight;

        // void eat()
        // {
        //     cout<<"Animal is eating";
        // }
};

// dervied class /child class /sub class

// public heree mode mode of inheritance
class Dog:private Animal{
    public:
        void print()
        {
            cout<<this->age;
        }



};




int main()
{
    Dog d;
    // d.eat();
    d.print();
}



/*


************************************************************************************************************
* Base Class      *                     mode of inheritance                                                *
* access Modifier ******************************************************************************************                                                                                               
*                 *   Public                 *  Protected                       *  Private                 *                           
************************************************************************************************************
* Public          *   Public                 *  Protected                       *  Private                 *                             
* Protected       *   Protected              *  Protected                       *  Private                 *                                  
* Private         *   NA(Hidden)             *  NA(Hidden)                      *  NA(Hidden)              *                    
************************************************************************************************************                                                                                                       *


*/