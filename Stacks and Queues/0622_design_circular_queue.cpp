#include <vector>
using namespace std;
class MyCircularQueue { vector<int> a; int head=0,count=0; public: MyCircularQueue(int k):a(k){} bool enQueue(int v){if(isFull())return false;a[(head+count)%a.size()]=v;++count;return true;} bool deQueue(){if(isEmpty())return false;head=(head+1)%a.size();--count;return true;} int Front(){return isEmpty()?-1:a[head];} int Rear(){return isEmpty()?-1:a[(head+count-1)%a.size()];} bool isEmpty(){return count==0;} bool isFull(){return count==a.size();} };
