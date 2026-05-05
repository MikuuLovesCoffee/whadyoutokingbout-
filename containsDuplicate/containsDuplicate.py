class Solution(object):
    def containsDuplicate(self, nums):
        hashset = set()

        for n in nums:
            if n in hashset:
                return True
            hashset.add(n)
        
        return False

# under the hood set is real set, meaning lookups, inserting, deleting are all O(1) 
# O(n) for the loop, O(1) for the set, so O(n) overall 
# O(n) space for the set, in the worst case all numbers are unique, so O(n) overall
#        