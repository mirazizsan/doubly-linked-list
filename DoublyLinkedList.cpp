#include "DoublyLinkedList.h"

void DoublyLinkedList::push_front(float data)
{
	Node* temp = new Node(data);

	if (_size == 0)
	{
		_tail = temp;
		_head = temp;
	}
	else
	{
		_head->next = temp;
		temp->prev = _head;
		_head = temp;
	}

	_size++;
}

void DoublyLinkedList::push_back(float data)
{
	Node* temp = new Node(data);

	if (_size == 0)
	{
		_tail = temp;
		_head = temp;
	}
	else
	{
		_tail->prev = temp;
		temp ->next = _tail;
		_tail = temp;
	}

	_size++;
}

void DoublyLinkedList::pop_front()
{

	try
	{
		Node* temp = new Node;

		if (_size == 0)
			throw std::out_of_range("Doubly Linked List is empty!");
		{
			temp = _head;
			_head = _head->prev;

			delete temp;

			_size--;
		}
	}
	catch (const std::out_of_range &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void DoublyLinkedList::pop_back()
{

	try
	{
		Node* temp = new Node;

		if (_size == 0)
			throw std::out_of_range("Doubly Linked List is empty!");
		{
			temp = _tail;
			_tail = _tail->next;

			delete temp;

			_size--;
		}
	}
	catch (const std::out_of_range& e)
	{
		std::cout << e.what() << std::endl;
	}
}

float& DoublyLinkedList::front()
{
	try
	{
		if (_size == 0)
			throw std::out_of_range("ERROR: Doubly Linked List is empty!");

			return _head->data;
	}
	catch (const std::exception&e)
	{
		std::cout << e.what() << std::endl;
	}
}

float& DoublyLinkedList::back()
{
	try
	{
		if (_size == 0)
			throw std::out_of_range("ERROR: Doubly Linked List is empty!");

		return _tail->data;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

int DoublyLinkedList::size()
{
	return _size;
}

bool DoublyLinkedList::empty()
{
	return _size == 0 ? true : false;
}

void DoublyLinkedList::IndividualTask()
{
	Node* temp;
	
	temp = _tail;
	_max = _tail;

	while (temp->next !=nullptr)
	{
		if ((temp->data >= _max->data) && (temp->data > temp->next->data))
			_max = temp;

		temp = temp->next;
	}

	if (_max < _head)
		_max = _head;
	
	if (_max == _tail)
	{
		Node* newNode = new Node(3.14);

		_tail->prev = newNode;
		newNode->next = _tail;
		_tail = newNode;
	}

	else
	{
		Node* newNode = new Node(3.14);
		Node* prevMax = _max->prev;

		prevMax->next = newNode;
		_max->prev = newNode;
		newNode->next = _max;
		newNode->prev = prevMax;
	}

	_size++;
}

void DoublyLinkedList::PrintFromBackToFront()
{
	Node* temp;
	temp = _tail;

	while (temp != nullptr)
	{
		std::cout << temp->data <<std:: endl;

		temp = temp->next;
	}
}

void DoublyLinkedList::PrintFromFrontToBack()
{
	Node* temp;
	temp = _head;

	while (temp != nullptr)
	{
		std::cout << temp->data << std::endl;

		temp = temp->prev;
	}
}
