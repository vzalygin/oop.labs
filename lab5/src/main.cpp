#include <cstring>
#include <iostream>

using namespace std;

int main() {
  char *str = new char[100];
  int open = 0, close = 0;
  bool flag = true;

  cout << "input the string" << endl;
  cin >> str;
  cout << "addresses of the elements between 2nd opening parenthesis and the closest closing parenthesis:" << endl;

  for (int i = 0; i < strlen(str); ++i) {
    if (open == 2 && flag) {
      if (str[i] == ')')
        flag = false;
      else
        cout << (void *)(str + i) << endl;
    }

    if (str[i] == '(')
      open++;
    if (str[i] == ')')
      close++;
  }

  return 0;
}