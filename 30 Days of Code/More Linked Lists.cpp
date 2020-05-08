

          Node* removeDuplicates(Node *head)
          {
            //Write your code here
            Node* ptr=head;
            while(ptr->next)
            {
                if(ptr->data==ptr->next->data)
                    ptr->next=ptr->next->next;
                else
                    ptr=ptr->next;
            }
            return head;
          }

