#include <iostream>

using namespace std;

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//
class Solution {
public:
    int hammingDistance(int x, int y) {
      int result = 0;
      unsigned int one = 1;
      unsigned int xored = (x ^ y);
      // cout << "Unsigned: " << xored << endl;
      while (xored) {
        if (one & xored)
          ++result;
        xored = xored >> 1;
      }
      return result;
    }
};

int main() {
  Solution S;

  cout << "2? " << S.hammingDistance(1, 4) << endl;

  std::cout << "Hello World!\n";
}