
// kinal - factor check
// number1 = 200
//number2 = 400
//check if number1 is a factor of number2

//check if 6 is a factor of 36, 6/36)??

#include <iostream>
using namespace std;

int main()
{
    //instantiation
    int number1 = 0;
    int number2 = 0;
    
    cout << "Enter a number 1: ";
    cin >> number1;
    
    cout << "Enter a number 2: ";
    cin >> number2;
   
    int result = number2%number1;
    
    if (result == 0 )
    {
        cout << "Number 1 is factor of Number 2!"<<endl;
        
    }  else 
    {
        cout << "Number 1 is not factor of Number 2"<<endl;
        
    }
  
    
}
