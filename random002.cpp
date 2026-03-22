#include <iostream>
#include <sstream>
#include <unordered_map>
#include <string>
#include <cctype>

using namespace std;

// ================== TOKEN EVALUATION ==================
int evaluateExpression(istringstream& tokens,
                       unordered_map<string, int>& memory);

// ================== PARSE VALUE ==================
int parseValue(istringstream& tokens,
               unordered_map<string, int>& memory) {
    string token;
    tokens >> token;

    if (isdigit(token[0]) || (token[0] == '-' && token.size() > 1))
        return stoi(token);

    return memory[token]; // variable
}

// ================== EXPRESSION ==================
int evaluateExpression(istringstream& tokens,
                       unordered_map<string, int>& memory) {
    int value = parseValue(tokens, memory);

    while (tokens) {
        string op;
        tokens >> op;
        if (!tokens) break;

        int rhs = parseValue(tokens, memory);

        if (op == "+") value += rhs;
        else if (op == "-") value -= rhs;
        else if (op == "*") value *= rhs;
        else if (op == "/") value /= rhs;
    }
    return value;
}

// ================== INTERPRETER ==================
int main() {
    unordered_map<string, int> memory;
    string line;

    cout << "Mini Language Interpreter\n";
    cout << "Type 'exit' to quit\n\n";

    while (true) {
        cout << ">>> ";
        getline(cin, line);
        if (line == "exit") break;

        istringstream iss(line);
        string first;
        iss >> first;

        // PRINT STATEMENT
        if (first == "print") {
            int result = evaluateExpression(iss, memory);
            cout << result << endl;
        }
        // ASSIGNMENT
        else {
            string equals;
            iss >> equals;

            int value = evaluateExpression(iss, memory);
            memory[first] = value;
        }
    }
    return 0;
}
