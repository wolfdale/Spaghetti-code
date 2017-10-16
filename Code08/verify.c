#include<stdio.h>
#include<stdlib.h>

struct node{
	int item;
	struct node *left;
	struct node *right;
};
struct node* build_node(int data){
	struct node *new_node = (struct node*)malloc(sizeof(struct node));
	new_node->item = data;
	new_node->left = NULL;
	new_node->right = NULL;
	return new_node;
}
int findMinValSubtree(struct node* ref){
	while(ref->left !=NULL){
		ref = ref->left;
	}
	return ref -> item;
}
int getinoredersucc(struct node *root, struct node* innode){
	if(innode->right != NULL){
		return findMinValSubtree(innode->right);
	}
	else{
		struct node* succ = NULL;
		while(root!=NULL){
			if(innode->item > root->item){
				root = root->right;
			}
			else if(innode->item < root->item){
				succ = root;
				root = root->left;
				
			}
			else{
				break;
			}
		}
		if(succ !=NULL){
		return succ->item;
		}
		else{
			return 0;
		}
	}
}
void findminmax(struct node* root,int *min,int *max,int hd){
	if(root==NULL){
		return;
	}
	if(hd<*min){
		*min=hd;
	}
	else if(*max<hd){
		*max = hd;
	}
	findminmax(root->left,min,max,hd-1);
	findminmax(root->left,min,max,hd+1);
}
void printer(struct node*root,int line,int hd){
	printf("--\n");
	if(root==NULL){
		
		return;
	}
	if(hd==line){
		printf("%d ",root->item);
	}
	printer(root->left,line,hd-1);
	printer(root->right,line,hd+1);
	printf("\n");
}
void printvertical(struct node* root){
	int min=0,max=0;
	int line=0;
	findminmax(root, &max, &min,0);
	printf("%d %d",min,max);
	for(line=min;line<=max;line++){
		printf("line %d",line);
		printer(root,line,0);
	}
	printf("exit");
}

int main(){
	struct node* root = build_node(80);
	root->left = build_node(50);
	root->right = build_node(100);
	root->left->left = build_node(40);
	root->left->right = build_node(55);
	root->right->left = build_node(90);
	root->right->right = build_node(110);
	root->right->right->left = build_node(105);
	struct node* innode = root->right->right->left;
	printf("%d\n",getinoredersucc(root,innode));
	printvertical(root);
	
}
