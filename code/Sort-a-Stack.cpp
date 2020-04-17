void SortedStack :: sort()
{
   //Your code here
   priority_queue<int, vector<int>, greater<int> > pq;
   int n = s.size();
   while(s.size()!=0)
   {
       int k = s.top();
       s.pop();
       pq.push(k);
   }
   for(int i=0;i<n;i++)
   {
       int k = pq.top();
       pq.pop();
       s.push(k);
   }
   
   
