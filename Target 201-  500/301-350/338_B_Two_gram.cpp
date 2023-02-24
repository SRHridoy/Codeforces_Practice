//  main.cpp
//  Two-gram
//  Created by Esraa Ali on 16/11/2021.
#include <iostream>
using namespace std;
int main()
{
    int numOfChar;
    cin>>numOfChar;
    string input;
    cin>>input;
    int result = 0;
    int counter = 0;
    string ans;//final string
    for(int i=0; i<numOfChar-1; i++)
    {
        counter=0;
        for(int j=0; j<numOfChar-1; j++)
        {
            if(input[i]==input[j] && input[i+1]==input[j+1])//for check
            {
                counter++;//increment of counter
                if(result<counter)
                {
                    result=counter;
                    //concationation to 2 chars
                    ans = string(1,input[i])+string(1,input[i+1]);
                }
            }
        }
    }
    cout<<ans<<endl;
}
