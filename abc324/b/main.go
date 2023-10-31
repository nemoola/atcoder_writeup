package main

import (
	"fmt"
	"math"
)

func main() {
	var n int
	var flag bool = false
	fmt.Scanf("%d", &n)

	for i := range make([]struct{}, n) {
		for j := 0; j < n; j++ {
			resolv := int(math.Pow(2, float64(i))) * int(math.Pow(3, float64(j)))
			if resolv == n {
				flag = true
				break
			}
			fmt.Printf("x: %d, y: %d resolv: %d\n", i, j, resolv)
		}
		if flag {
			break
		}
	}

	if flag {
		fmt.Println("Yes")
	} else {
		fmt.Println("No")
	}
}
