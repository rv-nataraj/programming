#include <iostream>

using namespace std;

namespace X
{
  int a = 1;
  void printNumber()
  {
    cout<<a<<endl;
  }
}

namespace Y
{
  int a=2;
  void printNumber()
  {
    cout<<a<<endl;
  }
}

int main()
{
   X::printNumber();
   Y::printNumber();
   return 0;
}
