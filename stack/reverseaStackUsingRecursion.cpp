
void insertAtBottom(stack <int> &s,int n) {
    if(s.empty())
    {
s.push(n);
        return ;
    }
    
    int num = s.top();
    s.pop();
    
    insertAtBottom(s,n);
    
    s.push(num);
}





void reverseStack(stack<int> &stack) {
    // Write your code here
    if(stack.empty() ) {
        return ;
    }
    
    int num = stack.top();
    stack.pop();
    
    
    reverseStack(stack);
    
    insertAtBottom(stack,num);


}