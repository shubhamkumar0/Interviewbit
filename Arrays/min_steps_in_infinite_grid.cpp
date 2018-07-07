int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int step=0;
    //int C=[][];
    for ( int i=0; i < A.size()-1; i++ )
    {
        if (abs(A[i+1]-A[i])==1 && abs(B[i+1]-B[i])==1 )
        {
            step+=1;
        }
        else if (abs(A[i+1]-A[i])==1 || abs(B[i+1]-B[i])==1 ){
            //x diff >1
            if (abs(A[i+1]-A[i])>1 ){
                step+=abs(A[i+1]-A[i]);
            }
            //y diff >1
            if(abs(B[i+1]-B[i])>1){
                step+=abs(B[i+1]-B[i]);
            } 
            
        }    
            //x and y both diff >1
        else if(abs(A[i+1]-A[i])>1 && abs(B[i+1]-B[i])>1){
                if(abs(A[i+1]-A[i]) < abs(B[i+1]-B[i])){
                    step+=abs(A[i+1]-A[i]);
                    step+=(abs(B[i+1]-B[i]) - abs(A[i+1]-A[i]));
                }
                else if (abs(A[i+1]-A[i]) > abs(B[i+1]-B[i])){
                    step+=abs(B[i+1]-B[i]);
                    step+=(abs(A[i+1]-A[i]) - abs(B[i+1]-B[i]));
                }
                else if (abs(A[i+1]-A[i]) == abs(B[i+1]-B[i])){
                    step+=abs(B[i+1]-B[i]);
                }
        }
        
        
        
    }
    return step;
    
  //https://www.interviewbit.com/problems/min-steps-in-infinite-grid/  
    
    
}
