const dog = { type: '츄츄', name: '에스파', onwer { name: 나 }}

//log level
console.log('log'); //개발 - 출력
console.info('info');   //정보
console.warn('wrarn');  //정보 ( 경보 단게의 에러를 출력 )
console.error('error'); //에러! 예상하지 못한 에러, 시스템 에러

//level 에 따라서 정확한 로그를 사용해 쓸데없이 log와 info가 반복되어 속도가 느려지는 걸 방지한다

//assert    특정한 조건이 맞을때만 출력이 되도록 사용
console.assert(2==3, 'not same!');
console.assert(2==2, ' same!');     //이 경우는 출력되지 않음

//print object
console.table(dog); 
console.dir(dog, {colors: false, depth: 1 }); //log를 사용할 때와 동일하게 출력되지만, 옵션을 선택할 수 있다.

//mesuring time
console.time('for loop');
for ( let i = 0; i < 10; i++) {
    i++;
}
console.timeEnd('for loop');

//counting

function a() {
    console.count('a function');
}
a();
a();
a();

//trace
function f1() {
    f2();
}
functionf2() {
    f3();
}
function f3() {
    console.trace();
    console.log('hi :) ');
}
f1();
