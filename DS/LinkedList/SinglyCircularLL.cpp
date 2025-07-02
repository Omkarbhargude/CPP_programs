/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Name : Singly Circular LinkedList
// Description : Implementing Singly circular LinkedList in CPP with operations like Insertion, Deletion,searching and traversal
// Input : Integer
// Output : Integer
// Author : Omkar Mahadev Bhargude
// Date : 02/07/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

//Structure of node
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;


class SinglyCLL
{
    private:
        PNODE first;
        PNODE last;
        int iCount;

    public:

    SinglyCLL()
    {
        this->first = NULL;
        this->last = NULL;
        this->iCount = 0;
    }

    // Displays all element from linkedlist
    void Display()
    {
        PNODE temp = NULL;
        temp = first;

        do
        {
            cout<<"| "<<temp->data<<" | ->";

            temp = temp->next;
        }while(temp != last->next);

        cout<<"\n";
    }

    // Returns the count of total elements present in linkedlist
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

        if(first == NULL)
        {
            first = newn;
            last = newn;

            last->next = first;
        }
        else
        {
            newn->next = first;
            first = newn;

            last->next = first;
        }

        iCount++;
    }

    // Inserts new node at last position
    void InsertLast(int no)
    {
        PNODE newn = NULL;

        newn = new NODE;
        newn->data = no;
        newn->next = NULL;

        if(first == NULL)
        {
            first = newn;
            last = newn;

            last->next = first;
        }
        else
        {
            last->next = newn;
            last = newn;

            last->next = first;
        }

        iCount++;
    }

    // Inserts new node at given position
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
            temp = first;

            newn = new NODE;
            newn->data = no;
            newn->next = NULL;

            for(iCnt = 1; iCnt < pos-1; iCnt++)
            {
                temp = temp->next;
            }

            newn->next = temp->next;
            temp->next = newn;

            last->next = first;

            iCount++;
        }

    }

    // Deletes first node from linked list
    void DeleteFirst()
    {
        if(first == NULL)
        {
            return;
        }
        else if(first == last)
        {
            delete first;

            first = NULL;
            last = NULL;
        }
        else
        {
            first = first->next;

            delete last->next;

            last->next = first;
        }

        iCount--;
    }

    // Delete last node from linkedlist
    void DeleteLast()
    {
        PNODE temp = NULL;

        if(first == NULL)
        {
            return;
        }
        else if(first == last)
        {
            delete first;

            first = NULL;
            last = NULL;
        }
        else
        {
            temp = first;

            while(temp->next->next != first)
            {
                temp = temp->next;
            }

            last = temp;

            delete temp->next;

            last->next = first;
        }

        iCount--;
        
    }

    // Delete the node from given position
    void DeleteAtPos(int pos)
    {
        PNODE temp = NULL;
        PNODE target = NULL;
        int iCnt = 0;

        if((pos < 1) || (pos > iCount))
        {
            cout<<"Invalid Position\n";
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

            target =  temp->next;

            temp->next = target->next;

            delete target;

            last->next = first;

            iCount--;
        }
    }

    // Searchs given element and returns its position
    int SearchElement(int no)
    { 
        int iCount = 0;

        PNODE temp = NULL;
        temp = first;

        if(temp == NULL)
        {
            cout<<"List is empty\n";
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
        }while(temp != first);

        return -1;
    }
};

int main()
{


    SinglyCLL sobj;
    int iChoice = 0;
    int iValue = 0;
    int iRet = 0;
    int iPos = 0;

    cout<<"-------------------------------------------------------------------------------------------------------\n";
    cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< Singly Circular LinkedList In CPP >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n";
    cout<<"-------------------------------------------------------------------------------------------------------\n\n";

    while(1)
    {
        cout<<"-----------------------------------------------------------------------------------------------------\n";
        cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< Select the Option >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n";
        cout<<"-----------------------------------------------------------------------------------------------------\n";

        cout<<"1 : Insert new node at first position in Linkedlist\n";
        cout<<"2 : Insert new node at last position in Linkedlist\n";
        cout<<"3 : Insert new node at given position in Linkedlist\n";
        cout<<"4 : Delete the node at first position in Linkedlist\n";
        cout<<"5 : Delete the node at last position in Linkedlist\n";
        cout<<"6 : Delete the node from given position in Linkedlist\n";
        cout<<"7 : Display all elements from linkedlist\n";
        cout<<"8 : Count number of elements present in linkedlist\n";
        cout<<"9 : Search the position of element\n";
        cout<<"0 : Terminate Application\n";
        cout<<"-----------------------------------------------------------------------------------------------------\n";

        cout<<"Enter the option : \n";
        cin>>iChoice;

        switch(iChoice)
        {
            case 1:
                cout<<"Enter the data that you want to insert : \n";
                cin>>iValue;

                sobj.InsertFirst(iValue);
                break;

            case 2:
                cout<<"Enter the data that you want to insert : \n";
                cin>>iValue;

                sobj.InsertLast(iValue);
                break;

            case 3:
               cout<<"Enter data that you want to insert : \n";
               cin>>iValue;

               cout<<"Enter position at which you want to insert the data : \n";
               cin>>iPos;

               sobj.InsertAtPos(iValue,iPos);
               break;

            case 4:
                cout<<"Deleting first element from linkedlist....\n";
                sobj.DeleteFirst();
                break;

            case 5:
                cout<<"Deleting last element from linkedlist.....\n";
                sobj.DeleteLast();
                break;

            case 6:
               cout<<"Enter the position from which you want to delete the element : \n";
               cin>>iPos;

               sobj.DeleteAtPos(iPos);
               cout<<"Deleting the element from position : "<<iPos<<"\n";
               break;
            
            case 7:
               cout<<"Elements from linkedlist are : \n";
               sobj.Display();
               break;

            case 8:
               iRet = sobj.Count();
               cout<<"Number of elements in Linkedlist are : "<<iRet<<"\n";
               break;

            case 9:
               cout<<"Enter the element that you want to search : \n";
               cin>>iValue;
                iRet = sobj.SearchElement(iValue);

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
                cout<<"<<<<<<<<<<<<<<<<<<<<<<<< Thanks for using our application >>>>>>>>>>>>>>>>>>>>>>>>>\n";
                return 0;

            default:
               cout<<"Invalid Option\n";
               cout<<"-----------------------------------------------------------------------------------\n";
               break;
        }
    }

    return 0;
}
