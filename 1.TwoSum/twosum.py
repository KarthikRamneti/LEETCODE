class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        a = dict()
        for i in range(len(nums)):
            try:
                x = a[target-nums[i]]
                return [x,i]
            except KeyError:
                a[nums[i]]=i
        return [-1,-1]
