// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	int a=2;
// 	int b=3;
// 	// cout<<(a==b);
// 	// cout<<(a!=b);
// 	// cout<<(a<=b);


// 	// Multiple condition checking(&&,||)
// 	int c=4;
// 	cout<<((b>a) && (b>c))<<endl;// for && operator both conditons must be True
// 	cout<<((b>a)||(b>c))<<endl;//for || operator either one condition is true then it's true
// 	c=1;
// 	cout<<((b>a) && (b>c));


// }

// 1.If Conditons

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n;
// 	cin>>n;
// 	if (n%2==0)
// 	{
// 		cout<<"Yes";
// 	}
// 	else if (n%3==0)
// 	{
// 		cout<<"Divisible by 3";
// 	}
// 	else{
// 		cout<<"No";
// 	}
// }

// // 2.Scope
// #include <bits/stdc++.h>
// using namespace std;

// int x; //global variables

// int main(){
// 	int n;
// 	cin>>n;
// 	if (n%2==0)
// 	{
// 		int x=2;//this is variable can only be accessed inside the if condition we can't use this variable outside the if condition
// 	}
// 	// cout<<x;//compilation error

// 	// Creating variable scope(when we use '{ }' curly braces define any variable inside the curly braces then that varible scope is under those curly braces)
// 	{
// 		int x;
// 	}
// 	x=2;

// }


// 3.Loops


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	int i=1;
// 	// while(i<=10){
// 	// 	cout<<i<<endl;
// 	// 	i++;
// 	// }
	


// }
// for loop
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	// for (intialization; codnitions; Operations)
// 	// {
// 	// 	/* code */
// 	// }
// 	// for (int i = 1; i <=10; ++i)
// 	// {
// 	// 	cout<<i<<endl;
// 	// }
// 	// for (int i = 1; i <=10; cout<<i++<<endl)
// 	// {
		
// 	// }
// }


// Quiz:
// print these pattern 
// *
// **
// ***
// ****


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n;
// 	cin>>n;
// 	for (int i = 1; i <=n ; ++i)// line number loop
// 	{
// 		for (int j = 1; j <=i; ++j)
// 		{
// 			cout<<"*";
// 		}
// 		cout<<endl;
// 	}
// }

// 4.Test Cases
// executing the no.of output given in test cases
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	int t;
// 	cin >>t;
// 	while(t--)//here 't' is number of test cases and it will take number of test cases as input and decrement it and gives output as no.of test cases we required
// 	{
// 		int n;
// 		cin>>n;
// 		for (int i = 1; i <=n ; ++i)// line number loop
// 		{
// 			for (int j = 1; j <=i; ++j)
// 			{
// 				cout<<"*";
// 			}
// 			cout<<endl;
// 		}
// 	}
// }


// 5.Infinite loop
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	// while(1){

// 	// }
// 	for (int i = 0; true ; ++i)//if we don't provide any condition it will run infinitely
// 	{
// 		/* code */
// 	}
// }

// 6.Jump statements
// Break---> if our condition  is met at break then it will go out from the loop
// continue---> if our execution is reach at continue it will go to again conditon(skip the part)

// #include <bits/stdc++.h>

// using namespace std;

// int main(){
// 	for (int i = 0; i < 10; ++i)
// 	{
// 		if (i==8)
// 		{
// 			break;
// 		}
// 		cout<<i<<endl;
// 	}//the loop will be terminated here after break statement
// }


// #include <bits/stdc++.h>

// using namespace std;

// int main(){
// 	for (int i = 0; i < 10; ++i)//here the continue condition is met then it will skip the particular output then again it will run the loop
// 	{
// 		if (i==8)
// 		{
// 			continue;
// 		}
// 		cout<<i<<endl;
// 	}
// }

// Quiz:

// Your program is to use the brute-force approach in order to find the Answer to Life, the Universe, and Everything. More precisely... rewrite small numbers from input to output. Stop processing input after reading in the number 42. All numbers at input are integers of one or two digits.

// Example

// Input:
// 1
// 2
// 88
// 42
// 99

// Output:
// 1
// 2
// 88


// #include <bits/stdc++.h>

// using namespace std;

// int main(){
// 	while(true){
// 		int x;
// 		cin>>x;
// 		if (x==42)
// 		{
// 			break;
// 		}
// 		cout<<x<<endl;
// 	}
// }


// You’re given an integer N. Write a program to calculate the sum of all the digits of N.
// Input

// The first line contains an integer T, the total number of test cases. Then follow T lines, each line contains an integer N.
// Output

// For each test case, calculate the sum of digits of N, and display it in a new line.
// Constraints

//     1 ≤ T ≤ 1000
//     1 ≤ N ≤ 1000000

// Example

// Input

// 3 
// 12345
// 31203
// 2123

// Output

// 15


#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;//1234567
		// cout<<n%10;//unit digit of input number(67)
		// cout << n/100;//12345 (it will remove at last digits it is helpful to calculate sum of digits)
		int digit_sum=0;

		while(n>0){
			int last_digit=n%10;//adding last digit
			digit_sum=digit_sum+last_digit;
			n=n/10; //remove last digit
		}
		cout<<digit_sum<<endl;
	}
}






