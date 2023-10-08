

#include <iostream>
using namespace std;
int current_size = -1;
const int MAX_SIZE = 100;
int stack[MAX_SIZE];

// kiểm tra rỗng hay k 
bool isEmpty() {
	return (current_size == -1);
}
// hàm đầy chưa 
bool isFull() {
	return (current_size == MAX_SIZE);
}


void push(int data) {
	if (!isFull()) {
		current_size++;
		stack[current_size] = data;
	}
	else
	{
		cout << " error: data is full" << endl;
	}
}

// lấy phần tử top nhưng k xóa
int top() {
	if (!isEmpty()) {
		int data = stack[current_size];
		return data;
	}
	else
	{
		cout << " Ham rong" << endl;
	}
}
// laasy phần tử top và xóa 
int pop() {
	if (!isEmpty()) {
		int data = stack[current_size];
		current_size--;
		return data;
	}
	else
	{
		cout << " Ham rong"<< endl;
	}
}

int main()
{
	push(1000);
	push(100);
	push(10);

	cout << "Top: " << top() << endl;
	pop();
	cout << "Top: " << top() << endl;
	while (!isEmpty()) {
		int data = pop();
		cout << data << "<--";
	}
	cout << endl;
	return 0;
}

