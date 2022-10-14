
// Stairs Pattern
// #include<bits/stdc++.h>
// using namespace std;


// void stairs(int n)
// {
//     cout<<"Arrived here"<<endl;

//     char a[n];
//     for(int i=0;i<n;i++)
//     {
//         a[i] = ' ';
//     }



    
//     for(int i=0;i<n;i++)
//     {
//         a[n-i-1]='#';
//         for(int j=0;j<n;j++)
//         {
//             cout<<a[j];
//         }
//         cout<<endl;
//     }
// }

// int main()
// {
//     int n;
//     cout<<"Enter the values"<<endl;
//     cin>>n;

//     stairs(n);


//     return 0;

// }





// Diagonal difference

// C++ Program to print the Diagonals of a Matrix

// #include <bits/stdc++.h>
// using namespace std;

// const int MAX = 100;

// // Function to print the Principal Diagonal
// void printPrincipalDiagonal(int mat[][MAX], int n)
// {
// 	cout << "Principal Diagonal: ";

// 	for (int i = 0; i < n; i++) {
// 		for (int j = 0; j < n; j++) {

// 			// Condition for principal diagonal
// 			if (i == j)
// 				cout << mat[i][j] << ", ";
// 		}
// 	}
// 	cout << endl;
// }

// // Function to print the Secondary Diagonal
// void printSecondaryDiagonal(int mat[][MAX], int n)
// {
// 	cout << "Secondary Diagonal: ";

// 	for (int i = 0; i < n; i++) {
// 		for (int j = 0; j < n; j++) {

// 			// Condition for secondary diagonal
// 			if ((i + j) == (n - 1))
// 				cout << mat[i][j] << ", ";
// 		}
// 	}
// 	cout << endl;
// }

// // Driver code
// int main()
// {
// 	int n = 4;
// 	int a[][MAX] = { { 1, 2, 3, 4 },
// 					{ 5, 6, 7, 8 },
// 					{ 1, 2, 3, 4 },
// 					{ 5, 6, 7, 8 } };

// 	printPrincipalDiagonal(a, n);
// 	printSecondaryDiagonal(a, n);
// 	return 0;
// }











// #include<bits/stdc++.h>
// using namespace std;





// int main()
// {
// 	// 3579
// 	// 2468


// 	int n=4;
// 	int a[4] = {3,5,7,9};
// 	int b[4] = {2,4,6,8};

// 	int c[8];
// 	int j=0;

// 	// for(int i=0;i<4;i++)
// 	// {
// 	// 	c[j++] = a[i];
// 	// }

// 	// for(int i=0;i<4;i++)
// 	// {
// 	// 	c[j++] = b[i];
// 	// }

// 	int one=0;
// 	int two=0;


// 	for (int i=0;i<8;i++)
// 	{
// 		if(i%2==0)
// 		{
// 			c[j++]=b[one++];
// 		}
// 		else
// 		{
// 			c[j++] = a[two++];
// 		}
// 	}



	//sort(c,c+8);


	// for(int i=0;i<8;i++)
	// {
	// 	cout<<c[i]<<" ";
	// }

	// return 0;



	



// }




// 1 2 3 3 4 4





// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int a[6] = {1,2,3,3,4,4};


// 	sort(a,a+6);
// 	int j=0;

// 	int b[6];
// 	 //          n-1
// 	for(int i=0;i<5;i++)
// 	{
// 		if(a[i]!=a[i+1])
// 		{
// 			a[j++] = a[i];
// 		}
// 	}

// 	a[j++] = a[5];




// 	for(int i=0;i<j;i++)
// 	{
// 		cout<<a[i]<<" ";
// 	}

// 	return 0;
// }






// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int n=6;

// 	int a[6];

// 	while(n>0)
// 	{
// 		cin>>a[--n];
// 	}

// 	for(int i=0;i<6;i++)
// 	{
// 		cout<<a[i]<< " ";
// 	}

// 	return 0;
// }