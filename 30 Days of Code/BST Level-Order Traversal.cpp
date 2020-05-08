

	void levelOrder(Node * root){
      //Write your code here
  	queue<Node*>q;
      q.push(root);
      while(!q.empty())
      {
          Node *nd=q.front();
          cout<<nd->data<<" ";
          if(nd->left)
            q.push(nd->left);
          if(nd->right)
            q.push(nd->right);
          q.pop();
      }
  
	}

