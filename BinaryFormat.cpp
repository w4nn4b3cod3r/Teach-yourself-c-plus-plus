#include <iostream>
using namespace std;

typedef struct bin {
    int data;
    int binaryFormat[32];
    bin* linkToNextNode;
}binary;

binary* start = nullptr;

binary* makeNode()
{
    binary* newNode;
    newNode = new binary();
    cin >> newNode->data;
    newNode->linkToNextNode = nullptr;
    return newNode;
}

void listRange(int x)
{
    binary* node, * temp;
    for (int i = 0; i < x; i++)
    {
        node = makeNode();
        if (start == nullptr)
            start = node;
        else {
            temp = start;
            while (temp->linkToNextNode != nullptr)
                temp = temp->linkToNextNode;
            temp->linkToNextNode = node;
        }
    }
}

void decimalToBinary()
{
    binary* getData;
    getData = start;
    while (getData != nullptr)
    {
        int k = 0;
        while (getData->data > 0)
        {
            getData->binaryFormat[k] = getData->data % 2;
            getData->data = getData->data / 2;
            k++;
        }
        int sum = 0;
        for (int i = k - 1 ; i >= 0 ; i--) {
            if (getData->binaryFormat[i] == 1) {
                ++sum;
            }
            cout << getData->binaryFormat[i];
        }
        cout << endl << sum << endl;
        getData = getData->linkToNextNode;
        k = 0, sum = 0;
    }
}

int main()
{
    int x;
    std::cin >> x;
    listRange(x);
    decimalToBinary();
}
