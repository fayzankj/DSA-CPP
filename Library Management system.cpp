#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class node
{
public:
    string ISBN;
    int count;
    node *next;
};

class Stack
{
private:
public:
    node *top;
    Stack();
    ~Stack();
    bool isEmpty();
    void push(string ISBN, int count);
    void display();
};

Stack::Stack()
{
    top = NULL;
}
Stack::~Stack()
{
    if (top)
    {
        node *a = top;
        top = top->next;
        while (top != NULL)
        {
            delete a;
            a = top;
            top = top->next;
        }
    }
}
bool Stack::isEmpty()
{
    if (top == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void Stack::display()
{
    if (isEmpty() == true)
    {
        cout << "Stack underflow." << endl;
    }
    else
    {
        node *a = top;
        while (a != NULL)
        { 
            cout << "ISBN: " << a->ISBN << endl;
            cout << "books: " << a->count << endl;
            a = a->next;
        }
    }
}
void Stack::push(string ISBN, int count)
{
    node *b = new node;
    b->ISBN = ISBN;
    b->count = count;
    b->next = NULL;
    if (top != NULL)
    {
        b->next = top;
    }
    top = b;
    b = NULL;
}

class Node
{

public:
    char title[30];
    string ISBN;
    char Author[30];
    char PublishingYear[20];
    Node *next;
};

class List
{
private:
    Node *head;

public:
    List();
    ~List();
    bool isEmpty();
    void insert_beg();
    void insert_end();
    void traverse();
    int count();
};

List::List()
{
    head = NULL;
}
List::~List()
{
    if (head)
    {
        Node *a = head;
        head = head->next;
        while (head != NULL)
        {
            delete a;
            a = head;
            head = head->next;
        }
    }
}
bool List::isEmpty()
{
    if (!head)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void List::traverse()
{
    if (isEmpty() == true)
    {
        cout << "Linked list does not exist." << endl;
    }
    else
    {
        Node *a = head;
        while (a != NULL)
        {
            cout << "Title: " << a->title << endl;
            cout << "ISBN: " << a->ISBN << endl;
            cout << "Author: " << a->Author << endl;
            cout << "Publishing Year: " << a->PublishingYear << endl;
            a = a->next;
        }
    }
}

int List::count()
{
    Node *a = head;
    int count = 0;
    while (a != NULL)
    {
        count++;
        a = a->next;
    }
    return count;
}

void List::insert_beg()
{
    ofstream str;
    cout << "\n\n";
    str.open("record.txt", ios::app);
    if (!"record.txt")
    {
        cout << "\nError while opening the file\n";
    }
    else
    {
        Node *a = new Node;

        cout << "\nISBN: ";
        getline(cin, a->ISBN);
        // cin.getline(a->ISBN, 10);
        cin.ignore();
        str << a->ISBN << "\n";
        cout << "\ntitle: ";
        cin.getline(a->title, 20);
        cin.ignore();
        str << a->title << "\n";
        cout << "\nAuthor: ";
        cin.getline(a->Author, 30);
        cin.ignore();
        str << a->Author << "\n";
        cout << "\nPublishing Year: ";
        cin.getline(a->PublishingYear, 20);
        cin.ignore();
        str << a->PublishingYear << "\n";
        cout << "\nFile saved\n";
        str.close();
        a->next = NULL;
        if (isEmpty() == true)
        {
            head = a;
            a = NULL;
        }
        else
        {
            a->next = head;
            head = a;
        }
    }
}
void List::insert_end()
{
    ofstream str;
    cout << "\n\n";
    str.open("record.txt", ios::app);
    if (!"record.txt")
    {
        cout << "\nError while opening the file\n";
    }
    else
    {
        Node *a = new Node;
        cout << "\nISBN: ";
        getline(cin, a->ISBN);
        // cin.getline(a->ISBN, 10);
        str << a->ISBN << "\n";
        cout << "\ntitle: ";
        cin.getline(a->title, 20);
        str << a->title << "\n";
        cout << "\nAuthor: ";
        cin.getline(a->Author, 30);
        str << a->Author << "\n";
        cout << "\nPublishing Year: ";
        cin.getline(a->PublishingYear, 20);
        cin.ignore();
        str << a->PublishingYear << "\n";
        cout << "\nFile saved\n";
        str.close();
        a->next = NULL;
        if (isEmpty() == true)
        {
            head = a;
            a = NULL;
        }
        else
        {
            Node *b = head;
            while (b != NULL)
            {
                if (b->next == NULL)
                {
                    b->next = a;
                    a = NULL;
                }
                b = b->next;
            }
        }
    }
}
void userLogin()
{
    string userName;
    string userPassword;
    int loginAttempt = 0;

    while (loginAttempt < 3)
    {
        cout << "Please enter your user name: ";
        cin >> userName;
        cout << "Please enter your user password: ";
        cin >> userPassword;

        if (userName == "faizan" && userPassword == "123")
        {
            cout << "\nWelcome Faizan!\n";
            break;
        }
        else if (userName == "tahir" && userPassword == "095")
        {
            cout << "\nWelcome Tahir!\n";
            break;
        }
        else
        {
            cout << "Invalid login attempt. Please try again.\n"
                 << '\n';
            loginAttempt++;
        }
    }

    if (loginAttempt == 3)
    {
        cout << "Too many login attempts! The program will now terminate.";

        exit(0);
    }

    cout << "Thank you for logging in.\n\n";
}

int main()
{
    userLogin();

    int choice;
    List L;
    do
    {
        cout<<"--------------------------------------------------------------"<<endl;
        cout << "1. Add Book." << endl;
        cout << "2. Delete Book." << endl;
        cout << "3. Search Book." << endl;
        cout << "4. Modify record." << endl;
        cout << "5. Display all Books." << endl;
        cout << "6. Count number of specific book." << endl;
        cout << "7. QUIT" << endl;
        cout << "\n\nEnter choice # -> ";
        cin >> choice;
        cin.ignore();
        system("CLS");
        switch (choice)
        {
        case 1:
        {
            L.insert_end();
            break;
        }
        case 2:
        {
            string temp, ISBN;
            cout << "Enter ISBN: ";
            getline(cin, ISBN);
            ifstream a;
            ofstream b;
            a.open("record.txt");
            b.open("new.txt");
            int i = 4;
            while (getline(a, temp))
            {
                if (temp != ISBN && i == 4)
                {
                    b << temp << endl;
                }
                if (temp == ISBN && i == 4)
                {
                    i--;
                }
                else if (i > 0 && i < 4)
                {
                    i--;
                }
                if (i == 0)
                {
                    i = 3;
                }
            }
            cout << "Record deleted!!" << endl;
            a.close();
            b.close();
            remove("record.txt");
            rename("new.txt", "record.txt");
            break;
        }
        case 3:
        {
            string temp, ISBN;
            cout << "Enter ISBN: ";
            getline(cin, ISBN);
            fstream a;
            int i = 0;
            a.open("record.txt", ios::in);
            if (!a)
            {
                cout << "\nError while opening the file\n";
            }
            else
            {
                cout << "BOOK Record-------->\n\n";
                while (getline(a, temp))
                {
                    if (temp == ISBN)
                    {
                        cout << "ISBN: ";
                        cout << temp << "\n";
                        i = 3;
                    }
                    else if (temp != ISBN && i == 3)
                    {
                        cout << "Title: ";
                        cout << temp << "\n";
                        --i;
                    }
                    else if (temp != ISBN && i == 2)
                    {
                        cout << "Author: ";
                        cout << temp << "\n";
                        --i;
                    }
                    else if (temp != ISBN && i == 1)
                    {
                        cout << "Published Year: ";
                        cout << temp << "\n";
                        --i;
                    }
                }
                cout << endl
                     << endl;
            }
            a.close();
            break;
        }
        case 4:
        {
            string temp, ISBN;
            cout << "Enter ISBN: ";
            getline(cin, ISBN);
            fstream a;
            int i = 0;
            a.open("record.txt", ios::in);
            if (!a)
            {
                cout << "\nError while opening the file\n";
            }
            else
            {
                cout << "Record------->\n\n";
                while (getline(a, temp))
                {
                    if (temp == ISBN)
                    {
                        cout << "ISBN: ";
                        cout << temp << "\n";
                        i = 3;
                    }
                    else if (temp != ISBN && i == 3)
                    {
                        cout << "Title: ";
                        cout << temp << "\n";
                        --i;
                    }
                    else if (temp != ISBN && i == 2)
                    {
                        cout << "Author: ";
                        cout << temp << "\n";
                        --i;
                    }
                    else if (temp != ISBN && i == 1)
                    {
                        cout << "Publishing Year: ";
                        cout << temp << "\n";
                        --i;
                    }
                }
                cout << endl
                     << endl;
            }
            a.close();
            int choice1;
        re:
            cout << "Press 1 to modify the record\nPress 2 to go back\n\nNote: if you choose to modify the record then previous record will be deleted and new modified record will be saved.\n";
            cin >> choice1;
            cin.ignore();
            if (choice1 == 1)
            {
                ifstream b;
                ofstream c;
                b.open("record.txt");
                c.open("new.txt");
                int i = 4;
                while (getline(b, temp))
                {
                    if (temp != ISBN && i == 4)
                    {
                        c << temp << endl;
                    }
                    if (temp == ISBN && i == 4)
                    {
                        i--;
                    }
                    else if (i > 0 && i < 4)
                    {
                        i--;
                    }
                    if (i == 0)
                    {
                        i = 4;
                    }
                }
                cout << "Record deleted!!" << endl;
                b.close();
                c.close();
                remove("record.txt");
                rename("new.txt", "record.txt");
                L.insert_end();
            }
            else if (choice1 == 2)
            {
                break;
            }
            else
            {
                goto re;
            }
            break;
        }
        case 5:
        {
            ifstream a;
            a.open("record.txt");
            if (!a)
            {
                cout << "\nError while opening the file\n";
            }
            else
            {
                cout << "\n\n\n\n\t\tRecords\n\n\n";
                string temp;
                while (getline(a, temp))
                {
                    cout << temp << "\n";
                }
                cout << endl
                     << endl;
            }
            a.close();
            break;
        }
        case 6:
        {
            Stack s;
            string x;
            cout << "Enter ISBN: ";
            getline(cin, x);
            node *b = s.top;
            fstream a;
            a.open("record.txt", ios::in);
            if (!a)
            {
                cout << "\nError while opening the file\n";
            }
            else
            {
                string temp;
                while (getline(a, temp))
                {
                    while (b != NULL)
                    {
                        if (temp == b->ISBN)
                        {
                            b->count++;
                        }
                        b = b->next;
                    }
                    b = s.top;
                }
            }
            a.close();
            break;
        }
        case 7:
        {
            cout << "Good Bye!!! Thank you :)" << endl;
            return 0;
        }
        default:
        {
            break;
        }
        }
    } while (choice <= 5);

    return 0;
}
