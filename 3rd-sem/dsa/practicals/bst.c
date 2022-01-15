#include <stdio.h>
#include <stdlib.h>

struct BstNode {
    int data;
    struct BstNode* left;
    struct BstNode* right;
};

struct BstNode* GetNewNode(int data){
    struct BstNode* newNode = (struct BstNode*)malloc(sizeof(struct BstNode));
    (*newNode).data = data;
    (*newNode).left = (*newNode).right = NULL;
    return newNode;

}
struct BstNode* Insert(struct BstNode* rootPtr, int data){
    if(rootPtr == NULL){
        rootPtr = GetNewNode(data);
    }
    else if(data <= rootPtr->data) {
        rootPtr->left = Insert(rootPtr->left, data);
    }
    else {
        rootPtr->right = Insert(rootPtr->right, data);
    }
    return rootPtr;
}
int Search(struct BstNode* rootPtr, int data) {
    if(rootPtr == NULL) {
        return 0;
    }
    else if(rootPtr->data == data) {
        return 1;
    }
    else if(data <= rootPtr->data) {
        return Search(rootPtr->left, data);
    }
    else {
        return Search(rootPtr->right, data);
    }
}
int main(void){
    struct BstNode* rootPtr;
    rootPtr = NULL;
    rootPtr = Insert(rootPtr, 15);
    rootPtr = Insert(rootPtr, 01);
    rootPtr = Insert(rootPtr, 10);
    rootPtr = Insert(rootPtr, 20);
    rootPtr = Insert(rootPtr, 05);
    rootPtr = Insert(rootPtr, 30);
    rootPtr = Insert(rootPtr, 25);
    int n;
    printf("Enter number to be searched: ");
    scanf("%d",&n);
    if(Search(rootPtr, n) == 1) {
        printf("\nElement Found.\n");
    }
    else {
        printf("\nElement Not Found.\n");
    }
    return 0;
}
