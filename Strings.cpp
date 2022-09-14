// #include<bits/stdc++.h>
// using namespace std;

// void reverse(char name[],int n)
// {
//     int s=0;
//     int e= n-1;


//     while(s<e)
//     {
//         swap(name[s++],name[e--]);
//     }
// }

// int getlength(char name[])
// {
//     int c=0;
//     for(int i=0; name[i]!='\0';i++)
//     {
//         c++;
//     }
//     return c;
// }

// bool checkPalindrome(char name[],int n)
// {
//     int s=0,e=n-1;
//     while(s<=e)
//     {
//         if(name[s]!=name[e])
//         {
//             return 0 ;
//         }

//         else{
//             s++;
//             e--;
//         }
//     }
//     return 1;
    
// }


// int main()
// {

//     char name[20];

//     cout<<"Enter your name"<<endl;
//     cin>>name;

//     cout<<"Your name is "<<name <<endl;

//     //cout<<getlength(name)<<endl;
    
//     int length = getlength(name);

//     cout<<length<<endl;

//     // reverse(name,length);
//     // cout<<name<<endl;

//     if(checkPalindrome(name,length))
//     {
//         cout<<"The string is pallindrome"<<endl;

//     }

//     else{
//         cout<<"The string is not a pallindrome"<<endl;
//     }


// }

















// Valid pallindrome

// #include<bits/stdc++.h>
// using namespace std;

// bool valid(char s)
// {
//     if((s>='a' && s<='z')|| (s>='A' && s<='Z') || (s>=0 && s<=9))
//     {
//         return 1;
//     }
//     return 0;

// }
// char toLowercase(char ch)
// {
//     if((ch >='a' && ch<='z') || (ch>='0' && ch<='9')){
//         return ch;
//     }

//     else{
//         ch = ch - 'A' + 'a';
//         return ch;
//     }
// }

// bool validPallindrome(string str){

//     int s=0;
//     int e = str.length()-1;

//     while(s<e)
//     {
//         if(str[s]!=str[e])
//         {
//             return 0;

//         }

//         else{
//             s++;
//             e--;

//         }
//     }
//     return 1;



// }

// bool checkValidPallindrome(string s){
//     string temp = "";
//     int i;
//     for(i=0;i<s.length();i++)
//     {
//         if(valid(s[i]))
//         {
//             temp.push_back(s[i]);
//         }
//     }

//     for(i=0;i<temp.length();i++)
//     {
//         temp[i]  =toLowercase(temp[i]);
//     }


//     return validPallindrome( temp);




// }

// int main()
// {
//     string in;
//     cout<<"Enter the string for the program"<<endl;
//     cin>>in;

//     if (checkValidPallindrome( in))
//     {
//         cout<<"The entered input is an actual valid pallindrome"<<endl;

//     }
//     else{
//         cout<<"The entered input is not an valid pallindrome"<<endl;

//     }


// }




// maximum occuring character

// #include<bits/stdc++.h>
// using namespace std;


// int maxOccChar(string s){
//     int a[26] = {0};
//     int n = s.length();

//     for(int i=0;i<n;i++)
//     {
//         char ch = s[i];

//         int num = 0;
//         num = ch - 'a';

//         a[num]++;
//     }

//     int max=-1;

//     for(int i=0;i<26;i++)
//     {
//         if(a[i]>max)
//         {
//             max = a[i];
//         }
//     }

//     return max;
    
// }

// int main()
// {
//     string s;
//     cout<<"Enter the string "<<endl;
//     cin>>s;

//     int res = maxOccChar(s);

//     cout<<"The maximum occuring character is "<<  char(res+97)<<endl;
//     return 0;

// }





// replace spaces with @40

#include<bits/stdc++.h>
using namespace std;

string replaceSpaces(string s)
{
    string temp ="";

    for(int i = 0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
            temp.push_back("@40");

        }

        else{
            temp.push_back(s[i]);

        }
    }

    return temp;
}

int main()
{
    string s;

    cout<<"Enter the string "<<endl;
    cin>>s;

    cout<<replaceSpaces(s)<<endl;

}
























