#include <iostream>
#include "Linkedlist.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	LinkedList LK;
	
	LK.insertToHead(30);
	LK.insertToHead(50);
	LK.insertToTail(89);
	LK.deleteFromTail();
	
	LK.deleteByValue(50);
	LK.printAll();
	
	return 0;
}