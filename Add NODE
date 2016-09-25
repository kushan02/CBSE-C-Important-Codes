#include <iostream>

using namespace std;

struct node
{
        int n;
        node *nxt;
}*head=NULL,*t=NULL,*new1=NULL;

void disp()
{
    cout<<endl<<"THE LIST IS: "<<endl;
    for (t=head;t!=NULL;t=t->nxt)
    {
        cout<<t->n<<endl;
    }
}

int main()
{
    
    // CODE FOR ADDING NEW NODE TO LINKLIST
    
    for (int i = 0; i <3 ; ++i) {

        new1 = new node;
        new1->nxt=NULL;

        cout<<"Enter no for loop "<<i<<" :  ";
        cin>>new1->n;


        if(head==NULL)
        {
            head=new1;
        }
        else
        {
            for (t=head;t->nxt!=NULL;t=t->nxt);

            t->nxt=new1;

        }
    }

    disp();


    return 0;
}
