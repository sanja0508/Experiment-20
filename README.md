# Experiment-20

Aim:
To implement and demonstrate three sorting algorithms:

Selection Sort using pointers

Bubble Sort using array elements

Insertion Sort using array elements

Software Required:
Visual Studio / Code::Blocks / Dev C++ / Turbo C++, C++ Compiler (GCC or MSVC)

Theory:

Sorting is the process of arranging elements in a particular order, often in ascending or descending order. Sorting algorithms are fundamental in computer science, and efficient sorting is essential for optimizing searching and other operations.

Selection Sort:

Selection Sort is a comparison-based sorting algorithm that works by repeatedly finding the smallest (or largest) element in the unsorted portion of the array and swapping it with the first unsorted element.

Steps:

Select the minimum element from the unsorted section.

Swap it with the first unsorted element.

Repeat the process for the remaining unsorted elements.

Selection sort has a time complexity of O(n²), making it inefficient for large datasets.

Bubble Sort:

Bubble Sort works by comparing adjacent elements in the array and swapping them if they are in the wrong order. This process continues until no more swaps are needed, indicating that the array is sorted.

Steps:

Compare adjacent elements.

Swap them if they are in the wrong order.

Continue this process for the entire array until no more swaps occur.

Bubble sort is also inefficient for large datasets with a time complexity of O(n²).

Insertion Sort:

Insertion Sort works by building a sorted portion of the array one element at a time. It picks an element from the unsorted portion and inserts it into its correct position in the sorted portion.

Steps:

Start with the second element.

Compare it to the first element, and if it's smaller, shift the first element to the right.

Insert the current element at its correct position.

Repeat this for all elements.

Insertion sort is more efficient than Selection Sort and Bubble Sort for small datasets and partially sorted arrays, with a time complexity of O(n²).

Algorithm:
Selection Sort Algorithm:

For each element in the array:

Find the minimum element in the remaining unsorted part.

Swap it with the current element.

Continue until the array is sorted.

Bubble Sort Algorithm:

Compare each pair of adjacent elements.

If they are in the wrong order, swap them.

Repeat the process until no swaps are needed.

Insertion Sort Algorithm:

Start from the second element.

Compare it with the first and place it at the correct position in the sorted part.

Repeat this process for all elements.

Conclusion:

In this experiment, we implemented three sorting algorithms: Selection Sort, Bubble Sort, and Insertion Sort. These algorithms demonstrate different approaches to sorting an array, and each has its own advantages and disadvantages. While Selection Sort and Bubble Sort have a time complexity of O(n²), Insertion Sort is more efficient for small datasets or partially sorted arrays. The understanding of these algorithms is crucial for improving algorithmic problem-solving skills in computer science.
