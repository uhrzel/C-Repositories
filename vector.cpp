#include <bits/stdc++.h>
void get_position(std::vector <int> v, int size, int t)
{
  int temp, tempo;
  for(int i=0; i<size; i++)
  {
    for(int x=0; x<size; x++)
    {
      if(v[i] + v[x] == t && i != x)
      {
        temp = x;//
        tempo = i;
      }
    }
  }
  std::printf("%d %d", temp, tempo);
}
int main()
{
  std::vector<int> vex = {8,8,9,2,1};
  int sz = vex.size();
  int target{11};
  get_position(vex, sz, target);
  
  return 0;
}
