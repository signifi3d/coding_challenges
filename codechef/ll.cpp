#include <iostream>

class MyLinkedList {
public:
    /** Initialize your data structure here. */
        struct Node {
	        Node* next;
		        int val;
			    };
			        MyLinkedList() {
				        head = NULL;
					    }
					        
						    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
						        int get(int index) {
							        if ( head == NULL ) return -1;
								        Node* curr = head;
									        for (int i = 0; i < index; i++) {
										            if (curr == NULL || curr->next == NULL) return -1;
											                curr = curr->next;
													        }
														       std::cout<<curr<<" ";
															        return curr->val;
																    }
																        
																	    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
																	        void addAtHead(int val) {
																		        Node* holder = new Node();
																			        holder->val = val;
																				        if (head == NULL) holder->next = NULL;
																					        else holder->next = head;
																						        head = holder;
																							        
																								        return;
																									    }
																									        
																										    /** Append a node of value val to the last element of the linked list. */
																										        void addAtTail(int val) {
																											        Node* curr = head;
																												        while ( curr->next != NULL ) {
																													            curr = curr->next;
																														            }
																															            curr->next = new Node();
																																            curr->next->val = val;
																																	            curr->next->next = NULL;
																																		            
																																			            return;
																																				        }
																																					    
																																					        /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
																																						    void addAtIndex(int index, int val) {
																																						            if ( index == 0 ) this->addAtHead(val);
																																							            Node* curr = head;
																																								            Node* holder = new Node();
																																									            holder->val = val;
																																										            for (int i = 0; i < index-1; i++) {
																																											                if ( curr == NULL ) return;
																																													            curr = curr->next;
																																														            }
																																															            if (curr == NULL) return;
																																																            holder->next = curr->next;
																																																	            curr->next = holder;
																																																		        }
																																																			    
																																																			        /** Delete the index-th node in the linked list, if the index is valid. */
																																																				    void deleteAtIndex(int index) {
																																																				            if ( index == 0 ) {
																																																					                head = head->next;
																																																							            return;
																																																								            }
																																																									            Node* curr = head;
																																																										            for (int i = 0; i < index-1; i++) {
																																																											                curr = curr->next;   
																																																													        }
																																																														        if (curr->next == NULL) return;
																																																															        curr->next = curr->next->next;
																																																																        return;
																																																																	    }
																																																																	        private:
																																																																		    Node* head;
																																																																		    };


int main() {
	MyLinkedList *list = new MyLinkedList();
	std::cout << list->get(0)<<std::endl;
	list->addAtIndex(1,2);
	std::cout << list->get(0)<<std::endl;
	std::cout << list->get(1)<<std::endl;
	list->addAtIndex(0,1);
	std::cout << list->get(0)<<std::endl;
	std::cout << list->get(1)<<std::endl;

	return 0;
}
