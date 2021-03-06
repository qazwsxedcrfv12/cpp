                                         //Turn It

//Question
Chef is playing Need For Speed. Currently, his car is running on a straight road with a velocity U metres per second and approaching a 90∘ turn which is S metres away from him. To successfully cross the turn, velocity of the car when entering the turn must not exceed V metres per second.

The brakes of Chef's car allow him to slow down with a deceleration (negative acceleration) not exceeding A metres per squared second. Tell him whether he can cross the turn successfully. The velocity v when entering the turn can be determined from Newton's 2nd law to be v2=U2+2⋅a⋅S if the car is moving with a uniform acceleration a.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains four space-separated integers U, V, A and S.
Output
For each test case, print a single line containing the string "Yes" if Chef can cross the turn successfully or "No" if he cannot (without quotes).

You may print each character of each string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

Constraints
1≤T≤105
1≤U,V,A,S≤104
Subtasks
Subtask #1 (100 points): original constraints

Example Input
3
1 1 1 1
2 1 1 1
2 2 1 1
Example Output
Yes
No
Yes
Explanation
Example case 1: Since U=V=1, Chef does not need to brake and will be able to turn successfully.

Example case 2: The smallest velocity Chef's car can have even with the maximum deceleration is 2⋅2−2⋅1⋅1−−−−−−−−−−−√=2–√, which is greater than the maximum allowed velocity for a safe turn.

Example case 3: The smallest velocity Chef's car can have with the maximum deceleration is again 2–√, which is smaller than the maximum allowed velocity for a safe turn.


//Answer(Code)

#include<bits/stdc++.h>
using namespace std;

#define f0 ios_base::sync_with_stdio(false); cin.tie(0)

int main()
{
  f0;
  int qq,u11,v11,a11,s,p11=0;
  float c11=0,k11=0;
  cin>>qq;
  while(qq--)
  {
     p11=0; c11=0;
    cin>>u11>>v11>>a11>>s;
    if(u11==1 && v11==1)
     cout<<"Yes"<<"\n";
    else
    {
      p11=(u11*u11)-(2*a11*s);
      c11=sqrt(p11);
      k11=(float)v11;
      if(c11>k11)
       cout<<"No"<<endl;
      else
       cout<<"Yes"<<endl;
    }
    
  }
  return 0;
}
