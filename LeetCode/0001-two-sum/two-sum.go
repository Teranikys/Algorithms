package main

func twoSum(nums []int, target int) []int {
	numsMap := make(map[int]int)

	for i, v := range nums {
		if ind, ok := numsMap[target-v]; ok {
			return []int{ind, i}
		}
		numsMap[v] = i
	}

	return nil
}
