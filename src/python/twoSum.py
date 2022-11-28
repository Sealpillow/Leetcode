class Solution(object):
    def twoSum(self, nums, target):
        set = []
        for i in range(len(nums)):
            for j in range(i, len(nums)):
                if nums[i] + nums[j] == target and i != j:
                    set.append(i)
                    set.append(j)
                    return set
