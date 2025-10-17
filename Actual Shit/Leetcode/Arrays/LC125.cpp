// Tests for 125. Valid Palindrome

#include <bits/stdc++.h>

#include <cassert>

using namespace std;

class Solution {
 public:
  bool isPalindrome(string s) {
    int left = 0;
    int right = s.size() - 1;

    while (left < right) {
      while (left < right and !isalnum(s[left])) {
        left++;
      }
      while (left < right and !isalnum(s[right])) {
        right--;
      }

      if (tolower(s[left++]) != tolower(s[right--])) {
        return false;
      }
    }

    return true;
  }
};

void testIsPalindrome() {
  Solution solution;

  // Test case 1: Simple palindrome with mixed case
  assert(solution.isPalindrome("A man, a plan, a canal: Panama") == true);
  cout << "Test case 1 passed!" << endl;

  // Test case 2: Non-palindrome
  assert(solution.isPalindrome("race a car") == false);
  cout << "Test case 2 passed!" << endl;

  // Test case 3: Empty string (considered a palindrome)
  assert(solution.isPalindrome("") == true);
  cout << "Test case 3 passed!" << endl;

  // Test case 4: Single character
  assert(solution.isPalindrome("a") == true);
  cout << "Test case 4 passed!" << endl;

  // Test case 5: Special characters only
  assert(solution.isPalindrome(".,") == true);
  cout << "Test case 5 passed!" << endl;

  // Test case 6: Palindrome with numbers
  assert(solution.isPalindrome("A1b2,c3C2b1A") == true);
  cout << "Test case 6 passed!" << endl;

  // Test case 7: Non-palindrome with numbers
  assert(solution.isPalindrome("1a2b3c") == false);
  cout << "Test case 7 passed!" << endl;

  // Test case 8: Space only
  assert(solution.isPalindrome(" ") == true);
  cout << "Test case 8 passed!" << endl;
}

int main() {
  testIsPalindrome();
  cout << "All tests passed!" << endl;
  return 0;
}