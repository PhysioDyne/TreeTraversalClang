#include<stdio.h>
#include<stdlib.h>

struct Node {
	int val;
	struct Node * right;
	struct Node * left;
};

struct Node * node;
struct Node * head;
struct Node * queue[256];
int nodeCount = 0;

bool insert(int number){
	if(head == NULL){
		head = (struct Node*)malloc(sizeof(struct Node));
		head -> val = number;
		head -> right = NULL;
		head -> left = NULL;
		node = head;
		nodeCount +=1;
		return true;
	}
	while(true){
		if (node -> val == number){
			return false;
		}
		if (node -> val > number){
			if (node -> right == NULL){
				node -> right = (struct Node*)malloc(sizeof(Node));
				node -> right -> val = number;
				node -> right -> right = NULL;
				node -> right -> left = NULL;	
				node = head;
				nodeCount+=1;
				return true;
			}
			else{
				node = node -> right;
			}
		}
		if (node -> val < number){
			if (node -> left == NULL){
				node -> left = (struct Node*)malloc(sizeof(Node));
				node -> left -> val = number;
				node -> left -> right = NULL;
				node -> left -> left = NULL;	
				node = head;
				nodeCount+=1;
				return true;
			}
			else{
				node = node -> left;
			}
		}
	}
}

bool contains (int number){
	while (node != NULL){
		if (node -> val > number){
			node = node -> right;
		}
		else if (node -> val < number){
			node = node -> left;
		}
		else{
			return true;
		}
	}
	node = head;
	return false;
}

int minOfNode(){
	struct Node * temp;
	temp = node;
	while(temp -> right != NULL){
		temp = temp -> right;
	}
	node = head;
	return temp -> val;
}
int maxOfNode(){
	struct Node * temp;
	temp = node;
	while(temp -> left != NULL){
		temp = temp -> left;
	}
	node = head;
	return temp -> val;
}

int DFSPreOrder(struct Node * node){
	struct Node * temp;
	temp = node;
	if (node == NULL){
		return 0;
	}
	printf("%d ",temp-> val);
	DFSPreOrder(temp -> left);
	DFSPreOrder(temp -> right);
	return 0;
}
int DFSInOrder(struct Node * node){
	struct Node * temp;
	temp = node;
	if (node == NULL){
		return 0;
	}
	DFSInOrder(temp -> left);
	printf("%d ",temp-> val);
	DFSInOrder(temp -> right);
	return 0;
};
int DFSPostOrder(struct Node * node){
		struct Node * temp;
	temp = node;
	if (node == NULL){
		return 0;
	}
	DFSPostOrder(temp -> left);	
	DFSPostOrder(temp -> right);
	printf("%d ",temp-> val);
	return 0;
};

void BFS(){
	int counter = 0;
	int counter2 = 0;
	struct Node * currentNode;
	struct Node * queue[256];	
	int nodeList[256];
	queue[counter] = node;
	while(counter2 != nodeCount){
		currentNode = queue[counter2];
		nodeList[counter] = currentNode -> val;
		printf("%d ",nodeList[counter]);
		if(currentNode -> left != NULL){
			counter += 1;
			queue[counter] = currentNode -> left;
		}
		if(currentNode -> right != NULL){
			counter +=1;	
			queue[counter] = currentNode -> right;
		}
		counter2 += 1;
	}
}

int main(){
	insert(5);insert(3);insert(7);insert(8);insert(2);insert(4);insert(1);insert(9);insert(6);insert(10);
	printf("Tree is containing the %s\n",(contains(3)==1)?"TRUE":"FALSE");
	printf("Minumum value of the Tree: %d\n",minOfNode());
	printf("Maximum value of the Tree: %d\n",maxOfNode());
	printf("Depth First Search Pre Order: ");
	DFSPreOrder(node);
	printf("\n");
	printf("Depth First Search Post Order: ");
	DFSPostOrder(node);
	printf("\n");
	printf("Depth First Search In Order: ");
	DFSInOrder(node);
	printf("\n");
	printf("Breadth First Search: ");
	BFS();


return 0;	
 }
