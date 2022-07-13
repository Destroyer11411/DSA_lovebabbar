// Selection sort in ascending order

// #include<bits/stdc++.h>
// using namespace std;

// void selectionsort(vector<int> &arr,int n);

// void printvec(vector<int> a);

// int main()
// {
//     vector<int> arr;

//     cout<<"Enter the size of the array"<<endl;
//     int n;
//     cin>>n;

//     cout<<"Enter the array elements"<<endl;
//     int c;
//     for(int i=0;i<n;i++)
//     {
//         cin>>c;
//         arr.push_back(c);
//     }
    
//     cout<<"before sort"<<endl;
//     printvec(arr);


//     selectionsort(arr,n);

//     cout<<"After sort"<<endl;

//     printvec(arr);


// }


// void printvec(vector<int> a)
// {
//     for(int i=0;i<a.size();i++)
//     {
//         cout<<a[i]<<" ";

//     }
//     cout<<endl;
// }


// void selectionsort(vector <int> &a,int n)
// {
//     for(int i=0;i<n-1;i++)
//     {
//         int minindx=i;
//         for(int j=i+1;j<n;j++)
//         {
//             if(a[j]<a[minindx])
//             {
//                 minindx=j;
//             }
//         }
//         swap(a[i],a[minindx]);
//     }
// }





// Selection sort in descending order
#include<bits/stdc++.h>
using namespace std;

void selectionsort(vector<int> &arr,int n);

void printvec(vector<int> a);

int main()
{
    vector<int> arr;

    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;

    cout<<"Enter the array elements"<<endl;
    int c;
    for(int i=0;i<n;i++)
    {
        cin>>c;
        arr.push_back(c);
    }
    
    cout<<"before sort"<<endl;
    printvec(arr);


    selectionsort(arr,n);

    cout<<"After sort"<<endl;

    printvec(arr);


}


void printvec(vector<int> a)
{
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";

    }
    cout<<endl;
}


void selectionsort(vector <int> &a,int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minindx=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]>a[minindx])
            {
                minindx=j;
            }
        }
        swap(a[i],a[minindx]);
    }
}