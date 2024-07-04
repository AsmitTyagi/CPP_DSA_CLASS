// popp is from front and push is from rear
// queue follows filo

#include <iostream>
#include <queue>

using namespace std;
// class queue
// {
// public:
//     int *arr;
//     int front, rear, size;
//     queue()
//     {
//         arr = new int[size];
//         front = -1;
//         rear = -1;
//     }
//     void push(int val)
//     {
//         if (rear = size - 1)
//         {
//             cout << "queue overs=flow " << endl;
//             return;
//         }
//         rear++;
//         arr[rear] = val;
//         if (front = -1)
//             front++;
//     }
//     void pop()
//     {
//         if (front == -1 || front > rear)
//         {
//             cout << "no element in queue " << endl;
//         }
//         front++;
//     }
// };

int main()
{
 queue<int>myqueue;
 myqueue.push(1);
 myqueue.push(2);
 myqueue.push(3);
 myqueue.push(4);
 myqueue.push(5);
 myqueue.pop();
 }




