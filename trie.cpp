
#include<bits/stdc++.h>
/*
*    link  ::  
*    coder :: ATUL_PANDEY_2608
*        >>> INDIA <<<
*/

using namespace std;

class triee
{
  public : 
  triee *next[26];
  triee()
  {
      for(int i=0;i<26;i++)
      {
          next[i]=NULL;
      }
  }
    
};

void build()
{
    int n;
    cin>>n;
   
    triee *root=new triee(),*cur;
    for(int i=0;i<n;i++)
    { string s;
        cin>>s;
        //cout<<s[i]<<endl;
        cur=root;
        for(int j=0;j<s.length();j++)
        {
            if(cur->next[s[j]-97]==NULL)
            {
                cur->next[s[j]-97]=new triee();
            }
            cur=cur->next[s[j]-97];
        }
    }
    string st;
    cin>>st;
    int cnt=0;
    cur=root;
    for(int i=0;i<st.length();i++)
    {
        if(cur->next[st[i]-97]!=NULL)
        {
            cnt++;
        }
        else
        break;
        cur=cur->next[st[i]-97];
        
    }
    //cout<<cnt<<"*****";
    if(cnt==st.length())
    {
        cout<<1<<endl;
    }
    else
    cout<<0<<endl;
}

int main()
{ 
   ios_base::sync_with_stdio(NULL);
   cin.tie(0);

int t;
cin>>t;
while(t--)
{
    build();
    
}
     
    
}
