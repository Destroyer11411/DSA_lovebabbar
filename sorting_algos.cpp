// Selection Sort
// #include<bits/stdc++.h>
// using namespace std;

// vector <int> selectionsort(vector <int> a,int n);

// int main()
// {
//     vector <int> a;
//     int n;
//     cout<<"Enter the length of the array"<<endl;
//     cin>>n;
//     int b;
//     cout<<"Enter array element"<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cin>>b;
//         a.push_back(b);
//     }

//     cout<<"Before sorting"<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cout<<a[i];

//     }
//     cout<<endl;

//     vector <int> res = selectionsort(a,n);

//     cout<<"After sorting"<<endl;

//     for(int i=0;i<n;i++)
//     {
//         cout<<res[i];
//     }
//     cout<<endl;

//     return 0;
// }

// vector <int> selectionsort(vector <int> a,int n)
// {
//     int mini = 0;
//     int i,j;

//     for(i=0;i<n-1;i++)
//     {
//         mini = i;
//         for(j=i;j<n;j++)
//         {
//             if(a[j]<a[mini])
//             {
//                 mini = j;
//             }
//         }
//         swap(a[mini],a[i]);
//     }

//     return a;
// }



// vector <int> selectionsort(vector <int> a,int n)
// {
//     int t=0;
//     int i,j;
//     for(i=0;i<n-1;i++)
//     {
//         t = i;
//         for(j=i;j<n;j++)
//         {
//             if(a[j]<a[t])
//             {
//                 t=j;
//             }
//         }
//         swap(a[t],a[i]);
//     }
//     return a;
// }


// -----------------------------------------------------------------------------------------------------------------------------------------------------------------
