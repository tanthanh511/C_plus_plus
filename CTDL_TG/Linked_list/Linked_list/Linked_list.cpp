// ưu điểm:
//+ dữ liệu động có thể thêm và xóa phần tử, không như phần tử mảng
//+ linh hoạt hơn mảng
// nhước điểm:
//+ hoạt động tuần tự tại vì không biết được phần tử đầu tiên sẽ không có địa chỉ thứ 2 
//+ tốn 1 bộ nhớ để lưu trữ địa chỉ con trỏ 
//+ tốc độ chậm hơn 

#include <iostream>
using namespace std;

struct Node
{
	string data;
	Node *next;
};
int main()
{
	Node *first = new Node();
	first->data= "Huynh";
	first->next = NULL;
	Node *second = new Node();
	second->data = "Tan";
	second->next = NULL;
	Node *third = new Node();
	third->data = "Thanh";
	third->next = NULL;

	// liên kết các phần tử 
	first->next = second;
	second->next = third;

	// truy cập 
	string data = second->data;
	cout << data << endl;
	Node *p = first;
	while ( p != NULL) {
		data = p->data;
		p = p->next;
		cout << data << "->";
	}
	cout << endl;
}

