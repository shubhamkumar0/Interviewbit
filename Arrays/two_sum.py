def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        d={}
        k=-1
        for i in nums:
            k=k+1
            
            diff=target-i
            if(d.get(diff)!=None):
                
                return [d.get(diff),k]
            
            d.update({i:k})    
