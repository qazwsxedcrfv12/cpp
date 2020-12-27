/*********************************************Question Statement**************************************/
A spy needs your help to encrypt a 5 letter message.

To encrypt the message the following steps are need to be done:

1)Each letter of the message will be converted to it's equivalent number (i.e A=0, B=1,..Z=25)

2)98, 57, 31, 45, 46 are the 5 numbers in the key.

3)Add the equivalent number of the first letter of the message to the first number of the key, then the equivalent number of the second letter of the message to the second number of the key and so on.

4)Take modulo 26 of the sum of each expression.

5)Convert the newly obtained numbers into it's equivalent letters (i.e 0=A, 1=B,…25=Z)

Print the final encrypted string.

Note: It is guaranteed that the given string only contains Only Upper-case Latin Letters.

Input:
The first line of the input contains a single Integer T. T denoting the number of testcases, description of each testcases contains.
The first line of the each testcase contains a single string S. S denoting the string which you need to encrypt
Output:
For each test case, print encypted string i.e result of above operation.
Note: Each testcase output must be printed on new line

Constraints:
1≤T≤100
1≤S≤5
Sample Input:
2
HELLO
HELL
Sample Output:
BJQEI
BJQE
Explanation:
For 1st Testcase : The conversion of "HELLO" to its equivalent number will be 7, 4, 11, 11, 14 respectively.
Then we add each equivalent number of the message with corresponding number in the key:

7 + 98 = 105

4 + 57 = 61

11 + 31 = 42

11 + 45 = 56

14 + 46 = 60

Further we take the sum:

105 modulo 26 = 1

61 modulo 26 = 9

42 modulo 26 = 16

56 modulo 26 = 4

60 modulo 26 = 8

Finally, convert the newly obtained numbers into it's equivalent letters:

B

J

Q

E

I

Print the final string:

BJQEI

/****************************************************Answer Statement***************************************/

#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t,l,a;
   char c;
   string str;
   cin>>t;
   while(t--)
   {
      cin>>str;
      l=str.length();
      for(int i=0; i<l; i++)
      {
         a=str[i];
         a-=65;
         if(i==0)
         {
             a+=98;
             a=(a%26)+65;
             c=a;
             str[i]=c;
         }
          if(i==1)
         {
             a+=57;
             a=(a%26)+65;
             c=a;
             str[i]=c;
         }
          if(i==2)
         {
             a+=31;
             a=(a%26)+65;
             c=a;
             str[i]=c;
         }
          if(i==3)
         {
             a+=45;
             a=(a%26)+65;
             c=a;
             str[i]=c;
         }
          if(i==4)
         {
             a+=46;
             a=(a%26)+65;
             c=a;
             str[i]=c;
         }
      }
      cout<<str<<endl;
    }
   return 0;
}
