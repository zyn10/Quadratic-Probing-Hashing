#include<iostream>
using namespace std;
class LinearHashing {
int* arr;
int size;
public:
LinearHashing(int s)
{
size = s;
arr = new int[size];
for (int i = 0; i < size; i++)
arr[i] = -1;
}
void Insert(int d)
{
if (arr[d] == -1)
{
arr[d] = d;
return;
}
else
for (int i = 1; i < size; i++)
{
if (arr[(d + i*i) % size] == -1)
{
arr[(d + i*i) % size] = d;
return;
}
}
cout << " Array Is Full (OverFlow) " << endl;
return;
}
bool Search(int d)
{
if (arr[d] == d)
return true;
else
for (int i = 1; i < size; i++)
{
if (arr[(d + i*i) % size] == d)
{
return true;
}
}
return false;
}
void Show()
{
for (int i = 0; i < size; i++)
cout << arr[i] << " ";
}
};
int main()
{
int size, ch, num;
cout << " Enter Size of Array : "; cin >> size;
LinearHashing obj(size);
while (1)
{
cout << " Press -1 For Data Enter \n";
cout << " Press -2 For Searching Data \n";
cout << " Press -3 For Show Hash Table \n";
cout << " Press -0 For Exit \n";
cin >> ch;
if (ch == 1)
{
cout << " Enter Data : "; cin >> num;
obj.Insert(num);
system("pause");
}
if (ch == 2)
{
int key;
cout << " Enter Nuber That You Want Found : "; cin >> key;
if (obj.Search(key) == true)
cout << " Number Found " << endl;
else
cout << " Not Found " << endl;
system("pause"); }
if (ch == 3) {
obj.Show();
system("pause"); }
if (ch == 0)
break;
system("CLS"); } }
