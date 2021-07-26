// Function
// naming: doSomething, Verb형태로 저장
// function is object in JS >> 여러가지가 가능

// 2. paratemers
// premitive parameters: passed by value
// object parameters: passed by reference

function changeName(obj) {
    obj.name = 'coder';
}
const ellie = { name: 'ellie' }; // memory에는 ref가 들어간다.
changeName(ellie);
console.log(ellie); //name: 'coder';

// 3. Default parameters (added in ES6)
function showMessage(message, from = 'unknown') {
    console.log(` ${messange} by ${from}`);
}
showMessage('Hi!'); // Hi unknown

// 4. Rest Parameters 배열 형태로 전달
function printAll(...args) {
    for ( let i = 0; i < args.length; i++) {
        console.log(args[i]);
    }

    for (const arg of args) {
        console.log(arg);
    }
}
printAll('dream', 'coding', 'ellie');

// 7. Early return, early exit

// 1.Function expression
// a function decalaration can be called earlier than it is defined. (hoisted)
// a function expression is created when the sxecution reaches it.

const print = function() {  //anonymous function
    console.log('print');
};
print();
const printAgain = print;
printAgain();

// 2.Callback function using function expression
function randomQuiz(answer, printYes, printNo) {
    if (answer === 'love you') {
        printYes();
    } else {
        printNo();
    }
}
const printYes = function() {
    console.log('yes!');
};
const printNo = function print() {      //named function
    console.log('No!');
};
randomQuiz('wrong', printYes, printNo);
randomQuiz('love you', printYes, printNo);


// Arrow function
// always anonymous
const simplePrint = () => console.log('simplePrint!');
const add = ( a, b ) => a + b;

//IIFE
(funtion hello() {          //함수의 선언과 동시에 호출
    console.log('IIFE');
})();

// Fun Quiz Time
// function calculate(command,a,b)
// command: add, substract, divide, multiply, remainder

