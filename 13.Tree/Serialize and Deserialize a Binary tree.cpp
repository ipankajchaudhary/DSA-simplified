  string s = "";
    int i = 1;
    void helper1(TreeNode* root){
         if(root == NULL){
            s+='(';
            s+='$';
            s+=')';
            return;
        }
        s+='(';
        s+=to_string(root->val);
        s+=')';
        helper1(root->left);
        helper1(root->right);
    }
    string findval(string data, int &i){
        string res = "";
        for(int j = i;data[j]!=')';j++){
            res+=data[j];
            i++;
        }
        i+=2;
        return res;
    }
    TreeNode *helper2(string data){
        if(i == data.length()) return NULL;
        string st = "";
        st = findval(data,i);
        if(st == "$") return NULL;
        cout<<st<<" "<<endl;
        TreeNode *root = new TreeNode(stoi(st));
        root->left = helper2(data);
        root->right = helper2(data);
        return root;
    }
   
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        helper1(root);
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        return helper2(data);
    }