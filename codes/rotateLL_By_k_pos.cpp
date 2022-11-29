/*  Problem Statement : Given a singly linked list and 'k' where k is the number of times a linked list hhas to rotate by right(right-shift). Rotate the list by 'k'
                        places to right.

    Examples: 
    1. Input: 10 -> 20 -> 30 -> 40
       x = 1
       Output: 40 -> 10 -> 20 -> 30
    2. Input: 10 -> 25
       x = 2
       Output: 10 -> 25
    3. Input: 1 -> 2 -> 3 -> 4 -> 5
       x = 2
       Output: 5 -> 4 -> 1 -> 2 -> 3 
       
       Time complexity : O(n)
       Space complexity : O(1)
*/
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

  ListNode* rotateRight(ListNode* head, int k) 
  {
        if(!head) return head;
        int len = 1;
        ListNode* newH = head;
        ListNode* tail = head;
        
        while(tail->next)
        {
            tail = tail->next;
            len++;
        }
        
        tail->next = head;
        k %= len;
        for(int i = 0 ; i < len - k ; i++)
            tail = tail->next;
        newH = tail->next;
        tail->next = NULL;
        
        return newH;
  }
