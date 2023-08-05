class Solution {
    public int majorityElement(int[] nums) {
        int n=nums.length;
        HashMap<Integer,Integer>mp=new HashMap<>();
        for(int i:nums)
        {
            if(mp.containsKey(i))
            {
                mp.put(i,mp.get(i)+1);
            }
            else{
                 mp.put(i,1);
            }
          
          for(int key:mp.keySet())
          {
              if(mp.get(key)>nums.length/2)
                  return key;
          }
        }
        return -1;
    }
}