function customReduce(arr, reducer, initialValue) {
  let accumulator = initialValue !== undefined ? initialValue : arr[0];

  for (let i = initialValue !== undefined ? 0 : 1; i < arr.length; i++) {
    accumulator = reducer(accumulator, arr[i]);
  }

  return accumulator;
}

function groupByProperty(acc, item, prop) {
  let key = item[prop];

  if (!acc[key]) {
    acc[key] = [];
  }

  acc[key].push(item);

  return acc;
}

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
  return customReduce(obj, (acc, item) => groupByProperty(acc, item, prop), {});
}

let redCars = myFunc(cars, 'color');
console.log(redCars);
