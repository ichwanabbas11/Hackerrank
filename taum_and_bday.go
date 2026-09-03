package main

import (
	"fmt"
)

func main() {
	var n int
	fmt.Scan(&n)

	for i := 0; i < n; i++ {
		var b, w, bc, wc, z int

		fmt.Scan(&b, &w)
		fmt.Scan(&bc, &wc, &z)

		var totalCost int

		if bc > wc+z {
			totalCost = wc*w + b*(wc+z)
		} else if wc > bc+z {
			totalCost = bc*b + w*(bc+z)
		} else {
			totalCost = bc*b + w*wc
		}

		fmt.Println(totalCost)
	}
}
