                                       //Make the Sum Even

//Question
Chef has a sequence A1,A2,…,AN. In one operation, Chef can choose one index i (1≤i≤N) and change Ai to Api, where p=max(0,⌈Ai2⌉−1).

Help Chef find the smallest number of operations needed to make the sum of the sequence even or determine that it is impossible.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains N space-separated integers A1,A2,…,AN.
Output
For each test case, print a single line containing one integer — the minimum number of operations needed to make the sum of the sequence even, or −1 if it is impossible.

Constraints
1≤T≤10
1≤N≤105
1≤Ai≤109 for each valid i
Subtasks
Subtask #1 (30 points):

N≤100
1≤Ai≤10 for each valid i
Subtask #2 (70 points): original constraints

Example Input
4
4
7 3 5 1
5
4 2 7 8 10
2
9 9
3
1 1 1
Example Output
0
1
0
-1
Explanation
Example case 1: The sum of the sequence is 16, which is already even.

Example case 2: We can change A2 to 1, so that the sequence becomes [4,1,7,8,10]. The sum of this sequence is 30, which is even.

Example case 3: The sum of the sequence is 18, which is already even.

Example case 4: It is impossible to make the sum of the sequence even.

//Answer(Code)
#include<bits/stdc++.h>
using namespace std;

#define f0 ios_base::sync_with_stdio(false); cin.tie(0)

int main()
{
     f0;
     int q,n,c11=0,e11=0;
     cin>>q;
     while(q--)
     {
         c11=0; e11=0;
         cin>>n;
         int a[n];
         for(int i=0; i<n; i++)
            cin>>a[i];
         for(int i=0; i<n; i++)
         {
             if(a[i]==2)
             { e11++; }
             if(a[i]%2!=0)
             {  c11++; }
         }
         if((c11==n && n%2!=0) || (c11%2!=0 && e11==0))
           cout<<-1<<"\n";
         if(c11%2!=0 && e11!=0)
          cout<<1<<"\n";
         if(c11%2==0)
           cout<<0<<"\n";
      }
  return 0;
}
