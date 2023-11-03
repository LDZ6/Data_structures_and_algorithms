#include <iostream>
using namespace std;
#define maxsize 1000
#define OK 1
#define OVERFLOW -2
#define ERROR -1

typedef struct ListNode
{
	int data;
	struct ListNode* next;
}listNode,*linkList;

class LinkList {
public:
	LinkList() {
		l = new listNode;
		l->next = NULL;
	}

	int getElem();
	int locateELem();
	int listInsert();
	int listDelete();
private:
	linkList l =NULL;



};

int LinkList::getElem(){
	int p;
	listNode* pointer = l->next;
	int i = 1;
	cout << "请输入查找的位置;" << endl;
	cin >> p;
	for (; pointer && p > i; i++)
	{
		pointer = pointer->next;
	}
	if (!pointer||p<i)
	{
		return ERROR;
	}
	cout << "值为:" <<pointer->data<< endl;
	return pointer->data;
}

int LinkList::locateELem() {
	int val;
	listNode* pointer = l->next;
	int p=1;
	cout << "请输入你想要查找的值:" << endl;
	cin >> val;
	while (pointer->data != val && pointer) {
		pointer = pointer->next;
		p++;
	}
	if (pointer != NULL) {
		cout << "值的位置是:" << p;
		return p;
	}
	return OVERFLOW;
}

int LinkList::listInsert() {
	int  p;
	listNode* pointer=l;
	listNode* node = new listNode;
	int i = 0;
	cout << "请输入你想要插入的位置和值:" << endl;
	cin >> p>>node->data;
	for (; pointer && p > i-1; i++)
		pointer = pointer->next;
	if (!pointer || p < i-1)
	{
		cout << "你输入的值有误" << endl; 
		return ERROR;
	}
	node->next = pointer->next;
	pointer->next = node;
	delete node;
	return OK;
}

int LinkList::listDelete() {
	int p;
	cout << "请输入你想要删除的位置:" << endl;
	cin >> p;
	listNode* deletepointer, *prepointer=l->next;
	for (int i = 1; i < p && prepointer->next  != NULL; i++) {
		prepointer = prepointer->next;
	}
	if (p<1&&prepointer->next==NULL)
	{
		return ERROR;
	}
	deletepointer = prepointer->next;
	prepointer->next = prepointer->next->next;
	delete deletepointer;
	return OK;

}

int LinkList::creatList() {
	listNode* r = l->next;
	int c;
	int i;
	cout << "请输入你想要创建的个数:" << endl;
	cin >> i;
	for (int j = 0; j < i; j++)
	{
		listNode* newNode=new listNode;
		cout << "请输入此节点的值" << endl;
		cin >> newNode->data;
		newNode->next = NULL;
		r->next = newNode;
		r = newNode;
	}
	return OK;

}
