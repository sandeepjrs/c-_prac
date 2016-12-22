#include <iostream>
using namespace std;

class Linkist{
public:

    Linkist(){
        head = NULL;
    }

    void add(int x){

        node* newNode = new node;
        newNode->data = x;
        newNode->next = head;
        cout<<x <<"  added in : " <<newNode<<  "  previous node : "<< head<<"\n";
        head = newNode;
    }

    void print(){
        cout<<"trying to print"<<"\n";
        while (head!=NULL) {
            cout<<head->data<<"\n";
            head=head->next;
        }
    }

private:
    struct node{
        int data;
        node* next;

    };
    node *head;
};

int main(){
    Linkist l;

    for(int i=0;i<5;i++){

           l.add(i);
    }
    cout<<"hekoo bbbay"<<"\n";
    l.print();
}
