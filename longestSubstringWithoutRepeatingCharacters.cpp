class Solution {
public:
    int lengthOfLongestSubstring(string str) {
    if(str==""){
        return 0;
    }
    if(str==" "){
        return 1;
    }
        
    int n = str.size(); 
    int cur_len = 1; 
    int max_len = 1; 
    int prev_index; 
      
    int* visited = new int[sizeof(int) * 256]; 
  
 
    for (int i = 0; i < 256; i++) 
        visited[i] = -1; 

    visited[str[0]] = 0; 
  

    for (int i = 1; i < n; i++) { 
        prev_index = visited[str[i]]; 
  
        if (prev_index == -1 || i - cur_len > prev_index) 
            cur_len++; 
  
  
        else { 
       
            if (cur_len > max_len) 
                max_len = cur_len; 
  
            cur_len = i - prev_index; 
        } 
  
 
        visited[str[i]] = i; 
    } 
  
 
    if (cur_len > max_len) 
        max_len = cur_len; 
  
   
    return max_len;
        
    }
};
