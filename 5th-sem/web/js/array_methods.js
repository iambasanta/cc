let fruits = ["apple", "banana", "orange"];
fruits.push("mango"); // adds 'mango' to the end of the array
console.log(fruits); // output: ['apple', 'banana', 'orange', 'mango']

fruits.pop(); // removes 'mango' from the end of the array
console.log(fruits); // output: ['apple', 'banana', 'orange']

fruits.shift(); // removes 'apple' from the beginning of the array
console.log(fruits); // output: ['banana', 'orange']

fruits.unshift("mango", "grape"); // adds 'mango' and 'grape' to the beginning of the array
console.log(fruits); // output: ['mango', 'grape', 'banana', 'orange']

fruits.splice(1, 1, "mango", "grape"); // removes 'banana' and adds 'mango' and 'grape' at index 1
console.log(fruits); // output: ['apple', 'mango', 'grape', 'orange']

let fruits1 = ["apple", "banana"];
let fruits2 = ["orange", "mango"];
let allFruits = fruits1.concat(fruits2);
console.log(allFruits); // output: ['apple', 'banana', 'orange', 'mango']

console.log("Name : Basanta Rai");
console.log("Symbol no : 23473");
