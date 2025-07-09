///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Name : LinkedList
// Description : Implementing all type of linkedlist in CPP with operations like Insertion, Deletion, and Traversal
// Input : Integer
// Output : Integer
// Author : Omkar Mahadev Bhargude
// Date : 08/07/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

struct snode
{
    int data;
    struct snode *next;
};

struct dnode
{
    struct dnode *prev;
    int data;
    struct dnode *next;
};

typedef struct snode SNODE;
typedef struct snode *SPNODE;
typedef struct dnode DNODE;
typedef struct dnode *DPNODE;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////---- CLASS LAYOUT ---- ////////////////////////////////////////////////////////////

class SinglyLL
{
    private:
        SPNODE first;
        int iCount;

    public:

       SinglyLL();
       void Display();
       void Count();
       void InsertFirst(int);
       void InsertLast(int);
       void DeleteFirst();
       void DeleteLast();
       void InsertAtPos(int, int);
       void DeleteAtPos(int);
};

class SinglyCLL
{
    private:
        SPNODE first;
        SPNODE last;
        int iCount;

    public:

       SinglyCLL();
       void Display();
       void Count();
       void InsertFirst(int);
       void InsertLast(int);
       void DeleteFirst();
       void DeleteLast();
       void InsertAtPos(int, int);
       void DeleteAtPos(int);
};

class DoublyLLL
{
    private:
       DPNODE first;
       int iCount;

    public:

       DoublyLLL();
       void Display();
       void Count();
       void InsertFirst(int);
       void InsertLast(int);
       void DeleteFirst();
       void DeleteLast();
       void InsertAtPos(int, int);
       void DeleteAtPos(int);
};

class DoublyCLL
{
    private:
       DPNODE first;
       DPNODE last;
       int iCount;

    public:

       DoublyCLL();
       void Display();
       void Count();
       void InsertFirst(int);
       void InsertLast(int);
       void DeleteFirst();
       void DeleteLast();
       void InsertAtPos(int, int);
       void DeleteAtPos(int);
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////// ---- Singly Linear Linkedlist ---- ////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Constructor
SinglyLL :: SinglyLL()
{
    this->first = NULL;
    this->iCount = 0;
}

// DIsplays all elements from linkedlist
void SinglyLL :: Display()
{
    SPNODE temp = NULL;

    temp = first;

    while(temp != NULL)
    {
        cout<<" | "<<temp->data<<" | ->";

        temp = temp->next;
    }

    cout<<" NULL\n";
}

// counts elements present
void SinglyLL :: Count()
{
   cout<<"Number of elements in Linkedlist are : "<<iCount<<"\n"; 
}


// Insertfirst
void SinglyLL :: InsertFirst(int no)
{
    SPNODE newn = NULL;
    newn = new SNODE;

    newn->data = no;
    newn->next = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }
    iCount++;
}

// InsertLast
void SinglyLL :: InsertLast(int no)
{
    SPNODE temp = NULL;

    SPNODE newn = NULL;
    newn = new SNODE;

    newn->data = no;
    newn->next = NULL;

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
    }  

    iCount++;
}

// Deletefirst
void SinglyLL :: DeleteFirst()
{
    SPNODE temp = NULL;

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

        first = first->next;

        delete temp;
    }

    iCount--;
}

// Deletelast function
void SinglyLL :: DeleteLast()
{
    SPNODE temp = NULL;

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

void SinglyLL :: InsertAtPos(int no, int pos)
{
    int iCnt = 0;
    SPNODE newn = NULL;
    SPNODE temp = NULL;

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
        newn = new SNODE;

        newn->data = no;
        newn->next = NULL;

        temp = first;

        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;

        iCount++;
    }
}

// DeleteAtPos
void SinglyLL :: DeleteAtPos(int pos)
{
    int iCnt = 0;
    SPNODE temp = NULL;
    SPNODE target = NULL;

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

        target = temp->next;
        temp->next = target->next;

        delete target;

        iCount--;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////// ---- Singly Circular Linkedlist ---- /////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Constructor
SinglyCLL :: SinglyCLL()
{
    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;
}

// Display Function
void SinglyCLL :: Display()
{
    SPNODE temp = NULL;

    temp = first;

    do
    {
        cout<<" | "<<temp->data<<" | -> ";

        temp = temp->next;

    }while(temp != last->next);

    cout<<"\n";
}

// Count function
void SinglyCLL :: Count()
{
   cout<<"Number of elements in Linkedlist are : "<<iCount<<"\n"; 
}

// InsertFirst Function
void SinglyCLL :: InsertFirst(int no)
{
    SPNODE newn = NULL;

    newn = new SNODE;
    newn->data = no;
    newn->next = NULL;

    if(first == NULL && last == NULL)
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

// InsertLast Function
void SinglyCLL :: InsertLast(int no)
{
    SPNODE newn = NULL;

    newn = new SNODE;
    newn->data = no;
    newn->next = NULL;

    if(first == NULL && last == NULL)
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

// DeleteFirst Function
void SinglyCLL ::  DeleteFirst()
{
    if(first == NULL && last == NULL)
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

// DeleteLast Function
void SinglyCLL :: DeleteLast()
{
    SPNODE temp = NULL;

    if(first == NULL && last == NULL)
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

        delete last->next;

        last->next = first;
    }

    iCount--;
}

// InsertAtPos Function
void SinglyCLL :: InsertAtPos(int no, int pos)
{
    int iCnt = 0;
    SPNODE newn = NULL;
    SPNODE temp = NULL;

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
        newn = new SNODE;
        newn->data = no;
        newn->next = NULL;

        temp = first;

        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;

        iCount++;
    }
}

// DeletAtPos function
void SinglyCLL :: DeleteAtPos(int pos)
{
    int iCnt = 0;
    SPNODE temp = NULL;
    SPNODE target = NULL;

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

        for(iCnt  = 1; iCnt < pos-1; iCnt++)
        {
            temp = temp->next;
        }

        target = temp->next;

        temp->next = target->next;

        delete target;

        iCount--;
    }
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////// ---- Doubly Linear Linkedlist ---- /////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Constructor
DoublyLLL :: DoublyLLL()
{
    this->first = NULL;
    this->iCount = 0;
}

// Display Function
void DoublyLLL :: Display()
{
    DPNODE temp = NULL;
    temp = first;

    cout<<" NULL <=> ";
    while(temp != NULL)
    {
        cout<<" | "<<temp->data<<" | <=> ";

        temp = temp->next;
    }

    cout<<" NULL\n";
}

// Count func
void DoublyLLL :: Count()
{
   cout<<"Number of elements in Linkedlist are : "<<iCount<<"\n"; 
}

// InsertFirst function
void DoublyLLL :: InsertFirst(int no)
{
    DPNODE newn = NULL;

    newn = new DNODE;

    newn->data = no;
    newn->prev = NULL;
    newn->next = NULL;

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

// InsertLast function
void DoublyLLL :: InsertLast(int no)
{
    DPNODE newn = NULL;
    DPNODE temp = NULL;

    newn = new DNODE;

    newn->data = no;
    newn->prev = NULL;
    newn->next = NULL;

    if(first == NULL )
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
    }

    iCount++;
}

// DeleteFirst function
void DoublyLLL :: DeleteFirst()
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

// DeleteLast function
void DoublyLLL :: DeleteLast()
{
    DPNODE temp = NULL;

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

// InsertAtPos function
void DoublyLLL :: InsertAtPos(int no, int pos)
{
    int iCnt = 0;
    DPNODE newn = NULL;
    DPNODE temp = NULL;

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
        newn = new DNODE;
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        temp = first;

        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;
        
        temp->next = newn;
        newn->prev = temp;

        iCount++;
    }
}

// DeleteAtPos function
void DoublyLLL :: DeleteAtPos(int pos)
{
    int iCnt = 0;
    DPNODE temp = NULL;

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

        temp->next = temp->next->next;
        
        delete temp->next->prev;

        temp->next->prev = temp;

        iCount--;

    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////// ---- Doubly Circular Linkedlist ---- ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Constructor
DoublyCLL :: DoublyCLL()
{
    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;
}

// Display Function
void DoublyCLL :: Display()
{
    DPNODE temp = NULL;

    temp = first;

    cout<<" <=> ";
    do
    {
        cout<<" | "<<temp->data<<" | <=> ";

        temp = temp->next;
    }while(temp != last->next);

    cout<<"\n";
}

// Count Function
void DoublyCLL :: Count()
{
   cout<<"Number of elements in Linkedlist are : "<<iCount<<"\n"; 
} 

// InsertFirst function
void DoublyCLL :: InsertFirst(int no)
{
    DPNODE newn = NULL;
    
    newn =  new DNODE;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;

    }
    else
    {
        newn->next = first;
        first->prev = newn;

        first = newn;
    }

    first->prev = last;
    last->next = first;
    iCount++;
}

// InsertLast function
void DoublyCLL :: InsertLast(int no)
{
    DPNODE newn = NULL;
    
    newn =  new DNODE;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        last->next = newn;
        newn->prev = last;

        last = newn;
    }

    first->prev = last;
    last->next = first;

    iCount++;
}

// DeleteFirst function
void DoublyCLL :: DeleteFirst()
{
    if(first == NULL && last == NULL)
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

        delete first->prev;
    }

    first->prev = last;
    last->next = first;

    iCount--;
}

// Deletelast function
void DoublyCLL :: DeleteLast()
{
    DPNODE temp = NULL;

    if(first == NULL && last == NULL)
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
        temp = last->prev;
        last = temp;

        delete last->next;

    }

    last->next = first;
    first->prev = last;
    iCount--;
}

// InsetAtPos function
void DoublyCLL :: InsertAtPos(int no, int pos)
{
    int iCnt = 0;
    DPNODE newn = NULL;
    DPNODE temp = NULL;

    if((pos < 1) || (pos > iCount+1))
    {
        cout<<"invalid Position\n";
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
        newn = new DNODE;

        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        temp = first;

        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;

        iCount++;

    }
}

// DeleteAtPos function
void DoublyCLL :: DeleteAtPos(int pos)
{
    int iCnt = 0;
    DPNODE temp = NULL;
    DPNODE target = NULL;

    if((pos < 1) || (pos > iCount))
    {
        cout<<"invalid Position\n";
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
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{

    SinglyLL slobj;
    SinglyCLL scobj;
    DoublyLLL dlobj;
    DoublyCLL dcobj;


   int iChoice = 1;
   int iValue = 0;
   int iPos = 0;

   while(iChoice != 0)
   {
        cout<<"---------------------------------------------------------------------------\n";
        cout<<"=============================== ENTER OPTION ==============================\n";
        cout<<"---------------------------------------------------------------------------\n";
        cout<<"1 : Singly Linear LinkedList\n";
        cout<<"2 : Singly Ciruclar LinkedList\n";
        cout<<"3 : Doubly Linear LinkedList\n";
        cout<<"4 : Doubly Circular LinkedList\n";
        cout<<"0 : To Exit \n";
        cout<<"===========================================================================\n\n";

        cout<<"Enter the Option : \n";
        cin>>iChoice;

        switch(iChoice)
        {
            case 1: // Singly Linear linkedlist

                cout<<"\n---------------------------------------------------------------------------\n";
                cout<<"========================= SINGLY LINEAR LINKEDLIST ========================\n";
                cout<<"---------------------------------------------------------------------------\n\n";
               
            while(iChoice != 0)
            {
                cout<<"---------------------------------------------------------------------------\n";
                cout<<"============================ SELECT THE OPTION ============================\n";
                cout<<"---------------------------------------------------------------------------\n";

                cout<<"1 : Insert new node at first position in Linkedlist\n";
                cout<<"2 : Insert new node at last position in Linkedlist\n";
                cout<<"3 : Insert new node at given position in Linkedlist\n";
                cout<<"4 : Delete the node at first position in Linkedlist\n";
                cout<<"5 : Delete the node at last position in Linkedlist\n";
                cout<<"6 : Delete the node from given position in Linkedlist\n";
                cout<<"7 : Display all elements from linkedlist\n";
                cout<<"8 : Count number of elements present in linkedlist\n";
                cout<<"0 : Terminate Application\n";
                cout<<"---------------------------------------------------------------------------\n";

                cout<<"Enter the option : \n";
                cin>>iChoice;

                switch(iChoice)
                {
                    case 1:
                        cout<<"Enter the data that you want to insert : \n";
                        cin>>iValue;

                        slobj.InsertFirst(iValue);
                        break;

                    case 2:
                        cout<<"Enter the data that you want to insert : \n";
                        cin>>iValue;

                        slobj.InsertLast(iValue);
                        break;

                    case 3:
                    cout<<"Enter data that you want to insert : \n";
                    cin>>iValue;

                    cout<<"Enter position at which you want to insert the data : \n";
                    cin>>iPos;

                    slobj.InsertAtPos(iValue,iPos);
                    break;

                    case 4:
                        cout<<"Deleting first element from linkedlist....\n";
                        slobj.DeleteFirst();
                        break;

                    case 5:
                        cout<<"Deleting last element from linkedlist.....\n";
                        slobj.DeleteLast();
                        break;

                    case 6:
                        cout<<"Enter the position from which you want to delete the element : \n";
                        cin>>iPos;

                        slobj.DeleteAtPos(iPos);
                        cout<<"Deleting the element from position : "<<iPos<<"\n";
                        break;
                    
                    case 7:
                        cout<<"Elements from linkedlist are : \n";
                        slobj.Display();
                        break;

                    case 8:
                        slobj.Count();
                        break;

                    case 0:
                        cout<<"==================== Thanks for using our application =====================\n";
                        return 0;

                    default:
                        cout<<"Invalid Option\n";
                        break;
                }
            }

            case 2:  // Singly Circular Linkedlist

                cout<<"-----------------------------------------------------------------------------\n";
                cout<<"========================= SINGLY CIRCULAR LINKEDLIST ========================\n";
                cout<<"-----------------------------------------------------------------------------\n\n";

            while(1)
            {
                cout<<"---------------------------------------------------------------------------\n";
                cout<<"============================ SELECT THE OPTION ============================\n";
                cout<<"---------------------------------------------------------------------------\n";
                cout<<"1 : Insert new node at first position in Linkedlist\n";
                cout<<"2 : Insert new node at last position in Linkedlist\n";
                cout<<"3 : Insert new node at given position in Linkedlist\n";
                cout<<"4 : Delete the node at first position in Linkedlist\n";
                cout<<"5 : Delete the node at last position in Linkedlist\n";
                cout<<"6 : Delete the node from given position in Linkedlist\n";
                cout<<"7 : Display all elements from linkedlist\n";
                cout<<"8 : Count number of elements present in linkedlist\n";
                cout<<"0 : Terminate Application\n";
                cout<<"---------------------------------------------------------------------------\n";

                cout<<"Enter the option : \n";
                cin>>iChoice;

                switch(iChoice)
                {
                    case 1:
                        cout<<"Enter the data that you want to insert : \n";
                        cin>>iValue;

                        scobj.InsertFirst(iValue);
                        break;

                    case 2:
                        cout<<"Enter the data that you want to insert : \n";
                        cin>>iValue;

                        scobj.InsertLast(iValue);
                        break;

                    case 3:
                        cout<<"Enter data that you want to insert : \n";
                        cin>>iValue;

                        cout<<"Enter position at which you want to insert the data : \n";
                        cin>>iPos;

                        scobj.InsertAtPos(iValue,iPos);
                        break;

                    case 4:
                        cout<<"Deleting first element from linkedlist....\n";
                        scobj.DeleteFirst();
                        break;

                    case 5:
                        cout<<"Deleting last element from linkedlist.....\n";
                        scobj.DeleteLast();
                        break;

                    case 6:
                        cout<<"Enter the position from which you want to delete the element : \n";
                        cin>>iPos;

                        scobj.DeleteAtPos(iPos);
                        cout<<"Deleting the element from position : "<<iPos<<"\n";
                        break;
                    
                    case 7:
                        cout<<"Elements from linkedlist are : \n";
                        scobj.Display();
                        break;

                    case 8:
                        scobj.Count();
                        break;

                    case 0:
                        cout<<"==================== Thanks for using our application =====================\n";
                        return 0;

                    default:
                        cout<<"Invalid Option\n";
                        break;
                }
            }
            case 3:    // Doubly linear linkedlist

                cout<<"-----------------------------------------------------------------------------\n";
                cout<<"=========================== DOUBLY LINEAR LINKEDLIST ========================\n";
                cout<<"-----------------------------------------------------------------------------\n\n";
   
            while(1)
            {
                cout<<"---------------------------------------------------------------------------\n";
                cout<<"============================ SELECT THE OPTION ============================\n";
                cout<<"---------------------------------------------------------------------------\n";
                cout<<"1 : Insert new node at first position in Linkedlist\n";
                cout<<"2 : Insert new node at last position in Linkedlist\n";
                cout<<"3 : Insert new node at given position in Linkedlist\n";
                cout<<"4 : Delete the node at first position in Linkedlist\n";
                cout<<"5 : Delete the node at last position in Linkedlist\n";
                cout<<"6 : Delete the node from given position in Linkedlist\n";
                cout<<"7 : Display all elements from linkedlist\n";
                cout<<"8 : Count number of elements present in linkedlist\n";
                cout<<"0 : Terminate Application\n";
                cout<<"---------------------------------------------------------------------------\n";

                cout<<"Enter the option : \n";
                cin>>iChoice;

                switch(iChoice)
                {
                    case 1:
                        cout<<"Enter the data that you want to insert : \n";
                        cin>>iValue;

                        dlobj.InsertFirst(iValue);
                        break;

                    case 2:
                        cout<<"Enter the data that you want to insert : \n";
                        cin>>iValue;

                        dlobj.InsertLast(iValue);
                        break;

                    case 3:
                        cout<<"Enter data that you want to insert : \n";
                        cin>>iValue;

                        cout<<"Enter position at which you want to insert the data : \n";
                        cin>>iPos;

                        dlobj.InsertAtPos(iValue,iPos);
                        break;

                    case 4:
                        cout<<"Deleting first element from linkedlist....\n";
                        dlobj.DeleteFirst();
                        break;

                    case 5:
                        cout<<"Deleting last element from linkedlist.....\n";
                        dlobj.DeleteLast();
                        break;

                    case 6:
                        cout<<"Enter the position from which you want to delete the element : \n";
                        cin>>iPos;

                        dlobj.DeleteAtPos(iPos);
                        cout<<"Deleting the element from position : "<<iPos<<"\n";
                        break;
                    
                    case 7:
                        cout<<"Elements from linkedlist are : \n";
                        dlobj.Display();
                        break;

                    case 8:
                        dlobj.Count();
                        break;

                    case 0:
                        cout<<"==================== Thanks for using our application =====================\n";
                        return 0;

                    default:
                        cout<<"Invalid Option\n";
                        break;
                }
            }
            
            case 4:     // Doubly Circular linkedlist

                cout<<"-------------------------------------------------------------------------------\n";
                cout<<"=========================== DOUBLY CIRCULAR LINKEDLIST ========================\n";
                cout<<"-------------------------------------------------------------------------------\n\n";
   
            while(1)
            {
                cout<<"---------------------------------------------------------------------------\n";
                cout<<"============================ SELECT THE OPTION =============================\n";
                cout<<"----------------------------------------------------------------------------\n";
                cout<<"1 : Insert new node at first position\n";
                cout<<"2 : Insert new node at last position\n";
                cout<<"3 : Insert new node at given position\n";
                cout<<"4 : Delete new node at first position\n";
                cout<<"5 : Delete new node at last position\n";
                cout<<"6 : Delete new node at given position\n";
                cout<<"7 : Display all element from LinkedList\n";
                cout<<"8 : Count number of elements from LinkedList\n";
                cout<<"0 : Terminate LinkedList\n";
                cout<<"---------------------------------------------------------------------------\n";

                cin>>iChoice;

                switch(iChoice)
                {
                    case 1: 
                        cout<<"Enter the data that you want to insert : \n";
                        cin>>iValue;
                        dcobj.InsertFirst(iValue);
                        break;

                    case 2:
                        cout<<"Enter the data that you want to insert : \n";
                        cin>>iValue;
                        dcobj.InsertLast(iValue);
                        break;

                    case 3:
                         cout<<"Enter the data that you want to insert : \n";
                        cin>>iValue;

                        cout<<"Enter the position at which you want to insert the node : \n";
                        cin>>iPos;

                        dcobj.InsertAtPos(iValue,iPos);
                        break;

                    case 4:
                        cout<<"Deleting first element from LinkedList\n";
                        dcobj.DeleteFirst();
                        break;

                    case 5:
                        cout<<"Deleting last element from LinkedList\n";
                        dcobj.DeleteLast();
                        break;

                    case 6:
                        cout<<"Deleting element from given position of LinkedList\n";
                        cout<<"Enter the position at which you want delete the new node : \n";
                        cin>>iPos;

                        dcobj.DeleteAtPos(iPos);
                        break;

                    case 7: 
                    cout<<"Displaying all the elements from LinkedList\n";
                    dcobj.Display();
                    break;

                    case 8:
                        dcobj.Count();
                        break;

                    case 0:
                        cout<<"------------------- THANKS FOR USING OUR APPLICATION ---------------\n";
                        return 0;
                    
                    default:
                        cout<<"Invalid Choice\n";
                        break;
                        
                }            
        }
    }

    }

    return 0;
}
