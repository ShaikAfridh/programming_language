// Competitive Programming Course | Constest 1
// Source:- Hacker earth
// https://assessment.hackerearth.com/challenges/college/iiit-allahabad-test-draft-2-15/problems/



#include<bits/stdc++.h>
using namespace std;
//characters are used in input are 'a' to 'z' only 
char upper(char c){
	//'A'+'a'=65-97=-32 {for every small to capital character there is a difference of "32"}
	//'c'-'a'=2 {difference between two small character}
	//'C'='c'-'a'+'A' {for getting C}
	//C= '99{c}'-'97{a}'+'65{A}'= 2+65=67

	return 'A'+(c-'a'); //here first character is S
	//65(A)+(115(s)-97(a))=65+(18)=83(S)
	//like wise here every character is converted into uppercase
}

int main(){
	while(true){ //here we run infinite loop
		string s; //taking a string input{it takes as one word at a time in loop (the string is end if we provide spaces)}
		cin>>s;
		if(s.size() ==0){ //if the word contains empty then break the loop
			break;
		}
		for (int i = 0; i < s.size(); ++i) //we run for loop to convert string into upper case{he}
		{
			s[i]=upper(s[i]); //here it takes "subscribe" 1st index char and change each char to Upper character
		}
		cout<<s<<endl;
	}


}