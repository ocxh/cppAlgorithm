#include<bits/stdc++.h>
using namespace std;
vector<int> v;

int main(){
	for(int i=1; i<=10; i++) v.push_back(i); //뒤에 값을 추가push_back()
	for(int a: v) cout<<a<<" ";
	cout<<"\n";
	v.pop_back(); //뒤에 값을 제거(pop_back()) 
	
	for(int a: v) cout<<a<<" ";
	cout<<"\n";
	
	v.erase(v.begin(), v.begin() + 1); //값 지우기.eraser()
	
	for(int a: v) cout<<a<<" ";
	cout<<"\n";
	
	auto a = find(v.begin(), v.end(), 100); //값 찾기 find() 
	if(a==v.end()) cout<<"not found" <<"\n";
	
	fill(v.begin(), v.end(), 10);
	
	for(int a: v) cout<<a<<" ";
	cout<<"\n";
	v.clear(); //배열 초기화 clear() 
	cout<<"아무도 없을까?\n";
	for(int a:v) cout<<a<<" ";
	cout<<"\n";
	
	return 0;
}
