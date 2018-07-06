#include <bits/stdc++.h>
using namespace std;
void circleLineIntersect(float x1, float y1, float x2, float y2, float cx, float cy, float cr ) 
{
      float dx = x2 - x1;
      float dy = y2 - y1;
      float a = dx * dx + dy * dy;
      float b = 2 * (dx * (x1 - cx) + dy * (y1 - cy));
      float c = cx * cx + cy * cy;
      c += x1 * x1 + y1 * y1;
      c -= 2 * (cx * x1 + cy * y1);
      c -= cr * cr;
      float bb4ac = b * b - 4 * a * c;

      if(bb4ac<0)
      {
          cout<<"SAFE\n";    // No collision
      }
      else if(bb4ac == 0)
      {
          cout<<"JUST MISSED\n";   //Collision
      }
      else
      {
          cout<<"REPLANNING\n"; 
      }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x1,y1,x2,y2,r;
        cin>>x1>>y1>>x2>>y2>>r;
        circleLineIntersect(x1,y1,x2,y2,0,0,r);
    }
    return 0;
}