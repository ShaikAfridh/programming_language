// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	// Presedence of datatype in Desending Order
// 	// Double
// 	// float
// 	// long long int
// 	// long int
// 	// int 
// 	// characters

// 	// cout<<7/2; //output:-3 ---> integer
// 	// cout<<7/2.0; //output:-3.5 -----> float(any data type we are using having high precendece the entire number change into higher presedence as int<<<float so the entire calculation change into float number)
// 	// cout<<'c'+1; //99(c)+1=100 (here character<<< int int presendence so the entire output change into int)



// 	// int a=3/2.0/*here calculation done in float(3/2.0=1.5)*/; //bcoz of the int datatype the float value change into integer (1.5---->1) 
// 	// cout<<a;
// 	// double b = 3/2/*here calulation done in integer(3/2=1)*/; //the integer value store in double(1(int)------>1(double))
// 	// cout<<b; 
// }


// 2.operator presendence

// reference:- https://en.cppreference.com/w/cpp/language/operator_precedence

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	cout << 7/2*3; //these in order of left to right so output will be(3*3=9) 
// 	cout << 3*7/2; //21/2=10

// }


// 3.Overflow

// int,char,long int,long long int,float,double
	// -10^9 < int <10^9
	// -10^12< long int< 10^12
	// -10^18< long long int< 10^18
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	// int a=100000;
// 	// int b=100000;
// 	// int c=a*b;
// 	// cout<<c<<endl; //error 1410065408 so int range is only 10^9 this is under overflow
// 	// int mx=INT_MAX;
// 	// cout<<mx; // maximum value of integer is 2147483647


// 	// int mx=INT_MAX+1;// we are getting error message of Overflow
// 	// cout<<mx;

// 	// int mx=INT_MAX;
// 	// cout<<mx+1;//we get output but in negative values(-2147483648)
 	
//  	// Note:- follow the problem constraints and select datatype which will not lead to overflow
    

//     // long int a=100000;
//     // long int b=100000;
//     // long int c=a*b;
//     // cout<<c<<endl; //it will print without overflow(10000000000)


//     // int a=100000;
//     // int b=100000;
//     // long int c=a*1LL*b; //here in the calculation we are using 1LL (it will convert any calculation into long long int so we get our required output)
//     // cout<<c<<endl;



// 	// doubt:- why we aren't using double to store more values 10^18
// 	// solution:-
// 	double a=100000;
// 	double b=100000;
// 	double c=a*b;
// 	// cout<<c<<endl;// here we are getting 1e+10 signtific number to fix these we use "fixed" keyword

// 	// cout<<fixed<<c<<endl; //10000000000.000000 we are getting decimal numbers to fix these use "setprecision(0)"

// 	// cout<<fixed<<setprecision(0)<<c<<endl;

// 	// here 'e' is scientific way to write 10 to power something
// 	c=1e24;

// 	cout<<fixed<<c<<endl; //solution:-these output is very close to 10^24 but not exact 10^24 so we use long long int to store accurately the number  

// }




/*
4. solving first programming question

Constraints:

1 <= l <= 10^9
1 <= b <= 10^9

Input format:
2 space separated integer l an b

Output format:
Single number which is area of rectangle

Sample input:
3 4

Sample Output:
12
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int l,b;
	cin>>l>>b;

// take input values:- 100000 100000
/*problem of Overflow
here l--->10^9
     b--->10^9
     when we multiply these two the area of rectangle length must be 10^18
     so we convert the calculation into long long int
*/
	
	// cout<<l*b; //1410065408
	cout<<l*1LL*b;
}
