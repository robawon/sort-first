# sort-first
## student info
name:haymanot derbe
ID no: 8525/23
### algorithm
Algorithm: Search After Sorting
Input Phase:
Prompt the user to enter the number of elements, n.
Initialize an array arr of size n.
Prompt the user to enter n elements and store them in arr.
Prompt the user to enter the target value to search for.
Sorting Phase:
Sort the array arr in ascending order.
Searching Phase:
Initialize a variable index to -1 (indicating not found).
For each element in the sorted array:
If the current element is equal to the target:
Set index to the current index and break the loop.
If the target is not found in the array, index remains -1.
Output Phase:
If index is not -1, output the message indicating the target was found and its index.
If index is -1, output the message indicating the target was not found.