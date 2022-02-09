# Push_swap

This project was completed in February 2019 as part of the 42 cursus. The project consists of 2 executables : the first one (push_swap) takes a list of unique numbers, and returns a series of instuctions on how to sort them, using a second stack. The second (checker) checks that the instructions really sort the numbers correctly. Full instructions can be found in the *resources* folder.

![path to push_swap](https://i.imgur.com/pzP9Xx8.png "Algo branch > ft_printf > push_swap")

*Sorting algorithms, basics of stacks manipulations*

## Solving the problem

This project was an introduction to **sorting algorithms** and **complexity**. One of the challenges was that for this project, complexity was not measure in number of computations within the program, but in number of instructions, which makes the project very unique and challenging. It requires a good understanding of the mechanics of sorting algorithm in order to adapt them to the problem.

### Stacks and instructions

The rules the algorithm had to follow is that it can only store the number in two stacks, two arrays of int which follow the "last in, first out" principle. At the begining, the numbers given as parameters are stored in pile a. The algorithm can only use the following instructions :

| Name | Effect |
|:----:|:------:|
| pa | Push the top number of stack b onto stack a |
| pb | Push the top number of stack a onto stack b |
| ra | Places the top number of stack a to the bottom of stack a |
| rb | Places the top number of stack b to the bottom of stack b |
| rr | Equivalent of ra rb |
| rra | Places the bottom number of stack a at the top of stack a |
| rrb | Places the bottom number of stack b at the top of stack b |
| rrr | Equivalent of rra rrb |
| sa | Swaps the two top numbers of stack a |
| sb | Swaps the two top numbers of stack b |
| ss | Equivalent of sa sb |

### My algorithm

I used a version of the recursive quick-sort algorithm. Since time complexity was not an issue to take into account, I could use the median as the pivot to make quick sort as efficient as possible. There are two recusive functions that I used to sort the pile (for the two algorithm, the limiting condition is that if the number of elements to be sorted is 3 or less, a different sorting function is used):
* quick_sort_a, which sorts the stack as follows :
  1. Find the median of the `len` top numbers in stack a (for the first iteration, len is the number of numbers in the list)
  2. For the `len` top numbers in the list, push those which are smaller than the median onto stack b
  3. Use quick_sort_a on the `len / 2` elements left in stack a
  4. Use quick_sort_b on the `len / 2` elements pushed on stack b
* quick_sort_b, which works like this:
  1. Find the median of the `len` top numbers in stack b (for the first iteration, len is half the number of numbers in the list)
  2. For the `len` top numbers of the stack, push those which are higher than the median onto stack a.
  3. Use quick_sort_a on the `len / 2` elements which where pushed onto stack a.
  4. Use quick_sort_b on the `len / 2` elements left in stack b.

In order to visualize how the algorithm works, you can use the [push_swap visualizer by o-reo](https://github.com/o-reo/push_swap_visualizer) (requires python3). One the project is compiled, use :
```
mv resources/pyviz.py ./
python3 pyviz.py `ruby -e "puts (-200..200).to_a.shuffle.join(' ')"`
```
You can adjust the max and min (-200..200) for a bigger or smaller list of numbers.

### Checker

The checker's goal is to verify the output of the push_swap executable, such as if the output of the latter is piped into the checker, the checker should always return OK.

#### Bonus

The flags -v and -c allow to see the state of each stack at with every new instruction (-c ouputs the last modification in color).

<p align="center"><img src="https://i.imgur.com/8tFAfqk.png" /></p>

## Getting Started

Run `make` to create both the push_swap and checker executables.

## Examples and efficiency

```
$> ./push_swap 0 1 2 3
$>
```
```
$> ./push_swap -1 5 6 0 3 98 -27
pb
ra
ra
pb
ra
ra
pb
pb
ra
pb
sa
sb
pa
pa
sb
pa
sb
pa
pa
```
Part of the grade depends on optimizing the number of instructions in the algorithm's output. You can test the efficiency of my algorithm with the following command:
* *For 100 numbers*:
```
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l
```
| 1 point | 2 points | 3 points | 4 points | 5 points |
|:-------:|:--------:|:--------:|:--------:|:--------:|
| 1500 | 1300 | 1100 | 900 | 700 |
| ✅ | ✅ | ✅ | ✅ | ✅ | 🆗 |
* *For 500 numbers*:
```
ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l
```
| 1 point | 2 points | 3 points | 4 points | 5 points |
|:-------:|:--------:|:--------:|:--------:|:--------:|
| 11500 | 10000 | 8500 | 7000 | 5500 |
| ✅ | ✅ | ✅ | ✅ | ✅ | ✅ |

## Authors

* **[anaiel](https://github.com/anaiel)**

<img align="right" src="https://i.imgur.com/FW5Sd6I.png" />
