#pragma once

#include "Node.h"
#include "CreditCard.h"
#include "CostHistory.h"
#include <stdexcept>

template<typename T>
class MyQueue
{
private:
	Node<T>* head;
	Node<T>* last;
	size_t size;
public:
	MyQueue() : head(nullptr), last(nullptr), size(0) {}
	MyQueue(Node<T>* first) : head(first), last(first), size(1) {}
	void AddToEnd(Node<T> newNode) {
		Node<T>* myNewNode = new Node<T>(newNode);
		if (size == 0) {
			head = myNewNode;
			last = myNewNode;
		}
		else {
			Node<T>* temp = last;
			last->SetNext(myNewNode);
			last = myNewNode;
			last->SetPrev(temp);
			last->SetNext(nullptr);
		}
		size++;
	}
	T GetValue(size_t const index) {
		if (index < 0 || index >= size) {
			throw std::runtime_error("index out of the range");
		}
		Node<T>* temp = head;
		for (size_t i = 0; i < index; i++)
		{
			temp = temp->GetNext();
		}
		return temp->GetValue();
	}
	size_t GetSize() {
		return size;
	}
	~MyQueue() {
		while (head != nullptr) {
			Node* temp = head;
			head = head->GetNext();
			delete temp;
		}
		delete last;
	}
};

