// NOTE:- Isme naa 2 conditions bohot important hain
// 1st --> queue kab full hoga uski condition and
// 2nd --> queue khali kab hoga sirf 1 condition hai uski jab (front==-1)
// Coding ninja question hai

#include <bits/stdc++.h> 
class CircularQueue{

    int size;
    int *arr;
    int fr;
    int rear;

    public:
    // Initialize your data structure.
    CircularQueue(int n){
        // Write your code here.
        size = n;
        arr = new int[n];
        fr = rear = -1; 
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        // Write your code here.
        // check the condition of full queue
        

        if((fr==0 && rear==size-1) || (rear == (fr-1)%(size-1))){
            return false;
        }
        else{
            
            // 1st element aaya hai
            if(fr == -1){
                fr = rear = 0;
                arr[rear] = value;
            }

            // agar last me element aaya means circular bana ke aage laga do us element ko
            else if(rear == size-1 && fr!=0){
                rear = 0;
                arr[rear] = value;
            }
            // ya to normal beach me aaya hai element
            else{
                rear++;
                arr[rear] = value;
            }
        }
        return true;
    } 

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        // condition of empty queue
        int ans = arr[fr];
        if(fr == -1){
            return -1;
        }
        else{
            if(fr == rear){
                // sirf 1 element hai queue me
                fr = rear = -1;
            }
            // agar hamara ye fr last me hai to circular bana ke use 1st position par laa do
            else if(fr == size-1){
                fr = 0;
            }
            // normal case me simply fr ko aage badha do
            else{
                fr++;
            }
        }
        return ans;
    }
};
