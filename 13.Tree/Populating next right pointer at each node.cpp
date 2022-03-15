Node* connect(Node* root) {
        if(!root) return NULL;
        queue<Node *>q;
        q.push(root);
        while(!q.empty()){
            int x = q.size();
            vector<Node *>v;
            for(int i = 0;i<x;i++){
                Node *curr = q.front();
                q.pop();
                cout<<curr->val<<" ";
                v.push_back(curr);
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            for(int i = 0;i<v.size()-1;i++){
                v[i]->next = v[i+1];
            }
        }
        return root;
    }
