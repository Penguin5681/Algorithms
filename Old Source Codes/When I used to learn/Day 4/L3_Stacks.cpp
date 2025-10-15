#include <bits/stdc++.h>

using namespace std;
const int n = 100;

// stacksUsingArray

class stacks {
    int *arr;
    int top;
        public:
            stacks() {
                arr = new int[n];   // Memory Allocation
                top = -1;       // shows that the stack is empty
            }

    void STpush(int value) {
        if (top == n - 1) cout << "Stack Overflow\n";
        top++;
        arr[top] = value;   
    }

    void STpop() {
        if (top == -1) cout << "Stack already empty";
        top--;
    }

    int STtop() {
        if (top == -1) cout << "Stack Empty";
        return arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }
};

// Problem 1: Reverse a sentence using stacks

void reverseSentence(string str) {
    stack<string> St;
        for (int i = 0; i < str.length(); ++i) {
            string revWord = "";
                while (str[i] != ' ' and i < str.length()) {
                    revWord += str[i];
                    i++;
                }
            St.push(revWord);
        }
    while (!St.empty()) {
        cout << St.top() << " ";
        St.pop();
    }
} 

void problem1() {
    string s = "Hey, how are you doing?";
    reverseSentence(s);
}

// Problem 2: Reverse a number using stacks

void reverseNumber(int number) {
    stack<int> St;
    while (number != 0) {
        int finalDigit = number % 10;
        St.push(finalDigit);
        number /= 10;
    }
    
    int revNum = 0;
    int multi = 1;
    
    while (!St.empty()) {
        int digit = St.top();
        St.pop();
        revNum = revNum + digit * multi;
        multi *= 10;   
    }

    cout << revNum;
}

void problem2() {
    int num = 54321;
    reverseNumber(num);
}

int numREV(int n) {
    int revNUM = 0;
        while (n != 0) {
            int finalDigit = n % 10;
            revNUM = revNUM * 10 + finalDigit;
            n /= 10;
        }
    return revNUM;
}