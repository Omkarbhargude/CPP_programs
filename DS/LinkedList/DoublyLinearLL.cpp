/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Name : Doubly Linear LinkedList
// Description : Implementing Doubly Linear LinkedList in CPP with operations like Insertion, Deletion, and traversal
// Input : Integer
// Output : Integer
// Author : Omkar Mahadev Bhargude
// Date : 02/07/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

// Structure of node
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;


class DoublyLLL
{
    private:
        PNODE first;
        int iCount;

    public:
    
    DoublyLLL()
    {
        this->first = NULL;
        this->iCount = 0;
    }

    // Displays all the elements from linkedlist
    void Display()
    {
        PNODE temp = NULL;

        temp = first;

        cout<<"NULL <=>";

        while(temp != NULL)
        {
            cout<<" | "<<temp->data<<" | <=> ";

            temp = temp->next;
        }

        cout<<" NULL\n";
    }

    // Returns the count of number of elements present in linkedlist
    int Count()
    {
        return iCount;
    }

    // Inserts new node at first position
    void InsertFirst(int no)
    {
        PNODE newn = NULL;

        newn = new NODE;
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        if(first == NULL)
        {
            first = newn;
        }
        else
        {
            newn->next = first;
            first->prev = newn;

            first = newn;
        }

        iCount++;
    }

    // Inserts new node at Last position
    void InsertLast(int no)
    {

        PNODE newn = NULL;
        PNODE temp = NULL;

        newn = new NODE;
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        if(first == NULL)
        {
            first = newn;
        }
        else
        {
            temp = first;

            while(temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = newn;
            newn->prev = temp;

            newn->next = NULL;
        }

        iCount++;
    }

    // Inserts new node at Given position
    void InsertAtPos(int no, int pos)
    {
        int iCnt = 0;
        PNODE newn = NULL;
        PNODE temp = NULL;

        if((pos < 1) || (pos > iCount+1))
        {
            cout<<"Invalid Position\n";
            return;
        }

        if(pos == 1)
        {
            InsertFirst(no);
        }
        else if(pos == iCount+1)
        {
            InsertLast(no);
        }
        else
        {
            newn = new NODE;
            newn->data = no;
            newn->next = NULL;
            newn->prev = NULL;

            temp = first;

            for(iCnt = 1; iCnt < pos-1; iCnt++)
            {
                temp = temp->next;
            }

            newn->next = temp->next;
            newn->next->prev = newn;
            temp->next = newn;
            newn->prev = temp;

            iCount++;
        }
    }

    // Deletes the  node at first position
    void DeleteFirst()
    {
        if(first == NULL)
        {
            return;
        }
        else if(first->next == NULL)
        {
            delete first;

            first = NULL;
        }
        else
        {
            first = first->next;

            delete first->prev;

            first->prev = NULL;
        }

        iCount--;
    }

    // Deletes the node at last position
    void DeleteLast()
    {
        PNODE temp = NULL;

        if(first == NULL)
        {
            return;
        }
        else if(first->next == NULL)
        {
            delete first;

            first = NULL;
        }
        else
        {
            temp = first;

            while(temp->next->next != NULL)
            {
                temp = temp->next;
            }

            delete temp->next;

            temp->next = NULL;

        }

        iCount--;
    }


    // Delete the node at given position
    void DeleteAtPos(int pos)
    {
        int iCnt = 0; 
        PNODE temp = NULL;
        PNODE target = NULL;

        if((pos < 1) || (pos > iCount))
        {
            cout<<"Invalid Position";
            return;
        }

        if(pos == 1)
        {
            DeleteFirst();
        }
        else if(pos == iCount)
        {
            DeleteLast();
        }
        else
        {
            temp = first;

            for(iCnt = 1; iCnt < pos-1; iCnt++)
            {
                temp = temp->next;
            }

            target = temp->next;

            temp->next = target->next;
            target->next->prev = temp;

            delete target;

            iCount--;
        }
    }

    // Search and returns the position of node at which found
    int SearchElement(int no)
    {
        int iCount = 0;
        PNODE temp = NULL;
        temp = first;

        if(temp == NULL)
        {
            cout<<"Linked list is empty\n";
            return -1;
        }

        do
        {
            iCount++;

            if(temp->data == no)
            {
                return iCount;
            }

            temp = temp->next;
        }while(temp != NULL);

        return -1;
    }

    
};
int main()
{


    DoublyLLL dobj;
    int iChoice = 0;
    int iValue = 0;
    int iPos = 0;
    int iRet = 0;

    cout<<"----------------------------------------------------------------------------\n";
    cout<<"------------------------- DOUBLY LINEAR LINKEDLIST -------------------------\n";
    cout<<"----------------------------------------------------------------------------\n\n";

    while(1)
    {
        cout<<"-------------------------------------------------------------------------\n";
        cout<<"-------------------------- Select the Option ----------------------------\n";
        cout<<"-------------------------------------------------------------------------\n";
        cout<<"1 : Insert new node at first position\n";
        cout<<"2 : Insert new node at last position\n";
        cout<<"3 : Insert new node at given position\n";
        cout<<"4 : Delete new node at first position\n";
        cout<<"5 : Delete new node at last position\n";
        cout<<"6 : Delete new node at given position\n";
        cout<<"7 : Display all element from LinkedList\n";
        cout<<"8 : Count number of elements from LinkedList\n";
        cout<<"9 : search if the element is present or not\n";
        cout<<"0 : Terminate LinkedList\n";
        cout<<"------------------------------------------------------------------------\n";

        cin>>iChoice;

        switch(iChoice)
        {
            case 1: 
                    cout<<"Enter the data that you want to insert : \n";
                    cin>>iValue;
                    dobj.InsertFirst(iValue);
                    break;

            case 2:
                    cout<<"Enter the data that you want to insert : \n";
                    cin>>iValue;
                    dobj.InsertLast(iValue);
                    break;

            case 3:
                    cout<<"Enter the data that you want to insert : \n";
                    cin>>iValue;

                    cout<<"Enter the position at which you want to insert the node : \n";
                    cin>>iPos;

                    dobj.InsertAtPos(iValue,iPos);
                    break;

            case 4:
                    cout<<"Deleting first element from LinkedList\n";
                    dobj.DeleteFirst();
                    break;

            case 5:
                    cout<<"Deleting last element from LinkedList\n";
                    dobj.DeleteLast();
                    break;

            case 6:
                    cout<<"Deleting element from given position of LinkedList\n";
                    cout<<"Enter the position at which you want delete the new node : \n";
                    cin>>iPos;

                    dobj.DeleteAtPos(iPos);
                    break;

            case 7: 
                   cout<<"Displaying all the elements from LinkedList\n";
                   dobj.Display();
                   break;

            case 8:
                    iRet = dobj.Count();
                    cout<<"Number of elements in LinkedList are : %d",iRet;
                    break;

            case 9:
                   cout<<"Enter the number that you want to search : \n";
                   cin>>iValue;

                   iRet = dobj.SearchElement(iValue);

                   if(iRet == -1)
                   {
                     cout<<"Element not found\n";
                   }
                   else
                   {
                     cout<<"Element found at position : "<<iRet<<"\n";
                   }
                    break;

            case 0:
                   cout<<"------------------- THANKS FOR USING OUR APPLICATION ---------------\n";
                   return 0;
            
            default:
                   cout<<"Invalid Choice\n";
                   cout<<"--------------------------------------------------------------------\n";
                   break;
                   
        }            
    }
    return 0;
}