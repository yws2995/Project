// Promise는 JS에서 제공하는 비동기를 간편하게 처리할 수 있도록 도와주는 Object이다.
// 기능 수행 후 정상적인 기능이 수행되었다면 처리된 결과를 전달하고 그렇지 않으면 에러를 전달해준다.
// Promise를 사용해서 비동기를 깔끔하게 처리하자

//------------------------
//Promoise is a JS object for asynchoronous operation.
// 1. State 어떤 상태인지를 파악하고 2.Producer와 Consumer의 차이점일 아는 것이 중요하다
// state: peding -> fulfilled or rejected
// Producer vs Consumer

//1. Producer
// **Promise를 만드는 순간 executor라는 callback함수가 자동적으로 실행된다.
const promise = new Promise((resolve, reject) => {
    // doing some heavy work    (network, read files)
    console.log('doing something...');
    setTimeout(() => {
        //resolve('ellie');
        reject(new Error('no network'));
    },2000);
});

// 2. Consumer: then, catch, finally
promise
.then((value) => {
    console.log(value);
})
.catch(error => {
    console.log(error);
})
.finally(() => {console.log('finally');
});
// 3. Promise chanining
const fetchNumber = new Promise((resolve, reject) => {
    setTimeout(() => resolve(1), 1000 );
});

fetchNumber
.then(num => num * 2)
.then(num => num * 3)
.then(num => {
    return new Promise((resolve, reject) => {
        setTimeout(() => resolve(num-1), 1000);
    });
})
.then(num => console.log(num));

// 4. Error Handling
const getHen = () =>
    new Promise((resolve, reject) => {
        setTimeout(() => resolve('*' , 1000));
    });
const getEgg =hen =>
new Promise((resolve, reject) => {
    setTimeout(() => resolve(`${hen} => **` , 1000));
});
const cook = egg =>
new Promise((resolve, reject) => {
    setTimeout(() => resolve(`${egg} => ***` , 1000));
});

getHen()//
.then(hen => getEgg(hen))
.then(egg => cook(egg))
.then(meal => console.log(meal));