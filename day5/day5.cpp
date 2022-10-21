// 1.Arrays ----> to store collection of data types

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
	// int a[10]; //start from 0 to 9 and it stores 10 integers
	// a[0]; //here the index number must be small than size if we provide more than size then we get segmentation error
	// a[11]=10;
	// cout<<a[11];//it is random behaviour that it prints sometimes


	//Sum of the Numbers using arrays
	// int n;
	// cin>>n;
	// int a[n];
	// for (int i = 0; i < n; ++i)
	// {
	// 	cin>>a[i];
	// }
	// int sum=0;
	// for (int i = 0; i < n; ++i)
	// {
	// 	sum=sum+a[i];
	// }
	// cout<<sum;



	//don't use character array for store collection of characters use string
	// int n;
	// cin>>n;
	// char a[n],a2[n];

// }



// 2. 2-D Array ---> matrix
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	//taking matrix values as input
// 	// 	3 4 --->3X4 matrix
// 	// 1 3 4 5
// 	// 7 8 9 10
// 	// 2 6 13 15
// 	int row,column;
// 	cin>>row>>column;

// 	int a[row] [column]; //here it means the size of array '4' make it 3 additional copies
// 	// A[0,0]	A[0,1]	A[0,2]
//     // A[1,0]	A[1,1]	A[1,2]
//  	// A[2,0]	A[2,1]	A[2,2]
// 	// A[3,0]	A[3,1]	A[3,2]

// 	//Taking matrix input
// 	for (int i = 0; i < row; ++i)
// 	{
// 		for (int j = 0; j < column; ++j)
// 		{
// 			cin>>a[i][j];

// 		}
// 	}

	
// 	//Giving Matrix Output
// 	for (int i = 0; i < row; ++i)
// 	{
// 		for (int j = 0; j < column; ++j)
// 		{
// 			cout<<a[i][j] <<" "; //here space for each row value
// 		}
// 		cout<<endl; //if one row value is completed then printing in next line
// 	}
// }


// 3.Size limits of Arrays
//local
// #include <bits/stdc++.h>

// using namespace std;

// int main(){
// 	// int n= 1e7; //local array(inside the main function) size limit 10^5
// 	// int a[n]; //a[10^7]
// 	// a[n-1]=7;  //assigning last element value =7 {a[10^7-1]=7}
// 	// cout<<a[n-1]; //get segmentation fault --> we can't declare array value <10^5

// 	int n= 1e5;
// 	int a[n];
// 	a[n-1]=7;
// 	cout<<a[n-1];

// }

//global
#include <bits/stdc++.h>
//global array limit is in order of 10^7
//10^6,10^7 --->avoid in online contest
using namespace std;
const int n = 1e7; //if we are declaring variable at global we need to define const keyword
int a[n];  
int main(){

	a[n-1]=7;
	cout<< a[n-1];	

}