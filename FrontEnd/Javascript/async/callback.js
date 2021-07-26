'use strict';

//JavaScript is synchronous
// Execute the code block in order after hoisting. 자바는 동기적이다. hoisting이후부터 하나씩 동기적으로 실행된다.
// hoisting : var, function declaration 등이 제일 위로 올라감. 
console.log('1');
setTimeout(() => console.log('2'), 1000);   //비동기의 예시 1,3,2 순서로 출력된다. 2는 setTimeout을 만나면 1초뒤 실행된다. 
                                            // Callback 함수는 간단하게 arrow function으로 나타낼 수 있다.
console.log('3');


// Callback은 2가지 경우로 나뉜다.
// 1. synchronous callback
function printImmediately(print) {
    print();
}
printImmediately(() => console.log('hello'));//함수의 선언부이므로 실제 동작에서는  자동으로 맨 위에 위치한다

// 2. asynchronous callback 
function printWithDelay(print, timeout) {
    setTimeout(print, timeout);
}
printWithDelay(() => console.log('async callback'), 2000);

//Callback Hell example
class UserStorage {
    loginUser(id, password, onSuccess, onError)
}

