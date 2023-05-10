#include <iostream>
using namespace std;
#include <vector>

void pop_front(vector<int> v)
{
  if (!v.empty)
  {
    v.erase(v.begin());
  }
} 

int main()
{
  vector<int> example = {1, 2, 3, 4, 5}
  pop_front(example);
  for(int x : example)
    cout << x << " ";
  return 0;
}
