// class
// -template   //붕어빵 틀
// -declare once
// - no data in
// Object
// -instance of a class
// -created many Times
// -data in        //팥, 슈크림 붕어빵
'use strict';
// object-oriented programming
//class: template
// JS classes
// -introduced in ES6
// -syntatical sugar over prototype-based inheritance

//1. Class declarations
class Person {
    //constructor
    constructor(name, age) {
        //fields
        this.name = name;
        this.age = age;
    }

    //methos
    speak() {
        console.log(`$(this.name): hello!`);
    }
}

const ellie = new Person('ellie', 20);
console.log(ellie,name);
console.log(ellie,age);
ellie.speak();

// 2. Getter / Setter ???

class User {
    constructor(firstName, lastName, age) {
        this.firstNamve = firstName;
        this.lastName = lastName;
        this.age = age;
    }

    get age() {
        return this._age;
    }

    set age(value) {
        this._age = value < 0 ? 0: value;
    }
}

const user1 = new User('Steve', 'Job', -1); 
console.log(user1.age);

// 3. Public/Private fills
class Experiment {
    publicField = 2;
    #privateField = 0;
}
const experiment = new Experiment();
console.log(experiment.publicField);
console.log(experiment.privateField);

//4. Static\

//5. 상속 & 다양성 *** inheritance
//a way for one class to extend another class/
class Shape {
    constructor(width, height, color) {
        this.width = width;
        this.height = height;
        this.color = color;
    }

    draw() {
        console.log(`drawing ${this.color} color of`);
    }

    getArea() {
        return width * this.height;
    }
}


