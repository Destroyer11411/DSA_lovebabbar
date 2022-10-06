#include<bits/stdc++.h>
using namespace std;

void solve(string digit, string output,int index,vector <string> &ans,string mapping[])
{
    // base case
    if(index>=digit.length()){
        ans.push_back(output);
        return;
    }

    int number = digit[index] - '0';
    string value = mapping[number];

    for(int i=0;i<value.length();i++)
    {
        output.push_back(value[i]);
        solve(digit,output,index+1,ans,mapping);
        output.pop_back();
    }
}

vector<string> letterCombinations(string digits)
{
    vector<string> ans;

    if(digits.length()==0)
        return ans;
    
    string output = " ";
    int index = 0;

    string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxys"};
    //                    0   1   2     3    4      5     6      7      8     9
    solve (digits,output,index,ans,mapping);
    return ans;
}



int main()
{
    string digits;
    cout<<"Enter the number sequence"<<endl;
    cin>>digits;

    vector<string> combinations = letterCombinations(digits);

    cout<<"The combination of the digits are"<<endl;
    //cout<<combinations<<endl;
    for(int i=0;i<combinations.size();i++)
    {
        cout<<combinations[i]<<" ";
    }

    return 0;
}