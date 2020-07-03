#pragma once

#include <iostream>
#include <exception>

	class DoublyLinkedList
	{
	public:
		struct Node
		{
			Node() : data(0), next(nullptr), prev(nullptr)
			{}
			Node(float data) : data(data), next(nullptr), prev(nullptr)
			{}
			Node(float data, Node* nextNode) : data(data), next(nextNode), prev(nullptr)
			{}
			Node(float data, Node* nextNode, Node* prevNode) : data(data), next(nextNode), prev(prevNode)
			{}

			float data;

			Node* next;
			Node* prev;
		};

		DoublyLinkedList() : _head(nullptr), _tail(nullptr), _size(0)
		{}

		void push_front(float);
		void push_back(float);
		void pop_front();
		void pop_back();
		float& front();
		float& back();
		int size();
		bool empty();
		void IndividualTask();
		void PrintFromBackToFront();
		void PrintFromFrontToBack();
		
	private:
		Node* _head;
		Node* _tail;

		Node* _max;

		int _size;
	};
