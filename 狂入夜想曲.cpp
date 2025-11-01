#include<bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
const ll n=10086;
int main(){
ll s=0;
ll nb=0;
ll chishu=0;
ll q=0;
char w;
cout<<"欢迎游玩狂人夜想曲"<<endl;
string name;
cout<<"请输入玩家名称"<<endl;
cin>>name;
ll a,b;
a=0; b=0;
ll n,f;
while(s==0){
	cin>>n>>f;
	a+=n;
	b+=f;
	chishu+=1;
	cout<<"当前坐标"<<a<<" "<<b<<endl;
 if(a==9876&&b==1234){
   cout<<name<<"已找到狂暴核心"<<endl;
   nb=2;
   s=1;
 }
 else if(a==768&&b==0){
	cout<<name<<"已找到狂暴核心"<<endl;
	nb=2;
	s=1;
 }
 else if(a==7680&&b==11000){
 	cout<<name<<"已找到狂暴核心"<<endl;
 	nb=2;
   s=1;
  }
  else if(a==7568&&b==765){
  	cout<<name<<"已找到狂暴核心"<<endl;
  	nb=2;
	s=1;
   }
   else if(a==618&&b==23){
   	cout<<name<<"已找到狂暴核心"<<endl;
   	nb=2;
	s=1;
    }


}

 return 0;
}
