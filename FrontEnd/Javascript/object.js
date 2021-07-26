// Objects
// one of the JS data type
// a collection of related data and/or functionality.
// nearly all obects in Js are instance of object
// ** object = {key: value};
// 1.Literals and properties
const obj1 = {};        //object literal
const onj2 = new Object();      //object constructor

//2. computed properties
console.log(ellie.name);
console.log(ellie['name']); //정확하게 어떤키가 필요한지 모르고 runtime에서 결정될 때 사용
ellie['hasJob'] = true;
console.log(ellie.hasJob)

//3.Property value shorthand

const person4 = new personalbar('ellie', 30);
console.log(person4);

//4.Constructor fuction
function Person(name,age) {
    //this = {};
    this.name = name;
    this.age = age;
    //return this;
}


5. in operator : property existence check(key가 object안에 있는지 확인)
console.log('name' in ellie);   // true/falase
// 정의하지 않은 key에 접근하면 undefined

// 6.for..in vs for..of
// for (key in obj1)
for(key in ellie) {
    console.log(key);
}

// for (value of iterable)
const array = [1, 2, 3, 4, 5];
for( value of array ) {
    console.log(value);
}

7. cloning
//object.assign(dest, [obj1, obj2, obj3...])
const user = {name: 'ellie', age: '20'};
const user2 = user;

const user4 = {};
Object.assign(user4, user);





