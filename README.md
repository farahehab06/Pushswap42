# Push_swap

## About

Push_swap is a 42 project written in C. The goal is to sort a list of unique integers using two stacks (A and B) with a limited set of operations, while minimizing the number of instructions.

This implementation uses three sorting strategies: Simple, Medium, and Complex.

## Installation

    git clone <git@github.com:farahehab06/Pushswap.git>
    cd push_swap
    make

## Usage

    ./push_swap 3 5 1 4 2

The program outputs the operations needed to sort the numbers in ascending order.

## Operations

| Operation | Description |
| `sa` | Swap the first two elements of A. |
| `sb` | Swap the first two elements of B. |
| `ss` | Perform `sa` and `sb`. |
| `pa` | Push the top element from B to A. |
| `pb` | Push the top element from A to B. |
| `ra` | Rotate A upwards. |
| `rb` | Rotate B upwards. |
| `rr` | Perform `ra` and `rb`. |
| `rra` | Rotate A downwards. |
| `rrb` | Rotate B downwards. |
| `rrr` | Perform `rra` and `rrb`. |

## Sorting Strategies

### Simple — Selection Sort

The algorithm repeatedly finds the smallest element in stack A, brings it to the top using the shortest rotation direction, and pushes it to stack B.

Once stack A is sorted, all elements are pushed back from B to A.

- Specialized sorting for three elements.
- Shortest rotation direction.
- Operation complexity: **O(n²)**.

### Medium — K-Distribution Sort

The algorithm assigns a rank to each element and distributes elements into stack B using a dynamic window.

The window is calculated as follows:

- `1.3 × √n` for 100 elements or fewer.
- `1.4 × √n` for more than 100 elements.

Elements are then returned to stack A from the highest rank to the lowest using the shortest rotation direction.

- Rank-based distribution.
- Dynamic window size.
- Typical operation complexity: **O(n√n)**.

### Complex — Quick Sort

The algorithm uses recursive Quick Sort with a median pivot.

Elements are divided into smaller partitions by transferring them between stacks A and B according to the median value.

Each partition is recursively sorted until all elements are correctly positioned.

- Median pivot for balanced partitions.
- Direct sorting for small partitions.
- Reverse rotations to preserve partition boundaries.
- Operation complexity: **O(n log n)**.

## Complexity

| Strategy | Algorithm | Stack Operations |
| Simple | Selection Sort | O(n²) |
| Medium | K-Distribution Sort | ~O(n√n) |
| Complex | Quick Sort | O(n log n) |


## Benchmark — Bench

The benchmark measures the efficiency of each sorting strategy by tracking the number of executed stack operations.

An `int *ops` pointer is passed to the operation functions to track executed instructions.

The benchmark helps compare sorting strategies and evaluate their performance on different input sizes.

Internal calculations, such as finding the median or assigning ranks, are not counted as stack operations.

## Testing

Count the number of operations:

    ./push_swap 5 3 1 4 2 | wc -l

Test with a compatible checker:

    ARG="5 3 1 4 2"
    ./push_swap $ARG | ./checker $ARG

Expected result:

    OK

## Error Handling

Invalid inputs produce `Error` on standard error, including:

- Duplicate numbers.
- Non-numeric arguments.
- Invalid integer formats.
- Integer overflow or underflow.


Developed as part of the 42 curriculum.
