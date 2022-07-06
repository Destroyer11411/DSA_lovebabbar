

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



//Linear search

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