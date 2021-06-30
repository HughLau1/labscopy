#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* TODO: Implement ll_has_cycle */
    node *slowPtr = head, *fastPtr = head;
    while(fastPtr && fastPtr -> next){
	slowPtr = slowPtr->next;
	fastPtr = fastPtr -> next -> next;
	if (slowPtr == fastPtr) return 1;
    }
     return 0;  
}
