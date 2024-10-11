#include <iostream>

using namespace std;
void stat ()
{
  static count = 0;
  count++;
  cout<<count<<endl;
}
int main ()
{
  stat();
  stat();
  stat();

  return 0;
}
