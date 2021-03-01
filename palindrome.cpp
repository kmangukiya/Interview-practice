#include <iostream>
#include <string>
using namespace std;
int main()
{
    string ab = "";
    string ba = "";
    cin >> ab;
    int dumb = ab.length();
    if (dumb == 1 )
    {
        cout << ab << " is a palindrome" << endl;
    }
    else 
    {
    for(int ac = dumb -1 ; ac >= 0 ; ac=ac -1)
    {
        ba = ba + ab[ac];
        
    }
    
    if( ab == ba)
    {
        cout << ab << " is a palindrome" << endl;
    }
    else
    {
        cout << ab << " is not a palindrome" <<endl;
    }
    
    }

    
    
    
    return 0;
}












