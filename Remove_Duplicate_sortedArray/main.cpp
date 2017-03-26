//
//  main.cpp
//  Remove_Duplicate_sortedArray
//
//  Created by ljp on 2017/3/26.
//  Copyright © 2017年 li jianping. All rights reserved.
//

#include <iostream>
#include <vector>

//除去排序数组重复的元素，返回去重后的长度
//不能使用额外的辅助内存空间
class Solution{
public:
    int removeDuplicates(std::vector<int>& nums){
        if (nums.empty()) {
            return 0;
        }
        int index = 1;
        for (int i =1; i<nums.size(); i++) {
            if (nums[i] != nums[index-1]) {
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
