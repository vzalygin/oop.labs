#include <iostream>
#include <cstdio>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

int groups(char *str, bool (*attr)(char)) {
    int count = 0;
    for (int i = 0; i < strlen(str) - 1; ++i) {
        if (!attr(str[i]) && attr(str[i + 1]))
            count += 1;
    }
    if (attr(str[0]))
        count += 1;
    return count;
}

char* replace(char *str, bool(*attr)(char)) {
    char *res = new char[1]{'\0'};
    int len = strlen(str);
    bool is_group = false;
    for (int i = 0; i < len; ++i) {
        if (attr(str[i])) {
            is_group = true;
        } else  {
            if (is_group) {
                is_group = false;
                res = strcat(res, "123");
            }
            res = strncat(res, &str[i], 1);
        }
    }
    return res;
}

bool is_letter(char c) {
    return 'a' <= c && c <= 'z';
}

bool is_sign(char c) {
    return c == '+' || c == '-' || c == '*';
}

int main() {
    cout << "Введите количество строк" << endl;
    int count;
    cin >> count;
    for (int i = 0; i < count; ++i) {
        cout << "Введите строку " << i+1 << endl;
        char s[128];
        scanf("%s", s);
        cout << "Исходная строка:" << endl << s << endl;
        if (groups(s, is_letter) > groups(s, is_sign)) {
            cout << "Групп букв больше, чем групп знаков" << endl;
            cout << "Скорректированная строка:" << endl << replace(s, is_sign) << endl;
        } else {
            cout << "Групп букв меньше, чем групп знаков" << endl;
            cout << "Скорректированная строка:" << endl << s << endl;
        }
    }
    
    return 0;
}