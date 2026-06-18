#include <iostream>
#include <stack>
using namespace std;
class Solution {
public:
bool isValid(const string &s) {
    stack<char> pilha;
    
    for (char c : s) {
        
        if (c == '(' || c == '[' || c == '{') {
            pilha.push(c);
        }
        
        else {
        
            if (pilha.empty()) {
                return false;
            }
            
            
            char topo = pilha.top();
            
            if ((c == ')' && topo == '(') ||
                (c == ']' && topo == '[') ||
                (c == '}' && topo == '{')) {
                pilha.pop();  
            } else {
                return false; 
            }
        }
    }
    
    
    return pilha.empty();
}
};

int main() {
string testes[] = { "[{()}]", "()[]{}", "{[(}])", "(][){}", "}{)(][", ")", "(" };
for (auto &s : testes) {
cout << s << ": ";
cout << (Solution().isValid(s)?"Valida":"Invalida") << endl;
}
}