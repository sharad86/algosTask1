#include <iostream>

using namespace std;

int main ()
{
  int n, r, x, y, a = 0, b = 0;
  cin >>n>>r>>x>>y;
  int p[n], q[n];

  for (int i = 0; i < n; i++)
    cin >> p[i];

  for (int i = 0; i < n; i++)
    {
      cin >> q[i];
      if (p[i] == 1 && q[i] == 1)
	   a++;
      else if (p[i] == 1 && q[i] == 0)
	   b--;
    }

  if (x * a + y * b > 0)
    cout << "promoted";

  else if (x * a + y * b < 0)
    cout << "demoted";

  else
    cout << "no change";

  return 0;
}

