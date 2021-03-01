

//kinal - array and vector intro

//declare array of integers until 10

 //vector<int> evenNums;   
 //evenNums.push_back(2);
 
 
 //int evenNumbers[5]={2,4,6,8,10};  
 
 
 
 
 
 // I want a vector with name friends - dany, daddy, bhai, mummy, me

#include <iostream>
#include <vector>



using namespace std;
int main()
{
    
   
    
    string nameFriends [5] = {"dany", "daddy", "mammy", "bhai", "abhi"};
    
    vector <string> Friends;
    Friends.push_back("dany");
    Friends.push_back("daddy");
    Friends.push_back("mammy");
    Friends.push_back("bhai");
    Friends.push_back("abhi");
    
    cout << Friends.size();
    
    
    
    return 0;
    
}