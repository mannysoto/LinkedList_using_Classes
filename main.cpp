#include <iostream>

using namespace std;

class Node{
public:
    Node():intData(0),nextNode(NULL){}
    int intData;
    Node* nextNode;

};
int main()
{
    int intSentinel = 0;
    int tmpCounter = 0;
    Node *current = NULL, *previous = NULL, *next = NULL, *head = NULL, *tail = NULL;

    //Ensure intSentinel does not equal 0, otherwise, the user won't go into the for loop.
    intSentinel = (intSentinel == 0) ? 1 : 0;

    while (intSentinel != 0){

        current = new Node;
        if(head == NULL && tail == NULL){
            head = current;
            tail = current;
        }
        if(previous != NULL){
            previous->nextNode = current;
            tail = current;
        }

        current->intData = tmpCounter;
        tmpCounter--;
        previous = current;

        cout << "Current: " << current << endl;
        cout << "\tData: " << current->intData << endl;
        cout << "\tNext Node: " << current->nextNode << endl;

        cout << "Enter 0 to quit, any other integer to continue: ";
        cin >> intSentinel;
        cout << "\tYou entered: " << intSentinel << endl;
    };

    current = head;
    while(current != NULL){
        cout << "Current: " << current << endl;
        cout << "\tData: " << current->intData << endl;
        cout << "\tNext Node: " << current->nextNode << endl;
        current = current->nextNode;

    };

    return 0;
}
