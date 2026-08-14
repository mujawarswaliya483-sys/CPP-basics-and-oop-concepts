#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node *next;
};

int main(){
	struct Node *head;
	struct Node *second;
	struct Node *third;
	struct Node *fourth;

	head = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));
	fourth = (struct Node*)malloc(sizeof(struct Node));

	head->data=10;
	head->next=second;

	second->data=20;
	second->next=third;

	third->data=30;
	third->next=fourth;

	fourth->data=40;
	fourth->next=NULL;

	int target = 30;
	int found =0;

	struct Node *temp =head;

	while(temp!=NULL){

	 if(temp->data==target){
	 	found = 1;
	 	break;
	 }
	 temp = temp->next;
	}
	if(found == 1){
	   cout<<"element found\n";		
	}else{
		cout<<"element not found\n";
	}
	return 0;
}