bool isCircular(Node *head)
{
   Node *curr = head;
   while(true)
   {
       curr = curr->next;
       if(curr == head)
       {
           return true;
       }
       if(curr == NULL)
       {
           return false;
       }
   }
}