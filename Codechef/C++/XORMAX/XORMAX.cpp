#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--)
  {
      int count1=0,count2=0,count3=0,count4=0;
      string a;
      cin>>a;
      string b;
      cin>>b;
      for(int i=0;i<a.size();i++)
      {
         if(a[i]=='0') 
         {
             count1++;
         }
         else{
             count2++;
         }
      }
       for(int i=0;i<b.size();i++)
      {
         if(b[i]=='0') 
         {
             count3++;
         }
         else{
             count4++;
         }
      }
      int x=min(count1,count4);
      int y=min(count2,count3);
      vector<int> v;
      for(int i=0;i<a.size();i++)
      {
          if(i<x+y)
          v.push_back(1);
          else
          v.push_back(0);
      }
      for(int i=0;i<v.size();i++)
      {
          cout<<v[i];
      }
      
    cout<<endl;
}
	return 0;
}
