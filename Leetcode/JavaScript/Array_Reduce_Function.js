// Grouping Objects With Array Reduce in JavaScript

// This groups objects based on a property value using the JavaScript array reduce method.

// Creating an array of objects
let cars = [
    {
      "color": "purple",
      "type": "minivan",
      "registration": new Date("2021-03-25"),
      "capacity": 7
    },
    {
      "color": "red",
      "type": "station wagon",
      "registration": new Date('2022-07-05'),
      "capacity": 5
    },
    {
      "color": "red",
      "type": "cabrio",
      "registration": new Date('2023-09-14'),
      "capacity": 2
    }
  ];
  
  function myFunc(obj, prop) {
  
    return obj.reduce(function(acc, item) {
  
      let key = item[prop]
  
      if (!acc[key]) {
  
        acc[key] = []
  
      }
  
      acc[key].push(item)
  
      return acc
  
    }, {})
  
  }
  
  let redCars = myFunc(cars, 'color')
  
  console.log(redCars);