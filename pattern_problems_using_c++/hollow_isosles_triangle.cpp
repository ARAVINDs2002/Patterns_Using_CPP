
#include<iostream>
using namespace std;
int main()
{
for(int i=1;i<=5;i++)
{
   for(int j=1;j<=7;j++)
   {
       if(j+i==5||j-i==3||i==5)
       {
           cout<<"*" ;
       }
       else
       {
           cout<<" ";
       }

   }
   cout<<endl;
}}



