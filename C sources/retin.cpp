#include <iostream>
using namespace std;

const int MAXSIZE = 10;  // 循环队列的最大容量

template <typename T>
class CircularQueue {
public:
    CircularQueue(): front(0), rear(0) {}
    ~CircularQueue() {}

    // 判断队列是否为空
    bool isEmpty() {
        return front == rear;
    }

    // 判断队列是否已满
    bool isFull() {
        return (rear+1) % MAXSIZE == front;
    }

    // 入队操作
    bool enqueue(T val) {
        if (isFull()) {
            cout << "The queue is full." << endl;
            return false;
        }
        data[rear] = val;
        rear = (rear+1) % MAXSIZE;
        return true;
    }

    // 出队操作
    bool dequeue(T &val) {
        if (isEmpty()) {
            cout << "The queue is empty." << endl;
            return false;
        }
        val = data[front];
        front = (front+1) % MAXSIZE;
        return true;
    }

    // 获取队首元素
    bool getFront(T &val) {
        if (isEmpty()) {
            cout << "The queue is empty." << endl;
            return false;
        }
        val = data[front];
        return true;
    }

    // 获取队尾元素
    bool getRear(T &val) {
        if (isEmpty()) {
            cout << "The queue is empty." << endl;
            return false;
        }
        int rear_pos = (rear-1+MAXSIZE) % MAXSIZE;
        val = data[rear_pos];
        return true;
    }

    // 获取队列长度
    int getLength() {
        return (rear-front+MAXSIZE) % MAXSIZE;
    }

    // 打印队列元素
    void printQueue() {
        if (isEmpty()) {
            cout << "The queue is empty." << endl;
            return;
        }
        int i = front;
        while (i != rear) {
            cout << data[i] << " ";
            i = (i+1) % MAXSIZE;
        }
        cout << endl;
    }

private:
    T data[MAXSIZE];
    int front;   // 队首指针
    int rear;    // 队尾指针
};

int main() {
    CircularQueue<int> q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.printQueue();  // 输出：1 2 3
    int val;
    q.dequeue(val);
    q.printQueue();  // 输出：2 3
    q.enqueue(4);
    q.printQueue();  // 输出：2 3 4
    q.getFront(val);
    cout << val << endl;  // 输出：2
    q.getRear(val);
    cout << val << endl;  // 输出：4
    cout << q.getLength() << endl;  // 输出：3
    return 0;
}
