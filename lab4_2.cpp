#include<iostream>

using namespace std;

double findDistance(double u,double a,double t){
  
  double s = (u*t)+((1.0/2)*a*(t*t));
  return s;

}

int main(){
  double a,u,t;
  cout << "Enter u =";
  cin >> u;
  cout << "Enter a =";
  cin >> a;
  cout << "Enter t =";
  cin >> t;

  cout << "Result s =" << findDistance(u,a,t);
  return 0;
}
