#include <iostream>
/*
     ----------------------
 <--| prev | m_data | next |-->
     ----------------------
*/
struct Node
{
	int m_data;
	Node* next;
	Node* prev;
};

Node* head = nullptr;
Node* tail = nullptr;

/* function creating a node, return address of new node */
Node* GetNode(int& data)
{
	Node* NewNode = new Node;
	NewNode->next = nullptr;
	NewNode->prev = nullptr;
	NewNode->m_data = data;
	return NewNode;
}

void InsertNodeHead(int data)
{
	Node* ptr = GetNode(data);
	if (head == nullptr)
		{
			head = ptr;
			tail = ptr;
		}
	else
		{
			head->prev = ptr;
			ptr->next = head;
			head = ptr;
		}
}

void InsertNodeTail(int data)
{
	Node* ptr = GetNode(data);
	if (head == nullptr)
		{
			head = ptr;
			tail = ptr;
		}
	else
		{
			ptr->prev = tail;
			tail->next = ptr;
			tail = ptr;
		}
}

/* print list from head */
void print(Node* head_ref)
{
	Node* temp = head_ref;
	while (temp != nullptr)
		{
			std::cout << temp->m_data << "\t";
			temp = temp->next;
		}
	std::cout << "\n";
}

/* print list from tail */
void print_Reverse(Node* ref)
{
	Node* ptr = ref;
	while (ptr != nullptr)
		{
			std::cout << ptr->m_data << "\t";
			ptr = ptr->prev;
		}
	std::cout << "\n";
}

int main()
{
	InsertNodeHead(1);
	InsertNodeTail(2);
	InsertNodeTail(3);
	InsertNodeTail(4);
	InsertNodeTail(5);
	
	if (head != nullptr)
		{ print(head); }
	
	if (tail != nullptr)
		{ print_Reverse(tail); }
		
	std::cin.get();
	return 0;
}
