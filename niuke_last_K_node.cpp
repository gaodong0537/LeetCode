truct ListNode {
    int val;
        struct ListNode *next;
	    ListNode(int x) :
	                val(x), next(NULL) {
			    }
			    };*/
			    class Solution {
			    public:
			        ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
				        if(pListHead == NULL || k == 0) return NULL;
					         
						         ListNode *fast = pListHead;
							         int i = 0;
								         for( ;i < k && fast != NULL; i++)
									             fast = fast->next;
										             if(fast == NULL && i != k )
											                     return NULL;
													             
														              
															              ListNode *slow = pListHead;
																               
																	               while(fast != NULL)
																		                   {
																				               fast = fast->next;
																					                   slow = slow->next;
																							           }
																								            
																									            return slow;
																										        }
																											};
