#include <bits/stdc++.h>
using namespace std;

int main(){

  // Part-A

  cout << "Minimum int Value = "<<INT_MIN <<endl;
  cout << "Maximum int Value = "<<INT_MAX <<endl;

  // Part-B

  cout << "\nApproximate Ranges of the follwing" <<endl;
  cout << "int        -> [+- 10^9]"<<endl;
  cout << "long       -> [+- 10^12]"<<endl;
  cout << "long long  -> [+- 10^18]"<<endl;

  // Part-C

  cout << "float -> 7 decimal digits"<< endl;
  cout << "double -> 15 decimal digits"<< endl;

  // Part-D

  int a = 42;
  long b = 1000000000;
  long long c = 1000000000000;
  float d = 0.12345;
  double e = 3.1456234698123;
  char f = 'z';
  string g = "bitcoin hits $100k";

  cout << a << " "<< b << " "<< c << " "<< d << " "<< e << " "<< f << " "<< g << endl;

  // Part-E

  int a1;
  double b1;
  char c1,c2,c3;
  string w1,w2, w3,w4;

  cin >> a1 >> b1 >> c1 >> c2 >> c3 >> w1 >> w2;
  getline(cin,g); // taking in the /n after w2
  getline(cin, w3);
  getline(cin, w4);

  cout << a1 <<endl << b1 << endl << c1 << endl << c2 << endl << c3 << endl << w1 << endl << w2 << endl << w3 << endl << w4;

}