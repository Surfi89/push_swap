<h1 align="center">
	🔄 push_swap
</h1>

<p align="center">
	<b><i>Because Swap_push isn’t as natural</i></b><br>
</p>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/surfi89/push_swap?color=lightblue" />
	<img alt="Number of lines of code" src="https://img.shields.io/tokei/lines/github/surfi89/push_swap?color=critical" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/surfi89/push_swap?color=yellow" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/surfi89/push_swap?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/surfi89/push_swap?color=green" />
</p>

<h3 align="center">
	<a href="#%EF%B8%8F-about">About</a>
	<span> · </span>
	<a href="#%EF%B8%8F-usage">Usage</a>
	<span> · </span>
	<a href="#-testing">Testing</a>
</h3>

---

## 💡 About the project

> _This project will make you sort data on a stack, with a limited set of instructions, using
the lowest possible number of actions. To succeed you’ll have to manipulate various
types of algorithms and choose the one (of many) most appropriate solution for an
optimized data sorting._

	This project consists of coding a program that finds the lowest possible number of moves to
	sort a random list of integers using 2 stacks and a limited set of operations  

For more detailed information, look at the [**subject of this project**](https://github.com/Surfi89/42cursus/tree/main/Subject%20PDFs).


## 🛠️ Usage

### Requirements

The function is written in C language and thus needs the **`gcc` compiler** and some standard **C libraries** to run.

### Instructions

**1. Compiling the program**

To compile, go to the program path and run:

```shell
$ make
```

**2. Executing the program**

To execute the program, run:

```C
$ ./push_swap $ARG
```

where `$ARG` is a space separated list of integers, e.g. `ARG="1 5 2 4 3"`

### Actions

**PUSH**

Take the first element at the top of one stack and put it at the top of the other; do nothing if the origin stack is empty.

* **`pa`** - top element of _stack b_ goes to top of _stack a_.
* **`pb`** - top element of _stack a_ goes to top of _stack b_.

**SWAP**

Swap the first 2 elements at the top of the stack; do nothing if there is only one or no elements.

* **`sa`** - swap  _stack a_.
* **`sb`** - swap  _stack b_.
* **`ss`** - `sa` and `sb` at the same time.

**ROTATE**

Shift up all elements of the stack by one; the first element becomes the last.

* **`ra`** - rotate stack a.
* **`rb`** - rotate stack b.
* **`rr`** - `ra` and `rb` at the same time.

**REVERSE ROTATE**

Shift down all elements of the stack by one; the last element becomes the first.

* **`rra`** - reverse rotate stack a.
* **`rrb`** - reverse rotate stack b.
* **`rrr`** - `rra` and `rrb` at the same time.

**USED ALGORITHM**

I used a version of the recursive quick-sort algorithm. Since time complexity was not an issue to take into account, I could use the median as the pivot to make quick sort as efficient as possible. There are two recusive functions that I used to sort the pile (for the two algorithm, the limiting condition is that if the number of elements to be sorted is 3 or less, a different sorting function is used):

quick_sort_a, which sorts the stack as follows :
Find the median of the len top numbers in stack a (for the first iteration, len is the number of numbers in the list)
For the len top numbers in the list, push those which are smaller than the median onto stack b
Use quick_sort_a on the len / 2 elements left in stack a
Use quick_sort_b on the len / 2 elements pushed on stack b
quick_sort_b, which works like this:
Find the median of the len top numbers in stack b (for the first iteration, len is half the number of numbers in the list)
For the len top numbers of the stack, push those which are higher than the median onto stack a.
Use quick_sort_a on the len / 2 elements which where pushed onto stack a.
Use quick_sort_b on the len / 2 elements left in stack b.
