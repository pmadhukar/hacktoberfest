#include<cstdio>
#include<cstdlib>
struct ListNode{
    int data;
    ListNode* next;
};
struct Queue{
    ListNode* front;
    ListNode* rear;
};
void enqueueQUEUE(Queue* &q,int data){
    ListNode* newNode=(ListNode*)malloc(sizeof(ListNode));
    newNode->data=data;
    newNode->next=NULL;
    if(q->front==NULL){
        q->front=newNode;
        q->rear=newNode;
    }else{
        q->rear->next=newNode;
        q->rear=newNode;
    }
    return;
}
void  dequeueQUEUE(Queue* &q){
    if(q->front==NULL){
        printf("Empty Queue");
    }else if(q->front==q->rear){
        ListNode* temp=q->front;
        q->front=NULL;
        q->rear=NULL;
        free(temp);
        return;
    }else{
        ListNode* temp=q->front;
        q->front=q->front->next;
        free(temp);
    }
    return;
}
void printQUEUE(Queue* q){
    ListNode* current=q->front;
    while(current){
        printf("%d ",current->data);
        current=current->next;
    }
    return;
}
