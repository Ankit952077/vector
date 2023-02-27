#include<iostream>
#include<vector>
#include<array>
#include<ipxconst.h>
#include<cmath>
using namespace std;
int main(){
  
   vector<int>v;

  for (int i = 0; i < 5; i++){
    int element;
  cin>>element;
  v.push_back(element);}
  for (int i = 0; i <5; i++)
   {
   cout<<v[i]<<" ";
  }
   v.insert(v.begin()+2,6);


//for each loop

for(int element:v)
cout<<element<<" "<<endl;

// while loop

int i=1;
while (i<=5)
{
  cout<<i<<" ";
  i++;
}
return 0;

}
