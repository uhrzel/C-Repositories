#include <bits/stdc++.h>
void get_position(std::vector<int> v, int size, int t)
{
  int temp, temp1;
  for (int i = 0; i < size; i++)
  {
    for (int x = 0; x < size; x++)
    {
      if (v[i] + v[x] == t && i != x)
      {
        temp = x; //
        temp1 = i;
      }
    }
  }
  std::printf("%d %d", temp, temp1);
}
int main()
{
  std::vector<int> vex = {8, 8, 9, 2, 1};
  int sz = vex.size();
  int target{11};
  get_position(vex, sz, target);

  return 0;
}
