#include <iostream>
using namespace std;

int main(){
    int i=3;
    int k;
    k = i++ + ++i - i-- + --i;
  //6   //3   //5   //5   //3
  cout<<k<<endl;
  return 0;
}