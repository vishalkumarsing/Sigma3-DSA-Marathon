function customMap(array, callback) {
    if (!Array.isArray(array) || typeof callback !== 'function') {
      throw new Error('Invalid input. The first argument must be an array, and the second argument must be a function.');
    }
  
    const result = [];
    for (let i = 0; i < array.length; i++) {
      result.push(callback(array[i], i, array));
    }
  
    return result;
  }
  
  // Example usage:
  const numbers = [1, 2, 3, 4, 5];
  const doubledNumbers = customMap(numbers, (num) => num * 2);
  
  console.log(doubledNumbers); // Output: [2, 4, 6, 8, 10]
  