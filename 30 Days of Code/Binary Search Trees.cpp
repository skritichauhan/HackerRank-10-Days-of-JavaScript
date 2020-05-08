

		int getHeight(Node* root){
          //Write your code here
          if(root==NULL)
            return -1;
        else
        {
            return(max(getHeight(root->left)+1,getHeight(root->right)+1));
        }
        }

