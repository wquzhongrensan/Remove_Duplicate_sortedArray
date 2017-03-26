//
//  main.cpp
//  Remove_Duplicate_At_MostTwice
//
//  Created by ljp on 2017/3/26.
//  Copyright © 2017年 li jianping. All rights reserved.
//

#include <iostream>
#include <vector>

//排序数组中 去除重复元素 这里的重复元素是指最多两个相同 去除多余两个相同的

class Solution{
public:
    int removeDuplicates(std::vector<int>& nums){
        if (nums.size()<=2) {
            return (int)nums.size();
        }
        
        int index = 2;
        for (int i =2; i<nums.size(); i++) {
            if (nums[i] != nums[index-2]) {
                nums[index++] = nums[i];
            }
        }
        return index;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
