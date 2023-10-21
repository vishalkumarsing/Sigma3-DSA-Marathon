function mergeSort(arr) {
  // Base case
  if (arr.length <= 1) {
    return arr;
  }

  // Calculate the midpoint of the array
  const mid = Math.floor(arr.length / 2);

  // Divide the array into left and right sub-arrays
  const left = arr.slice(0, mid);
  const right = arr.slice(mid);

  // Recursively sort and merge the left and right sub-arrays
  return merge(mergeSort(left), mergeSort(right));
}

function merge(leftArray, rightArray) {
  const sortedArray = [];

  while (leftArray.length && rightArray.length) {
    // Compare the first elements of both arrays and add the smaller one to the sorted array
    if (leftArray[0] <= rightArray[0]) {
      sortedArray.push(leftArray.shift()); // shift() method removes and returns the first element of an array.
    } else {
      sortedArray.push(rightArray.shift());
    }
  }
  return [...sortedArray, ...leftArray, ...rightArray];
}

// Example usage
const arr = [8, 23, 1, -7, 0, 40, 2, -9];
console.log(mergeSort(arr));
