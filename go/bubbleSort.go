package main

import "fmt"

func main() {
	array := []int{100, 50, 30, 700, 500, 350, 10, 900, 20}
	fmt.Println("before")
	fmt.Println(array)
	for i := 0; i < len(array); i++ {
		for j := 0; j < len(array)-1-i; j++ {
			if array[j] > array[j+1] {
				array[j], array[j+1] = array[j+1], array[j]
			}
		}
	}
	fmt.Println("after")
	fmt.Println(array)
}
