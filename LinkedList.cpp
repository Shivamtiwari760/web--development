#include<iostream>
using namespace std;
#include "Node.cpp"
Node*takeInput(){// yha pr koi use argument chahiye bacsue use user se bss argument lena h
// array  ke size ka hi constraint remove krne ke lite hi toh hum linked list padh rhe h
 int data;
 cin>>data;
 while(data!=-1){
     
 }





}
void print(Node*head){
    while(head!=null){
        cout<<head->data<<" "<<;
        head=head->next;
    }
}
int main(){
    //statically 
    Node*head=&n1;
    Node n1(1);
    Node n2(2);
    Node n3(3);
    NOde n4(4);
    Node n5(5);
    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=&n5;
    print(head);
    /**
    n1.next=&n2;
    cout<<n1.data<< " "<<n2.data<<endl;
    //dynamically
    Node *n3=new Node(10);
    Node *head=n3;
    Node *n4=new Node(20);
    n3->next=n4;
*/
}
// linked list ki first node ko hum bol dete h head or linked list ki last node ko hum bol dete h tail
// first node hmesha head hoti h last node hmesha tail hoti h
// n1 ka address humein apne variable mein save krna h
// address h toh kisi pointer mein jayega abhi ke liye uska naam head rkh dete h