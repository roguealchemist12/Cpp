#include <iostream>
using namespace std;


class Krug
{
    public:
      double radius;
      float Area()
      {
        return radius*radius*3.14;
      }
};

int main()
{
  Krug k1;
  k1.radius=5;
  double a;

  a = k1.Area();
  cout<<a;
}


//Private clenovi se podatoci, Public cnelovi se metodi
//
