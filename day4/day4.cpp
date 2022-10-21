// 1.Strings----> collection of characters

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	// char a='aaas'; //error
// 	// string str="hello";
// 	// cout<<str<<endl;
// 	// string str2;
// 	// cin>>str2;
// 	// cout<<str2<<endl;
// 	// Concatinate string
// 	// string str="Hello";
// 	// string str2="world";
// 	// string result= str+str2;
// 	// cout<<result<<endl;

// 	// Check string equivalent
// 	// string str="Hello";

// 	// string str2="world";
// 	// str2="Hello";
// 	// if (str==str2)
// 	// {
// 	// 	cout<<"Equal";
// 	// }
// 	// else{
// 	// 	cout<<"Not equal";
// 	// }
// }

// 2.String Access and Size
// #include <bits/stdc++.h>

// using namespace std;

// int main(){
// 	//Accesing Specific Character in a String

// 	// string str="Hello";
// 	// // str[index]----> indexing number starts from 0
// 	// cout<<str[0];

//     // assigning a character in a string
// 	// string str="Hello";

// 	// str[0]='a';
// 	// // str[0]="a"; //Error{we only assign a character not a string}
// 	// cout<<str;

// 	// cout<<str.size(); //we get string size

// 	// //printing each and every character in a string
// 	// for (int i = 0; i < str.size(); ++i)
// 	// {
// 	// 	cout<<str[i]<<endl;
// 	// }

// 	// Taking Multiple string input
// 	string str1,str2;
// 	cin>>str1>>str2;
// 	// cout<<str1<<" "<<str2<<endl;
// 	string str3= str1+ " "+ str2;
// 	cout<<str3;


// }

// 3.Getline function

// #include <bits/stdc++.h>

// using namespace std;

// int main(){
// 	// string str1,str2;
// 	// getline(cin,str1); //getline---> take full line as input
// 	// getline(cin,str2);
// 	// cout<<str1<<endl<<str2<<endl;


// 	int t;
// 	cin>>t;
// 	cin.ignore();// after taking integet input value cursor will print empty line to ignore that we use this ignore() function after taking integer value it will take input values from next string

// 	while(t--){
// 		string s;
// 		getline(cin,s);
// 		cout<<s<<endl;
// 	}

// }



// Quiz:
// Reverse a string
// #include <bits/stdc++.h>

// using namespace std;

// int main(){
// 	string str;
// 	cin>>str;
// 	string str_rev;
// 	//input:-Afridi
// 	for (int i = str.size()-1/*i=6-1=5*/; i >=0/*5>=0(true)*/; --i/*5-1=4*/)
// 	{
// 		// Tip:- inside the loop printing the outcome of the output isn't best practice
// 		// cout<<str[i];
// 		// str_rev=str_rev+str[i];//str_rev=0+str[5]=0+i
// 		//str_rev=i+str[4]=id
// 		//str_rev=id+str[3]=idi
// 		//str_rev=idi+str[2]=idir
// 		//str_rev=idir+str[1]=idirf
// 		//str_rev=idirf+str[0]=idirfA


// 		str_rev.push_back(str[i]);
// 	}
// 	cout<<str_rev;//idirfA
// 	// Reasons for not use concatination in Reverse String(loops)
// 	// according to Time Complexity the size will increases
// }

// Quiz:-
// Palindrome in Strings
// #include <bits/stdc++.h>

// using namespace std;

// int main(){
// 	string str;
// 	cin>>str;
// 	string str_rev;
// 	for (int i = str.size()-1; i >= 0; --i)
// 	{
// 		str_rev.push_back(str[i]);
// 	}
// 	if (str==str_rev)
// 	{
// 		cout<<"Palindrome";
// 	}
// 	else{
// 		cout<<"Not A Palindrome";
// 	}
// }

// 4.Dealing with large numbers

#include <bits/stdc++.h>

using namespace std;

int main(){
	// long long int --->10^18
	// if the input was given 10^100 size {we can't take double we get precision errors}
	//so we take large numbers input as string

	string s;
	cin>>s;
	// cout<<(int)s[s.size()-1]; //here 1-->49(ASCII value)
	int last_digit=s[s.size()-1]-'0'; //converting into integer
	cout<<last_digit;
}




