#include <iostream>

using namespace std;

int main()
{
  /*
  Find maximum element from given array
  input
  4
  2 3 5 1 -- values
  output
  5
  2
  */
  int n, m_index = 0;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    if (a[i] > a[m_index])
      m_index = i;
  }

  cout << a[m_index] << endl;
  cout << m_index << endl;

  return 0;
}