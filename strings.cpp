STRINGS
1)Given two strings s and t, return 1 if s is a subsequence of t, or 0 otherwise.
A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "abe" is a subsequence of "abcde" while "aed" is not).
Input Format
Two strings t and s in order.
Output Format
A single integer(1 or 0)
Sample Input 0
abcde
abe
Sample Output 0
1

#include <iostream>
using namespace std;

int main() 
{
    string a,b;
    getline(cin,a);
    getline(cin,b);
    int c=a.length();
    int d=b.length();
    int count=0;
    for(int i=0;i<d;i++)
    {
      for(int j=0;j<c;j++)
      {
        if (b[i]==a[j])
        {
          count++;
          break;
        }
      }
    }
    if (count==d)
      cout<<"1";
    else
      cout<<"0";
    return 0;
}

2)Input Format
Input consists of one string.
Output Format
The Output consists of one integer that corresponds to the sum of all numbers present in the string.
Sample Input 0
1abc23
Sample Output 0
24

#include<iostream>
using namespace std;
int main()
{
   string a;
   getline(cin,a);
   int b=a.length();
   int num=0;
   int sum=0;
   for (char i=0;i<b;i++)
   {
     if (a[i]>='0' && a[i]<='9')
        num=num*10+(a[i]-'0');
     else
     {
        sum=sum+num;
        num=0;
     }
    }
    sum=sum+num;
    cout<<sum;
   }

3)Sample Input 0
39631
Sample Output 0
93361
Explanation
Step 1 - Interchange the first two digits, 3 and 9, which form 93631.
Step 2 - Interchange the third and fourth digits, 6 and 3 which form 93361,
Step 3 - For the fifth digit as there is no digit to be interchanged with, it is left it is so it will be kept as 93361.
So, the output is 93361.

#include <iostream>              //using while loop and two variables i,j
using namespace std;

int main() 
{
    string a;
    getline(cin,a);
    int b=a.length();
    //for (int i=0;i<b-1;i+=2)
    int i=0,j=1;
    while (j<b)
    {
      char temp=a[i];
      a[i]=a[j];
      a[j]=temp;
      i+=2;
      j+=2;
    }
    cout<<a;
}

ALTERNATIVE METHOD

#include <iostream>              //using for loop and one variable i
using namespace std;

int main() 
{
    string a;
    getline(cin,a);
    int b=a.length();
    for (int i=0;i<b-1;i+=2)
    {
      char temp=a[i];
      a[i]=a[i+1];
      a[i+1]=temp;
    }
    cout<<a;
}

4)to remove all characters in the second string which are present in the first string
Sample Input 0
Motor
Motorcycle
Sample Output 0
cycle

#include <iostream>
using namespace std;
int main() 
{
    string a;
    getline(cin,a);
    string b;
    getline(cin,b);
    string res=" ";
    for (int i=0;i<b.length();i++)
    { 
      bool found=false;
      for (int j=0;j<a.length();j++)
      {
        if (b[i]==a[j])
        {
          found=true;
          break;
        }
      }
    if (!found)
       res+=b[i];
    }
    cout<<res;
}

ALTERNATIVE

#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n1=s.length();
	string d;
	cin>>d;
	int n2=d.length();
	for(int i=0;i<n2;i++)
	{
		int c=0;
		for(int j=0;j<n1;j++)
		{
			if(d[i]!=s[j])
			{
				c++;
			}
		}
		if(c==n1)
		cout<<d[i];
	}
	return 0;
}

5)to find whether the given string is the anagram of the first string.
Note: An anagram of a string is another string that contains the same characters, only the order of characters can be different.
Sample Input 0
eat
ate
Sample Output 0
﻿Anagram

#include <iostream>
#include <algorithm>    //while using sort()
using namespace std;
int main() 
{
    string a;
    getline(cin,a);
    string b;
    getline(cin,b);
    string res1=" ";
    string res2=" ";
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    res1=a;
    res2=b;
    if (res1==res2)
       cout<<"anagram";
    else
       cout<<"not an anagram";
}

7)to sort a string in ascending order. Note: Do not use inbuilt functions.
Sample Input 0
faceprep
Sample Output 0
aceefppr

(BUBBLESORT)
#include <iostream>
using namespace std;

int main() 
{
    string a;
    getline(cin,a);
    int b=a.length();
    for (int i=0;i<b-1;i++)
    {
      for (int j=0;j<b-i-1;j++)
      {
        if (a[j]>a[j+1])
        {
          int temp=a[j];
          a[j]=a[j+1];
          a[j+1]=temp;
        }
      }
    }
    cout<<a;
}

9)to check whether the given string is palindrome or not 
note: ignore the spaces and case sensitive

#include <iostream>
using namespace std;
// Convert uppercase to lowercase
char lower(char ch) {
    if (ch >= 'A' && ch <= 'Z') 
    {
        return ch + ('a' - 'A');
    }
    return ch;
}
int main() 
{
    string a;
    getline(cin, a);
    string clean = "";   // cleaned string (no spaces, all lowercase)
    string reverse = ""; // reversed version
    // Build cleaned string 
    for (int i = 0; i < a.length(); i++) 
    {
        if (a[i] != ' ')
        {
            clean += lower(a[i]);
        }
    }
    // Create reverse of cleaned string
    for (int i = clean.length() - 1; i >= 0; i--) 
    {
        reverse += clean[i];
    }
    // Compare cleaned and reversed
    if (clean == reverse)
    {
        cout << "palindrome";
    }
    else 
    {
        cout << "not a palindrome";
    }
    return 0;
}

10) i)to check whether the char is vowel or consonant
note:the input can also be a number or special character

#include <iostream>
using namespace std;

int main() 
{
    char ch;
    cin>>ch;
    if (!isalpha(ch))
      cout<<"non alphabet";
    else if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' )
      cout<<"vowel";
    else
      cout<<"consonant";
    return 0;
}

ii)to remove vowels from a string

#include <iostream>
using namespace std;

int main() 
{
    string s;
    getline (cin,s);
    int n=s.length();
    string res="";
    for (int i=0;i<n;i++)
    { 
      bool vowel=false;
      if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
        vowel=true;
      if (!vowel)
        res+=s[i];
    }
    cout<<res;
}

iii)count total vowels in a string

#include <iostream>
using namespace std;

int main() 
{
    string s;
    getline (cin,s);
    int n=s.length();
    int c=0;
    for (int i=0;i<n;i++)
    { 
      if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
        c++;
    }
    cout<<c;
}

11)to check the char is alphabet or not

#include <iostream>
using namespace std;

int main() 
{
    char ch;
    cin>>ch;
    if ((ch>=65 && ch<=90) || (ch>=97 && ch<=120))
       cout<<"alphabet";
    else
       cout<<"non alphabet";
    return 0;
}

12)to calculate ASCII value of Character
s i/p: A
s o/p: 65

#include <iostream>
using namespace std;

int main() 
{
    char ch;
    cin>>ch;
    cout<<int(ch);
    return 0;
}

13)Length of the string without using strlen() function 
s i/p: motor
s o/p: 5

#include <iostream>
using namespace std;

int main() 
{
    string str;
    getline(cin,str);
    int c=0;
    for (int i=0;str[i]!='\0';i++)  //all strings contains a default null character('/0') in the end but not all words in a string
    {
      c++;
    }
    cout<<c;
    return 0;
}

14)toggle each character in a string
s i/p: RooT
s o/p: rOOt

#include <iostream>
using namespace std;

int main() 
{
    string c;
    getline(cin,c);
    for (int i=0;i<c.length();i++)
    {
      if (c[i]>=65 && c[i]<=90)
      {
        char r=c[i]+32;
        cout<<r;
      }
      if (c[i]>=97 && c[i]<=122)
      {
        char s=c[i]-('a'-'A');          //s=c[i]-32
        cout<<s;
      }
      if (c[i]==' ')
        cout<<" ";
    }
    return 0;
}

15)find non repeating characters in a string
s i/p: motor
s o/p: mtr

#include <iostream>
using namespace std;

int main() 
{
    string c;
    getline(cin,c);
    int n=c.length();
    for (int i=0;i<n;i++)
    { 
      bool unique=true;
      for (int j=0;j<n;j++)
      { 
        if (i!=j && c[i]==c[j])   //i!=j char should not be compared with itself
           unique=false;
      }
      if (unique)
        cout<<c[i];
    }
    return 0;
}

18)Count the sum of numbers in a string
s input: a1b2c3
s output: 6

#include <iostream>
using namespace std;

int main() 
{
    string s;
    getline (cin,s);
    int n=s.length();
    int sum=0;
    for (int i=0;i<n;i++)
    {
      if (s[i]>='0' && s[i]<='9')
        sum=sum+(s[i]-'0');       //to convert char into int = ch-'0'=>'5'-'0'=>5
    }
    cout<<sum;
}

19)remove brackets in a string
s i/p: n(yk]}
s o/p:nyk

#include <iostream>
using namespace std;

int main() 
{
    string s;
    getline (cin,s);
    int n=s.length();
    string res="";
    for (int i=0;i<n;i++)
    { 
      if ((s[i]!='(' && s[i]!=')') && (s[i]!='[' && s[i]!=']') && (s[i]!='{' && s[i]!='}'))
        res+=s[i];
    }
    cout<<res;
}

20)to remove spaces in a string
i/p: hi hello
o/p:hihello

#include <iostream>
using namespace std;

int main() 
{
    string s;
    getline (cin,s);
    int n=s.length();
    string res="";
    for (int i=0;i<n;i++)
    { 
      if (s[i]!=' ')
        res+=s[i];
    }
    cout<<res;
}

21)Remove all characters from string except alphabets
i/p: abs":12d
o/p: absd

#include <iostream>
using namespace std;

int main() 
{
    string s;
    getline (cin,s);
    int n=s.length();
    string res="";
    for (int i=0;i<n;i++)
    { 
      if ((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
        res+=s[i];
    }
    cout<<res;
}

22)Print the given string in reverse order
i/p: hello
o/p: olleh

i/p=hello world
o/p= dlrow olleh

#include <iostream>
using namespace std;

int main() 
{
    string s;
    getline (cin,s);
    int n=s.length();
    string res="";
    for (int i=n-1;i>=0;i--)
    { 
      res+=s[i];
    }
    cout<<res;
}




