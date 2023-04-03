#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>

int main() {
    char *path_f = "./f", *path_g = "./g", str[512];
    FILE *f, *g;
    std::vector<char*> data;
    
    f = fopen(path_f, "r");
    rewind(f);
    g = fopen(path_g, "w");
    rewind(g);
    
    std::cout << "source file content:" << std::endl;
    while (fgets(str, 512, f) != nullptr) {
        char *tmp = new char[512];
        strcpy(tmp, str);
        data.push_back(tmp);
        std::cout << tmp;
    }
    std::cout << std::endl;
    std::cout << "dest file content:" << std::endl;
    for (int i = data.size()-1; i >= 0; --i) {
        fputs(data[i], g);
        std::cout << data[i];
    }

    return 0;
}