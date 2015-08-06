ass Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
            
	            int len = nums.size();
		            if(len <= 1) return false;
			            
				    /*        set<int> st;
				            for(int i = 0; i < len; ++i)
					            {
						                if(st.find(nums[i]) != st.end())
								                return true;
										            st.insert(nums[i]);
											            } */
												            
													            sort(nums.begin(), nums.end());
														            for(int i=0; i < len -1; i++)
															            {
																                if(nums[i] == nums[i+1])
																		                return true;
																				        }
																					        return false;
																						    }
																						    };
