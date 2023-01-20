#include <iostream>
using namespace std;
class Array
{
private:
    int a[100];
    int size = 0;

public:
    void insert(int index, int value)
    {
        a[index] = value;
        size++;
    }
    int getindex(int index)
    {
        return a[index];
    }
    int getsize()
    {
        return size;
    }
    int search(int index)
    {
        for (int i = 0; i < size; i++)
        {
            if (a[i] == index)
                return i;
        }
        return -1;
    }
    void print()
    {
        for (int i = 0; i < size; i++)
            cout << a[i] << " ";
    }
    void deleteA(int index)
    {
        for (int i = size; i >= index; i--)
        {
            a[i] = a[i + 1];
           
        }
        a[size - 1] =0;
         size--;
    }
    void insertP(int inex, int value)
    {
        for (int i =size-1; i >=value; i--)
        {
            a[i + 1] = a[i];
        }
        a[inex] = value;
        size++;
    }
};
int main()
{
    Array a;
    int n, value, x, index, in, a1,i1;
    cout << "Enter number you want :" << endl;
    cin >> n;
    cout << "Enter " << n << " elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.insert(i, x);
    }
    cout << "Numbers are :" << endl;
    a.print();
    cout << "Enter index of search element:" << endl;
    cin >> index;
    int k = a.search(index);
    if (k != -1)
    cout << "Element found " << k << endl;
    else
    cout << "Element not found :" << endl;
    cout << "Enter index delete" << endl;
    cin >> in;
    a.deleteA(in);
    a.print();
    cout << "Enter index and value you want inset" << endl;
    cin>>a1>>i1;
    a.insertP(i1,a1);
    a.print();
    return 0;
}
