// constructor function for creating a person object
function Person(name, age, gender) {
  this.name = name;
  this.age = age;
  this.gender = gender;
}

// creating an instance of Person object
let person1 = new Person("John", 30, "male");

// accessing properties of person1 object
console.log("Displaying details:");
console.log(person1.name);
console.log(person1.age);
console.log(person1.gender);
