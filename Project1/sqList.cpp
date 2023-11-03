//#include <iostream>
//using namespace std;
//#define maxsize 1000
//#define OK 1
//#define OVERFLOW -2
//#define ERROR -1
//
//class sqList {
//	public:
//		sqList() {
//			elem = new int[maxsize];
//			length = 0;
//		}
//		int getelem();
//		int Location();
//		int cinValues();
//		int listInsert();
//		int OutputList();
//		int ListDelete();
//		int GetMaxValue();
//		int GetMinValue();
//		int ReverseList();
//
//	private:
//		int length;
//		int* elem;
//};
//int sqList::getelem() {
//	int location;
//	cout << "请输入查找的位置" << endl;
//	cin >> location;
//	if (location > maxsize && location <= 0) {
//		return ERROR;
//	}
//	cout << "查找的值是" << elem[location-1]<<endl;
//	return elem[location-1];
//}
//
//int sqList::Location() {
//	int element;
//	cout << "请输入查找的元素" << endl;
//	cin >> element;
//	for (int i = 0; i < length; i++)
//	{
//		if (element == elem[i])
//		{
//			cout << "查找的位置是"<<i+1<<endl;
//			return elem[i];
//		}
//	}
//	return 0;
//}
//
//int sqList::cinValues() {
//	cout << "请输入顺序表元素的个数:" << endl;
//	cin >> length;
//	if (length<0 && length>maxsize)
//		return ERROR;
//	cout << "请输入各个元素的值:";
//	for (int i = 0; i < length; i++)
//	{
//		cin >> elem[i];
//	}
//	return OK;
//}
//
//int sqList::listInsert() {
//	int p;
//	int val;
//	cout << "请输入插入的位置和值" << endl;
//	cin >> p >> val;
//	if (p<1 && p>length+1)
//	{
//		return ERROR;
//	}
//	for (int i = length; i > p-1; i--)
//	{
//		elem[i] = elem[i - 1];
//	}
//	elem[p-1] = val;
//	length++;
//	return OK;
//
//}
//
//int sqList::OutputList()
//{
//	for (int i = 0; i < length; i++)
//	{
//		cout << elem[i]<<" ";
//	}
//	cout << endl;
//	return OK;
//}
//
//int sqList::ListDelete() {
//	int p;
//	cout << "请输入需要删除的位置" << endl;
//	cin >> p;
//	if (p > length && p < 1)
//		return ERROR;
//	for (int i = p; i < length; i++)
//	{
//		elem[i - 1] = elem[i];
//	}
//	length--;
//	return OK;
//}
//
//int sqList::GetMaxValue()
//{
//	int initialValue = elem[0];
//	for (int i = 0; i < length; i++)
//	{
//		if (elem[i] > initialValue)
//			initialValue = elem[i];
//	}
//	cout <<"最大值是"<< initialValue<<endl;
//	return initialValue;
//}
//
//int sqList::GetMinValue()
//{
//	int initialValue = elem[0];
//	for (int i = 0; i < length; i++)
//	{
//		if (elem[i] < initialValue)
//			initialValue = elem[i];
//	}
//	cout << "最小值是" << initialValue << endl;
//	return initialValue;
//}
//
//int sqList::ReverseList()
//{
//	for (int i = 0; i < length / 2; i++)
//	{
//		int p = elem[i];
//		elem[i] = elem[length - i-1];
//		elem[length - i-1] = p;
//	}
//
//	return OK;
//}
//int main()
//{
//	sqList* text = new sqList();
//	text->cinValues();
//	text->OutputList();
//	text->listInsert();
//	text->OutputList();
//	text->ListDelete();
//	text->OutputList();
//	text->getelem();
//	text->GetMaxValue();
//	text->GetMinValue();
//	text->Location();
//	text->ReverseList();
//	text->OutputList();
//	delete text;
//	return 0;
//}