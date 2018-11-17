#include <iostream>
#include<vector>
using namespace std;
//this recursion function take a character array and empty vector to put our combination in it
//and take string called now put the current char in it
//take our input as a string like "123" or "367" and so on
// int called index to know our index
void Rec(string *Arr , vector<string> &Combinations , string now , string Myinput, int index){
// We now putting our base case
//if the combination in now string consist of the same input number we will put it in the vector and return it
//else we will loop and put the first char of the first word in now and call the function again
//to make the combination then we will remove the last char in char and make a new combination and so on
//till we finish our combination
if(now.size()==Myinput.length()){
    Combinations.push_back(now);
    }
else
{
    for(int i=0; i<Arr[Myinput[index]-'0'].length(); i++){

        now+=Arr[Myinput[index]-'0'][i];
        Rec(Arr,Combinations,now,Myinput,index+1);
        now=now.substr(0,now.length()-1);
    }

}


}

using namespace std;

int main()
{
vector<string>GetCombinations;
//our character in array
string MyCharacters[10] = {" "," ","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
string input;
cin >> input;
Rec( MyCharacters , GetCombinations , "" , input , 0 );
//finally we will print our combination vector
for( int i = 0 ; i < GetCombinations.size(); i++ ){
    cout <<GetCombinations[i] << endl ;
}

    return 0;
}
