'use strict';

// 4. Variable types
// primitive(값 자체가 메모리에 저장), single itme: number, string, boolean, null, undefined, symbol
// object(너무 커서 메모리에 바로 저장할 수가 없고 reference를 통해 메모리를 가리킨다.), box contaier
// function, first-class funtion
// number만 이용하면 숫자는 해결! 심지어 선언하지 않아도 type이 동적으로 결정되기 때문에
// let이나 const로 할당해도 상관없다.


// template literals????    
// symbol, create unique identifiers for objects
// 우선순위를 주고 싶을 때 식별자를 주는 역할
const symbol1 = symbol('id');
const symbol2 = symbol('id');
console.log(symbol==symbol2); //false

const symbol1 = symbol.for('id');
const symbol2 = symbol.for('id');
console.log(symbol==symbol2); //true

// object, real-life object, data structure
const ellie = {name: 'ellie', age: 20}; //다른 object로 변경이 불가능하지만 안에있는 items는 변경이 가능하다.


//5. dynamic typing: dynamically typed language
// 프로그램이 동작할 때 할당된 값에 따라서 type이 변화할 수 있는 언어이다.
let text = 'hello';
console.log(`value: ${text}, type: ${typeof text}`);//string
text = 1;
console.log(`value: ${text}, type: ${typeof text}`);//numver
text = '7'+5;
console.log(`value: ${text}, type: ${typeof text}`);//string
text = '8' / '2';
console.log(`value: ${text}, type: ${typeof text}`);//numver


