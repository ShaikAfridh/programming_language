// Functions
//Function mainly focuses on code reusability
// #include<bits/stdc++.h>
// using namespace std;

// void printHello(){ //here "Void " means nothing to return
// 	cout<<"Hello World";
// }

// int sum(int a,int b){ //here we passed two parameters "a,b"
// 	int result=a+b; //it will sum a,b parameter values
// 	return result; //here the result will be return
// }

// int main()/*here "main" is a function name and "int" is returntype*/{
// 	// printHello();
	
//     cout<<sum(3,5);
// }

//quiz: Sum of the digits
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n;
// 	cin>>n;
// 	int digit_sum=0;
// 	while(n){
// 		digit_sum=digit_sum+(n%10);
// 		n=n/10;
// 	}
// 	cout<<digit_sum;
// }


//using function

// #include<bits/stdc++.h>
// using namespace std;

// int digit_sum(int n){
// 	int digit_sum=0;
// 	while(n){
// 		digit_sum=digit_sum+n%10;
// 		n=n/10;
// 	}
// 	return digit_sum;
// }

// int main(){ 
// 	int a,b;
// 	cin>>a>>b;
// 	// return 0; //it will stop execution of the program
// 	cout<<digit_sum(a)+digit_sum(b);

// 	//integer datatype function some compilers throws error if we aren't providing return value


// }

//C++ References
// #include<bits/stdc++.h>

// using namespace std;

// int increment(int n){
// 	n++;
// 	return n;
// }
// int main(){
// 	int a=3;
// 	cout<<a<<endl;
// 	a= increment(a);
// 	cout<<a<<endl;
// 	// output:-
// 	// 3
// 	// 4
// }

//By value
// #include<bits/stdc++.h>

// using namespace std;

// void increment(int n){
// 	n++;

// }
// int main(){
// 	int a=3;
// 	cout<<a<<endl;
// 	increment(a);
// 	cout<<a<<endl;
// 	// Output:
// 	// 3
// 	// 3


// }
//By value Reference
// #include<bits/stdc++.h>

// using namespace std;

// void increment(int &n){ //we haven't provide any return value but the value is change bcoz here it passes value by reference
// 	n++;
// }
// int main(){
// 	int a=3;
// 	cout<<a<<endl;
// 	increment(a);
// 	cout<<a<<endl;


// }

// #include<bits/stdc++.h>

// using namespace std;

// void increment(int &n,int n1){ 
// 	n++;
// 	n1++;
// }

// int main(){
// 	int a=3,b=5;
	// cout<<a<<" " <<b<<endl;
// 	increment(a,b);
	// cout<<a<<" " <<b<<endl;
// 	Output:-
// 	// 3 5
// 	// 4 5 --> here a is changed to 4(pass by reference) and b value isn't changed
	
// }

//Quiz:- Swapping Numbers

// #include<bits/stdc++.h>

// using namespace std;

// void swap(int &a,int &b){ //Swap like function we need references In c language references are not used instead of we use pointers
// 	int temp=a;
// 	a=b;
// 	b=temp;
// }
// int main(){
// 	int a=4,b=5;
// 	cout<<a<<" " <<b<<endl;
// 	swap(a,b);
// 	cout<<a<<" " <<b<<endl;

// }

// In C++ there is pre exist swap function 
// #include<bits/stdc++.h>

// using namespace std;


// int main(){
// 	int a=4,b=5;
// 	cout<<a<<" " <<b<<endl;
// 	swap(a,b); //swap is a inbuilt function in c++
// 	cout<<a<<" " <<b<<endl;

// }
// #include<bits/stdc++.h>

// using namespace std;

// int main(){
// 	int a=4,b=5;
// 	cout<<max(a,b)<<endl; //here max is also inbuilt function in c++
// 	cout<<min(a,b);
// }


// #include<bits/stdc++.h>
// using namespace std;

// void func(string &s){
// 	s=""; //empty string
// }

// int main(){
// 	string s="asfskdla"; //random value is passed
// 	cout<<s<<endl;
// 	func(s);
// 	cout<<s<<endl;
// 	//here the string value dosen't changed 
// 	//if we use pass by reference it will change

// }

// 3.Pass Arrays in Function
// Note:- Arrays always pass values by reference

// i.1-D array
// #include<bits/stdc++.h>
// using namespace std;

// void func(int a[]){
// 	a[0]=5;
// }

// int main(){
// 	int a[10]; 
// 	a[0]=7;
// 	cout<<a[0]<<endl;
// 	func(a);
// 	cout<<a[0]<<endl;
// 	//here we haven't used refence symbol but it is passed by refernce
// }

// ii.2-D array
// #include<bits/stdc++.h>
// using namespace std;

// void func(int a[][2]/*here for 2-D array the second value must be specified*/){
// 	a[0][0]=5;
// }

// int main(){
// 	int a[3][2]; 
// 	a[0][0]=7;
// 	cout<<a[0][0]<<endl;
// 	func(a);
// 	cout<<a[0][0]<<endl;
// 	//here we haven't used refence symbol but it is passed by refernce
// }

// #include<bits/stdc++.h>
// using namespace std;
// void func(int n,int m,int a[][m]){ //it might run in some compiler we avoid in competitive programming to pass the array values in functions
// 	a[0][0]=5;
// }

// int main(){
// 	int n,m;
// 	int a[n][m]; //here we don't know exact size of array we can't pass the  value in function
// 	a[0][0]=7;
// 	cout<<a[0][0]<<endl;
// 	func(a);
// 	cout<<a[0][0]<<endl;

// }

//in Cp, we pass arrays in functions like this
#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
// 1-D Array
// int a[N];
// 2-D Array
int a[N][N];

void func(){ 
	// a[0]=5;
	a[0][0]=5;

}

int main(){
	a[0][0]=7;
	cout<<a[0][0]<<endl;
	func();
	cout<<a[0][0]<<endl;

}