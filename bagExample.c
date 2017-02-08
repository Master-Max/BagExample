/* Apparently a Linked List */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int a;
main(){
	while(1){
		menu();
	}
}
menu(){
	printf("==VirtuMaxBag Menu==\n
		1 - Displays list size\n
		2 - Checks if list is full\n
		3 - Checks if list is empty\n
		4 - Add item to list\n
		5 - Remove item from list\n
		6 - Display all list items\n
		7 - Count number of dupilcate items\n
		8 - Display occurrences of specific item\n
		9 - Check if list contains item\n
		10 - Convert list to array\n
		11 - Display first and last items\n
		12 - Initilize list with Dog Cat Fish Rabbit Cow\n
		13 - Remove second element of list\n
		0 - Quit\n");

	scanf("%d", &a);

	if(a==1){
		printf("[1]Counting Items\n");
	}else if(a==2){
		printf("[2]Checking If Full\n");
	}else if (a==3){
		printf("[3]Checking If Empty\n");
	}else if (a==4){
		printf("[4]Adding New Item\n");
	}else if (a==5){
		printf("[5]Removing Item\n");
	}else if (a==6){
		printf("[6]Displaying Full List\n");
	}else if (a==7){
		printf("[7]Counting Duplicates\n");
	}else if (a==8){
		printf("[8]Counting Occurrences\n");
	}else if (a==9){
		printf("[9]Checking If List Contains\n");
	}else if (a==10){
		printf("[10]Converting To Array\n");
	}else if (a==11){
		printf("[11]Displaying First And Last Items\n");
	}else if (a==12){
		printf("[12]Initializing With Set Items\n");
	}else if (a==13){
		printf("[13]Removeing Second Element\n");
	}else if (a==0){
		printf("Ending Program\n");
		exit(0);
	}else{
		printf("Err: menu fuction not found\n");
	}
	return 0;
}
/*NODE Fuction*/
struct node(){
	int data;
	int key;
	struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

int getSize(){/*1 on menu*/

}
void isFull(){/*2 on menu*/

}
void isEmpty(){/*3 on menu*/

}
void add(){/*4 on menu*/

}
void remove(){/*5 on menu*/

}
void printList(){/*6 on menu*/

}
int getDoubles(){/*7 on menu*/

}
int getOccurrences(){/*8 on menu*/

}
void check(){/*9 on menu*/

}
void convertToArray(){/*10 on menu*/

}
void firstAndLast(){/*11 on menu*/

}
void initilizeWith(){/*12 on menu*/

}
struct node* removeSecond(){/*13 on menu*/

}
