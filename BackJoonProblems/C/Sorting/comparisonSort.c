//데이터들간의 상대적 크기관계만을 이용해서 정렬하는 알고리즘
//따라서 데이터들간의 크기 관계가 정의되어 있으면 어떤 데이터에든 적용가능 ( 문자열 , 알파벳, 사용자 정의 객체 등)

// non-comparison sort
// 정렬할 데이터에 대한 사전지식을 이용 - 적용에 제한
// buacket sort, radix sort

// 어떤 comparison sort도 nlogn(lower bound) 보다 낮을 수 없다.

//Counting Sort
// 길이 k인 배열에 각 정수의 개수를 count해서 정렬

//Radix sort
//가정 : n개의 d자리 정수들이고 가장 낮은 자리수부터 정리한다.
//