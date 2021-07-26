// 1. string  concatenate
console.log('my' + ' cat');
console.log('1' + 2);
console.log(`string literals:

''''
1+2 = ${1+2}`);

// 6. logical operatior
const value1 = false;
const value2 = 4 < 2;
// ||(or), finds the first truthy true. true가 나오면 계산을 그냥 멈춘다.
// 따라서 simlple하게 계산될 수 있는 것을 앞에 두고 함수를 뒤에 배치하는게 효율적이다.
 // &&(and), finds the first falsy value
console.log(`and: ${value && value2 && check()}`);

//often used to compress long if-statement
// nullableObject && nullableOnjects.something

// loose equality, with type conversion

// strict equality(===) no type conversion
// object equality by reference

// 9.Ternary operator: ? 
// condition ? value1 : value2; True라면 value1을 출력한다.
console.log(name ==='ellie' ? 'yes' : no?;)

// 11. loops
// block을 먼저 실행하고 싶으면 do while을 사용하고 조건문이 맞을 때만 사용하고 싶다면 while을 사용한다.
do { 
    console.log(`do while: ${i}`);
    i--;
} while ( i > 0);

//for loop, for(begin; condition; step)
for(i=3; i > 0; i--){
    console.log(`for: ${i}`);
}
for ( let i =3; i>0; i-=2) {
    //inline variable declaration
    console.log(`inline variable for: ${i}`);
}



