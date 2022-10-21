// 	Pointers
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	//every variable occupies some memory and the memory have address defined 
// 	// int x;
// 	// cout<<&x;

// 	//
// 	// int x;
// 	int x=5;
// 	int *p_x; //here p_x is a pointer that stores integer address
// 	p_x=&x;
// 	cout <<*p_x<<endl; //here we can access the values by using pointer variable it will access the memory value
// 	cout<<p_x<<endl; //the x value stored in address of p_x(0x7ffdc1c824ac)

// 	//modify x value using pointers
// 	*p_x=90;
// 	cout<<*p_x<<endl;
// 	cout<<x<<endl; //here the x value changed 5--->90 using pointers

// 	//Pointer addition

// 	p_x=p_x+1; //here the p_x= p_x(4 bytes)+ 1(4 bytes)= 5(8bytes will ocuupies)
// 	cout<<sizeof(p_x)<<endl; // here the p_x size is 8

// }


//Arrays and Pointers
// Arrays ---> arrays allocation in memory is continous
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// 	int a[10];
// 	//here each block contains 4 bytes bcoz the each block has integer value
// 	//[  ][  ][  ][  ][  ][  ][  ][  ][  ][  ]
// 	//a[0]a[1]a[2]a[3]a[4]a[5]a[6]a[7]a[8]a[9]
// 	a[0]=5;
// 	a[1]=7;
// 	cout<<a<<endl;
// 	cout<<*a<<endl;// we defined all the values of array but we get first array value
// 	// a{array address}<------>&a[0]{first memory address} is equal ------> denote first element in array
// 	// a+1; //point second block  of integer a[1]
// 	// *(a+1)---->a[1] ---> same {points at second block}
// 	// *(a+2)---->a[2] ---> same{points at third block}
// 	// like above it will continue
	
// }

// Double Pointers
// #include <bits/stdc++.h>

// using namespace std;

// int main(){
// 	// int *p; //it is a pointer that store integer address
// 	// int **pp; //it is a pointer that store intger pointer address
// 	int x=4;
// 	int *p,**pp;
// 	p=&x;
// 	pp=&p;
// 	cout<<*pp<<endl; //prints &x address (we stored x address of x in p)
// 	cout<<*p<<endl; //prints x value 
// }

// #include <bits/stdc++.h>

// using namespace std;

// int main(){
// 	//single pointer
// 	int x=4;
// 	int *p_x=&x;
// 	cout<<"Addr x: "<<&x<<endl;
// 	cout<<"Val p_x: "<<p_x<<endl;
// 	cout<<"Val *p_x: "<<*p_x<<endl;
// 	//modifying x value using single pointer
// 	*p_x=5;
// 	cout<<"x value: "<<x<<endl;
// 	cout<<"p_x+1: "<<p_x+1<<endl; //it goes to next block
// 	//Double pointer
// 	int **p_p_x=&p_x;
// 	cout<<"Addr p_x: "<<&p_x<<endl;
// 	cout<<"Val p_p_x: "<<p_p_x<<endl;
// 	cout<<"Val *p_p_x: "<<*p_p_x<<endl;
// 	cout<<"Val **p_p_x: "<<**p_p_x<<endl;
// 	//modifying x value using double pointer
// 	**p_p_x=7;
// 	cout<<"x: "<<x<<endl;

// }

//Array with pointers
// #include <bits/stdc++.h>

// using namespace std;

// int main(){
// 	int a[10];
// 	a[0]=2;
// 	a[1]=5;
// 	cout<<"a: "<<a<<endl; //here a is points to first element of array(0x7fff047973e0)
// 	cout<<"&a[0]: "<<&a[0]<<endl; //0x7fff047973e0
// 	cout<<"*a: "<<*a<<endl; //print a[0] value
// 	cout<<"a+1: "<<a+1<<endl; //it is a[1] address{0x7ffcd21e6424}
// 	cout<<"&a[1]: "<<&a[1]<<endl; //0x7ffcd21e6424
// 	cout<<"*(a+1): "<<*(a+1)<<endl;// print a[1] value
// }


//Passing pointers to a function
#include <bits/stdc++.h>
using namespace std;

void increment(int *x){ //here we given *x that store address of a integer
	// (*x)++; //here(*x) is address we incremented value by using address of the variable;
	*x=*x+1;
}

int main(){
	int a=4;
	cout<<a<<endl;
	increment(&a); //
	cout<<a<<endl;
}

//Note:- it is difficult to give every where pointers so it is better to use pass by reference value
