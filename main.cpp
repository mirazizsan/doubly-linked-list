#include "DoublyLinkedList.h"

using namespace std;

void PrintDefaultList(DoublyLinkedList &list);

int main()
{
	int n = 0;
	float element;

	DoublyLinkedList list;

	cout << "\nHow many elements do you want to push on List?";
	cout << "\n\n>>> ";
	cin >> n;
	cout << "\n";

	for (int i = 0; i < n; ++i)
	{
		cout << "\tEnter " << i+1 << " element: ";
		cin >> element;
		list.push_front(element);
	}

	system("cls");

	list.PrintFromBackToFront();
	cout << endl;
	list.PrintFromFrontToBack();

	list.IndividualTask();

	cout << "================================" << endl;

	list.PrintFromBackToFront();
	cout << endl;
	list.PrintFromFrontToBack();

	system("pause");
	return 0;
}

void PrintDefaultList(DoublyLinkedList &list)
{
	try
	{
		if (list.empty())
			throw out_of_range("ERROR: Doubly Linked List is empty!");

		DoublyLinkedList temp_list;

		cout << "\nDefault Doubly Linked List:\n ";

		while (!list.empty())
		{
			cout << "\t" << list.back()<<endl;
			temp_list.push_back(list.back());
			list.pop_back();
	
		}

		while (!temp_list.empty())
		{
			list.push_back(temp_list.back());
			temp_list.pop_back();
		}
	}
	catch (const exception& e)
	{
		cout << e.what() << endl;
	}
}
