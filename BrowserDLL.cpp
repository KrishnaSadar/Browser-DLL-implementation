#include "bits/stdc++.h"
using namespace std;
class Node{
 public:
 string data;
 Node* next;
 Node* back;
 public:
 Node(string data1,Node* next1,Node* back1){
    data=data1;
    next=next1;
    back=back1;
 }
 Node(string data1){
    data=data1;
    next=nullptr;
    back=nullptr;
 }

};
class Browser{
     Node* currentPage;
     public:
    Browser(string &homepage){
        currentPage=new Node(homepage);
    }
    void visit(string &url){
        Node* newNode=new Node(url);
          newNode->back=currentPage;
           currentPage->next=newNode;
           currentPage=newNode;}
    void back(int steps){
            while(steps>0){
                if(currentPage->back) currentPage=currentPage->back;
                else{break;}
                steps--;}}
    void forward(int steps){
        while(steps>0){
            if(currentPage->next) currentPage=currentPage->next;
            else{ break;}
            steps--;
        }
    }
};
