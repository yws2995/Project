'use strict';

// Array
// 1. Declaration
const arr1 = new Array();
const arr2 = [1, 2];

// 2. Index position

const fruits = ['apple','banana'];
console.log(fruits);
console.log(fruits.length);
console.log(fruits[0]);
console.log(fruits[fruits.length - 1]); //마지막 idx에 접근할 때

// 3. Looping over an array
//a. for loop
// b. for of
for(let fruit of fruits) {
    console.log(fruit);
}
//c. forEach
fruits.forEach(function (fruit, index) {
    console.log(fruit, index);
});

// fruits.forEach((fruit)) => console.log(fruit));

// 4. Addition, deletion, copy
// push: add an item to the end
fruits.push('melon', 'peach');
console.log(fruits);
// pop: remove an item from the end
fruits.pop();
console.log(fruits);

// unshift: add an item to the beginning
fruits.unshift('melon');        //앞에서부터 원하는 데이터 삽입
// shift: remove an item from the beginning
fruits.shift(); //앞에서부터 데이터 제거

// **note!! shift, unshift are slower than pop,push
//splice:remove an item by index position
fruits.splice(1,1,'watermelon', 'something');

//combine to arrays
const fruits2=['melon',apple];
const newfruits = fruits.concat(fruits2);
console.log(newfruits);

//5.Searching
//find the index
console.log(fruits);
console.log(fruits.indexOf('melon'));
console.log(fruits.includes('melon'));

//lastIndexOf
fruits.push('water');
console.log(fruits);
console.log(fruits.lastindexOf('melon'));
