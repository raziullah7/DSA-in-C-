// Doubly LinkedList ADT
#include "DLL.cpp"

int main() {
    DLL<int> myDLL;
    myDLL.Insert(1, 10);
    myDLL.Insert(2, 20);
    myDLL.Insert(3, 30);
    myDLL.Insert(2, 40);
    myDLL.Display();

    int x = 0;
    myDLL.Delete(2, x);
    myDLL.Display();
    return 0;
}