#include <iostream>
using namespace std;

int main (int argc, char *argv[])
{
  long int *d = new long int;

  std::cout << "dim=";
  cin>>*d;
  int *p=0;
  p = new int[*d];

  for (int i = 0; i < *d; i++) {
    p[i] = i*i;
  }
  for (int i = 0; i < *d; i++) {
    cout<<"p["<<i<<"]="<<p[i]<<endl;
  }
  delete []p;
  delete d;

  return 0;
}
