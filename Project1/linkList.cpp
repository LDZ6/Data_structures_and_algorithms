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
	cout << "��������ҵ�λ��;" << endl;
	cin >> p;
	for (; pointer && p > i; i++)
	{
		pointer = pointer->next;
	}
	if (!pointer||p<i)
	{
		return ERROR;
	}
	cout << "ֵΪ:" <<pointer->data<< endl;
	return pointer->data;
}

int LinkList::locateELem() {
	int val;
	listNode* pointer = l->next;
	int p=1;
	cout << "����������Ҫ���ҵ�ֵ:" << endl;
	cin >> val;
	while (pointer->data != val && pointer) {
		pointer = pointer->next;
		p++;
	}
	if (pointer != NULL) {
		cout << "ֵ��λ����:" << p;
		return p;
	}
	return OVERFLOW;
}

int LinkList::listInsert() {
	int  p;
	listNode* pointer=l;
	listNode* node = new listNode;
	int i = 0;
	cout << "����������Ҫ�����λ�ú�ֵ:" << endl;
	cin >> p>>node->data;
	for (; pointer && p > i-1; i++)
		pointer = pointer->next;
	if (!pointer || p < i-1)
	{
		cout << "�������ֵ����" << endl; 
		return ERROR;
	}
	node->next = pointer->next;
	pointer->next = node;
	delete node;
	return OK;
}

int LinkList::listDelete() {
	int p;
	cout << "����������Ҫɾ����λ��:" << endl;
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
