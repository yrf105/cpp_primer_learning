#include <map>
#include <set>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

map<string, vector<string> > family;
void add_new_family (string f) {
    family[f] = {};
}

void add_children (string fa, string child) {
    family[fa].push_back(child);
}

int main() {
     
    return 0;
}