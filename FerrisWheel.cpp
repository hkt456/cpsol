#include <iostream> 
#include <algorithm> 
using namespace std;
int n, x; 
int a[200005]; 

int main () {
  cin >> n >> x; 
  for (int i = 1; i <= n; i++) {
    cin >> a[i]; 
  }
  sort(a + 1, a + n + 1); 
  int l = 1, r = n; 
  int ans = 0; 
  while (l <= r) {
    ans++; 
    if (a[l] + a[r] <= x) {
      l++; 
    }
    r--; 
  }
  cout << ans;
  return 0; 
}