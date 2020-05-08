

      Node* insert(Node *head,int data)
      {
        Node* new_node=new Node(data);

          //Complete this method
        if (head==NULL)
            head=new_node;
        else
        {
            Node* link=head;
        while(link->next!=NULL)
        {
            link=link->next;
        }
        link->next=new_node;
        }
        return head;

      }

