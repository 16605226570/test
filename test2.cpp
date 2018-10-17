#include<iostream>
using namespace std;
int Memo[1000];
void initMemo();
int fib(int n);
int fib(int n,int Memo[]);
int main(int argc, char const *argv[]) {
  initMemo();
  int n;
  cin>>n;
  cout<<fib(n)<<endl;
  return 0;
}
void initMemo(){
  for(int i=0;i<1000;i++){
    Memo[i]=-1;
  }
}
int fib(int n){
  if(n<=0){
    return 0;
  }else{
    return fib(n,Memo);
  }
}
int fib(int n,int Memo[]){
  if(Memo[n]!=-1){
    return Memo[n];
  }
  if(n<=2){
    Memo[n]=1;
  }else{
    Memo[n]=fib(n-1,Memo)+fib(n-2,Memo);
  }
  return Memo[n];
}
