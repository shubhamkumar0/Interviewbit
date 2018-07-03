class Solution:
    # @param A : tuple of list of integers
    # @return a list of integers
    def spiralOrder(self, A):
        result=[]
        rows=len(A)
        cols=len(A[0])
        T,B,L,R=0,rows-1,0,cols-1
        dir=0
        while(T<=B & L<=R):
            if(dir==0):
                for i in range(L,R+1) :
                    result.append(A[T][i])
                dir+=1
                T+=1
            if(dir==1):
                for j in range(T,B+1) :
                    result.append(A[j][R])
                dir+=1
                R-=1
            if(dir==2):
                for j in range(R,L-1,-1) :
                    result.append(A[B][j])
                dir+=1
                B-=1        
            if(dir==3):
                for j in range(B,T-1,-1) :
                    result.append(A[j][L])
                dir=0
                L+=1
        return result
