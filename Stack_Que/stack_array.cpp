#include <iostream>

using namespace std;

#define MAX 50

int ar[MAX];

int top = -1;

void push(int k)
{
        ar[++top] = k;
}

void pop()
{
        top--;
}

void disp()
{
        cout<<"Stack: ";
        for (size_t i = 0; i <= top; i++) {
                cout<<ar[i]<<" ";
        }
        cout<<endl;

}

int main() {
        /* code for push (array logic) */
        push(3); disp();
        push(5); disp();
        pop(); disp();
        push(2); disp();
        push(1); disp();


        return 0;
}
