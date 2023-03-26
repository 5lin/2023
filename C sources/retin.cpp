#include <iostream>
using namespace std;

const int MAXSIZE = 10;  // ѭ�����е��������

template <typename T>
class CircularQueue {
public:
    CircularQueue(): front(0), rear(0) {}
    ~CircularQueue() {}

    // �ж϶����Ƿ�Ϊ��
    bool isEmpty() {
        return front == rear;
    }

    // �ж϶����Ƿ�����
    bool isFull() {
        return (rear+1) % MAXSIZE == front;
    }

    // ��Ӳ���
    bool enqueue(T val) {
        if (isFull()) {
            cout << "The queue is full." << endl;
            return false;
        }
        data[rear] = val;
        rear = (rear+1) % MAXSIZE;
        return true;
    }

    // ���Ӳ���
    bool dequeue(T &val) {
        if (isEmpty()) {
            cout << "The queue is empty." << endl;
            return false;
        }
        val = data[front];
        front = (front+1) % MAXSIZE;
        return true;
    }

    // ��ȡ����Ԫ��
    bool getFront(T &val) {
        if (isEmpty()) {
            cout << "The queue is empty." << endl;
            return false;
        }
        val = data[front];
        return true;
    }

    // ��ȡ��βԪ��
    bool getRear(T &val) {
        if (isEmpty()) {
            cout << "The queue is empty." << endl;
            return false;
        }
        int rear_pos = (rear-1+MAXSIZE) % MAXSIZE;
        val = data[rear_pos];
        return true;
    }

    // ��ȡ���г���
    int getLength() {
        return (rear-front+MAXSIZE) % MAXSIZE;
    }

    // ��ӡ����Ԫ��
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
    int front;   // ����ָ��
    int rear;    // ��βָ��
};

int main() {
    CircularQueue<int> q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.printQueue();  // �����1 2 3
    int val;
    q.dequeue(val);
    q.printQueue();  // �����2 3
    q.enqueue(4);
    q.printQueue();  // �����2 3 4
    q.getFront(val);
    cout << val << endl;  // �����2
    q.getRear(val);
    cout << val << endl;  // �����4
    cout << q.getLength() << endl;  // �����3
    return 0;
}
