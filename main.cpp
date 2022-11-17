#include <iostream>
#include <cmath>
using namespace std;

int main() {
   float a=0, b=0, x=0, y=0;
   cin >> a;
   cin >> b;
   cin >> x;
   cin >> y;
   if (x<0 && y>0){
      float z=0;
      z= a*x - b*y;
      cout << z << endl;
   }
   else if (x>=0 && y<=0){
      float z=0;
      z= (a*pow(x,2)) - (b*y);
      cout << z << endl;
   }
   else {
      float z=0;
      z= (a*x) + (b*pow(y,2));
      cout << z << endl;
   return 0;
}
