#include "DoublyLinkedList.h"

using namespace std;

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
	try
	{
		if (list.empty())
			throw out_of_range("Doubly Linked List is empty!");

		cout << "\nDefault Doubly Linked List:\n ";

		list.PrintFromBackToFront();
		cout << endl;

		cout << "================================" << endl;

		list.IndividualTask();

		cout << "\nChanged Doubly Linked List from back to front:\n ";

		list.PrintFromBackToFront();
		cout << endl;

		cout << "================================" << endl;

		cout << "\nChanged Doubly Linked List from front to back:\n ";

		list.PrintFromFrontToBack();

		cout << endl;
	}
	catch (const out_of_range&e)
	{
		cout << e.what() << endl;
	}
	
	system("pause");
	return 0;
}