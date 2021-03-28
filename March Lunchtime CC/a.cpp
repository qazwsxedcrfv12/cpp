
                                      //Motivation

//Question
Chef has been searching for a good motivational movie that he can watch during his exam time. His hard disk has X GB of space remaining. His friend has N movies represented with (Si,Ri) representing (space required, IMDB rating). Help Chef choose the single best movie (highest IMDB rating) that can fit in his hard disk.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains two space-separated integers N and X.
N lines follow. For each valid i, the i-th of these lines contains two space-separated integers Si and Ri.
Output
For each test case, print a single line containing one integer - the highest rating of an IMDB movie which Chef can store in his hard disk.

Constraints
1≤T≤10
1≤N≤5⋅104
1≤X≤109
1≤Si,Ri≤109 for each valid i
X≥Si for atleast one valid i
Subtasks
Subtask #1 (100 points): original constraints

Example Input
3
1 1
1 1
2 2
1 50
2 100
3 2
1 51
3 100
2 50
Example Output
1
100 
51
Explanation
Example case 1: Since there is only 1 movie available and requires space equivalent to the empty space in the hard disk, Chef can only obtain maximum IMDB rating of 1.

Example case 2: Since out of the 2 available movies, both can fit in the free memory, we only care to take the one with higher rating, i.e, rating of max(50,100)=100.

Example case 3: Since out of the 3 available movies, only the first and the last movies fit in the free memory, we only care to take the one with higher rating amongst these 2, i.e, rating of max(51,50)=51.

//Answer(Code)
#include<bits/stdc++.h>
using namespace std;


#define f0 ios_base::sync_with_stdio(false); cin.tie(0)

int main()
{
    f0;
    int qq,n,x11,a,b,c11=0;
    cin>>qq;
    while(qq!=0)
    {
       c11=0;
       cin>>n>>x11;
       while(n--)
       {
           cin>>a>>b;
           if(a<=x11 && b>c11)
            c11=b;
       }
       cout<<c11<<endl;
       qq--;
    }
  return 0;
}
