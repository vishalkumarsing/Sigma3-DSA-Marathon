function customFilter(array, callback) {
  const filteredArray = [];
  for (let i = 0; i < array.length; i++) {
      if (callback(array[i], i, array)) {
          filteredArray.push(array[i]);
      }
  }
  return filteredArray;
}

// Example usage
const numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

const filteredNumbers = customFilter(numbers, (num) => num % 2 === 0);

console.log(filteredNumbers); // Output: [2, 4, 6, 8, 10]
