#include<bits/stdc++.h>

using namespace std;

int drawpattern(int *n)
{
    for (int i=1;i<=*n;i++)
    {
         for(int j=i;j<*n;j++)
         {
                printf("  ");
         }
         for(int j=1;j<=i;j++)
         {
                cout<<"  "<<j<<" ";
         }
        cout<<endl;
   }
return 0;
}

int main(){
int n;
cout<<"Enter the value of n"<<endl;
cin>>n;
drawpattern(&n);
return 0;
}


