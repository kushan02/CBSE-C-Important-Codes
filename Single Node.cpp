#include <iostream>

using namespace std;

struct node {
    int n;
    node *nxt;
} *head = NULL, *t = NULL, *new1 = NULL;

void disp() {
    cout << endl << "THE LIST IS: " << endl;
    for (t = head; t != NULL; t = t->nxt) {
        cout << t->n << endl;
    }
}

void add(int loop) {

    new1 = new node;
    new1->nxt = NULL;

    cout << "Enter no for loop " << loop << " :  ";
    cin >> new1->n;


    if (head == NULL) {
        head = new1;
    } else {
        for (t = head; t->nxt != NULL; t = t->nxt);

        t->nxt = new1;

    }

}

void del(int srch) {
    node *prev = NULL;

    for (prev = t = head; t != NULL; prev = t, t = t->nxt) {
        if (t->n == srch) {
            break;
        }
    }

    if (t == head) {
        head = t->nxt;
    } else if (t->nxt == NULL) {
        prev->nxt = NULL;
    } else {
        prev->nxt = t->nxt;
    }

}


int main() {

    // CODE FOR ADDING NEW NODE TO LINKLIST

    for (int i = 0; i < 3; ++i) {
        add(i);
    }

    disp();

    del(3);

    disp();


    return 0;
}
