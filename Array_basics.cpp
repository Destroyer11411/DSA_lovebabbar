

// Sum of array elements
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter the size of the array"<<endl;
//     cin>>n;

//     int a[n];
//     int sum=0;
//     cout<<"Enter the array elements"<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//         sum+=a[i];

//     }

//     cout<<"The sum of the elements is: "<<sum<<endl;
//     return 0;

// }

// Linear search

// #include<iostream>
// using namespace std;

// bool search(int arr[],int n,int key);

// int main()
// {
//     int n,key;

//     cout<<"enter the size of the array"<<endl;
//     cin>>n;

//     int a[n];

//     cout<<"Enter the array elements"<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];

//     }

//     cout<<"Enter the key element"<<endl;
//     cin>>key;

//     if(search(a,n,key))
//     {
//         cout<<"Found the element"<<endl;
//     }

//     else{
//         cout<<"The element was not found"<<endl;
//     }

//     return 0;
// }

// bool search(int a[],int n,int key)
// {
//     for(int i=0;i<n;i++)
//     {
//         if(a[i]==key)
//         {
//             return true;
//         }

//         else{
//             return false;
//         }
//     }
// }

// Reversing an array

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter the value of n"<<endl;

//     cin>>n;
//     int m=n;

//     int a[n];
//     cout<<"Enter the array elements"<<endl;
//     while(m--)
//     {
//         cin>>a[m];
//     }
//     cout<<"reversed array is"<<endl;

//     for(int i=0;i<n;i++)
//     {
//         cout<<a[i]<<"\n";
//     }
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     int n=10;
//     int b[10];
//     int a=0;
//     while(n--)
//     {
//         b[a++] = arr[n];
//     }

//     for(int i=0;i<10;i++)
//     {
//         cout<<b[i]<<endl;
//     }
// }

// #include<iostream>
// using namespace std;

// void printarray(int a[],int n);
// void reverse(int arr[],int n);

// int main()
// {
//     int n=5;

//     int arr[n]={1,2,3,4,5};
//     int brr[n]={10,9,8,7,6};

//     reverse(arr,n);
//     reverse(brr,n);

//     cout<<"Array 1 reversed"<<endl;
//     printarray(arr,n);
//     cout<<endl;
//     cout<<"Array 2 reversed"<<endl;
//     printarray(brr,n);
//     cout<<endl;

//     return 0;
// }

// void printarray(int a[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         cout<<a[i]<<"\t";

//     }
// }

// void reverse(int a[],int n)
// {
//     int s=0;
//     int e=n-1;

//     for(int i=0;i<n;i++)
//     {
//         swap(a[s],a[e]);
//         s++;
//         e--;
//     }
// }

// Homework
// swapping alternate elements
// #include<iostream>
// using namespace std;

// void printarray(int a[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         cout<<a[i]<<"\t";

//     }
// }

// void reversealternate(int a[],int n)
// {
//     int s=0;
//     int e=n-1;

//     for(int i=0;i<n;i++)
//     {
//         if(s<e){
//             swap(a[s],a[e]);
//            s=s+2;
//            e=e-2;
//         }
//         else{
//             break;
//         }

//     }
// }

// int main()
// {
//     int a[10] = {1,2,3,4,5,6,7,8,9,10};
//     reversealternate(a,10);
//     printarray(a,10);
// }

// finding unique element in the array

// #include<iostream>
// using namespace std;

// void uniqueele(int a[],int n);
// void printarray(int a[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         cout<<a[i]<<"\t";

//     }
// }

// int main()
// {
//     int n=10;
//     int arr[n] = {3,2,2,3,4,5,2,1,7,8};

//     uniqueele(arr,n);
//     return  0;

// }

// void uniqueele(int a[],int n)
// {
//     int i,j;

//     for(i-0;i<n;i++)

//     {
//         for(j=0;j<n;j++)
//         {
//             if((a[i]==a[j]) && (i!=j))
//             {
//                 break;

//             }

//             if(j==n)
//             {
//                 cout<<a[i]<<endl;
//             }

//         }
//         // if(i==j)
//         //     cout<<a[i]<<endl;

//     }
// }

// swapping alternate
// #include<iostream>
// using namespace std;

// void alternate(int a[],int n);
// void printarray(int a[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         cout<<a[i]<<"\t";

//     }
// }

// int main()
// {
//     int n=10;
//     int a[n] = {1,2,3,4,5,6,7,8,9,10};

//     alternate(a,n);
//     printarray(a,n);

// }

// void alternate(int a[],int n)
// {
//     int s=0;
//     int e=1;

//     for(int i=0;i<n;i++)
//     {
//         if(s<n && e<n)
//         {
//             swap(a[s],a[e]);
//             s=s+2;
//             e=e+2;
//         }
//     }
// }

// Pair sum
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     int s=0;
//     cout<<"Enter the length of the array"<<endl;
//     cin>>n;

//     int a[n];

//     int i,j;

//     cout<<"Enter the array elements"<<endl;
//     for(i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }

//     cout<<"Enter the sum element"<<endl;
//     cin>>s;

//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             if(a[i]+a[j]==s)
//             {
//                 cout<<a[i]<<" + "<<a[j]<<" = "<<s<<endl;
//             }
//         }
//     }

// }

// Triplets sum
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     int sum=0;

//     cout<<"Enter the array length"<<endl;
//     cin>>n;
//     int a[n];

//     cout<<"Enter the array elements"<<endl;
//     int i,j,k;
//     for(i=0;i<n;i++)
//     {
//         cin>>a[i];

//     }

//     cout<<"Enter the sum element"<<endl;
//     cin>>sum;

//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             for(k=0;k<n;k++)
//             {
//                 if(a[i]+a[j]+a[k]==sum)
//                 {
//                     cout<<a[i]<<" + "<<a[j]<<" + "<<a[k]<<" + "<<" = "<<sum<<endl;
//                 }
//             }
//         }
//     }

// }



// Binary search

// #include<bits/stdc++.h>
// using namespace std;

// int bsearch(int a[],int n,int key);

// int main()
// {
//     int n;
//     cout<<"Enter the length of the array"<<endl;
//     cin>>n;

//     int a[n];

//     int i;

//     cout<<"Enter the sorted elements"<<endl;
//     for(i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }

//     int key;

//     cout<<"Enter the element to be searched"<<endl;
//     cin>>key;

//     if(bsearch(a,n,key))
//     {
//         cout<<"The element was found"<<endl;
//     }

//     else{
//         cout<<"The element was not found"<<endl;

//     }

//     return 0;



// }

// int bsearch(int a[],int n,int key)
// {
//     int l=0;
//     int r=n-1;
//     int mid=0;

//     while(l<=r)
//     {
//         mid = l + (r-l)/2;

//         if(key==mid)
//         {
//             return 1;
//         }

//         else if(key>a[mid])
//         {
//             l = mid+1;

//         }

//         else if(key<a[mid])
//         {
//             r = mid-1;
//         }

//     }

//     return 0;
// }





