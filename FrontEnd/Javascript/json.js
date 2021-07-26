// Json
// JavaScript Object Natation
// Overloading . 함수의 이름은 동일하지만 매개변수에 따라 다른 방식으로 호출하는 것
//1. Object to JSON
// stringify(obj)
let json = JSON.stringify(true);
console.log(json); // true

json = JSON.stringify(['apple', 'banana']);
console.log(json);

//object를 json으로 변환
const rabbit = {
    name: 'tori',
    color: 'white',
    size: null, 
    birthDate: new Data(),
    symbol: Symbol("id"),
    jump: () => {
        console.log(`${this.name} can jump!`);
    },
};

json = JSON.stringify(rabbit);      //id는 포함되지 않고 함수는 object에 있는 데이터가 아니기 때문에 jump는 포함되지 않는다
console.log(json);

json = JSON.stringify(rabbit, ['name']);     
console.log(json);
//Callback function
json = JSON.stringify(rabbit, (key,value) => {    
    console.log(`key: ${key}, value: ${value}`);
    return key==='name'? 'ellie' : value;
});
console.log(json);

//2. JSON to object
// parts(json)

json = JSON.stringify(rabbit);
//const obj = JSON.parse(json);
const obj = JSON.parse(json, (key, value) => {
    console.log(`key: ${key}, value: ${value}`);
    return key === 'birthDate' ? new Date(value) : value;
});
console.log(obj);
rabbit.jump();
// json을 다시 object로 변환하면 jump 메소드는 포함되지 않기 때문에 obj.jump();는 오류

console.log(rabbit.birthDate.getdate());

//console.log(obj.birthDate.getdate()); birthDate는 string이기 때문에 에러가 난다. 






