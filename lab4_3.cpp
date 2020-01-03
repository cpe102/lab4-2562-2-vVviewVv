#include<iostream>
using namespace std;

int findDivisor(int y){
  int x = 2;
  int ans;

  while(y%x != 0){
      x = x+1;
  }
    ans = x;
  return ans;

}

int main(){
  int y;
  cout << "Enter y =";
  cin >> y;
  cout << "Divisor =" << findDivisor(y);
  return 0;
}
