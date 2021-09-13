// 계층적인 구조를 표현
// 조직도, 디렉토리와 서브디렉토리 구조, 가계도
// 트리는 노드들과 노드들을 연결하는 링크들로 구성된다.

//노드가 n개인 트리는 항상 n-1개의 링크를 가진다.

//트리에서 루트에서 어떤 노드로 가는 경로는 유일하다. 또한 임의의 두 노드간의 경로도 유일하다.

//이진 트리
// 이진 트리에서 각 노드는 최대 2명의 자식을 가진다.
// 각각의 자식 노드는 자신의 부모의 왼쪽 자식인지 오른쪽 자식인지가 지정된다.

//이진 검색트리(binary search tree)
//여러 개의 키를 저장
//다음과 같은 연산들을 지원하는 자료구조
// insert, search, delete
// 예: 심볼 테이블

iterative - tree - search(x, k)
{
    while
        x != null and k != key[x] do if k < key[x] then x < -left[x] else x < -right[x] return x
}

Tree_minimum(x) while left[x] != null
                                     do x < -left[x];
return x;

//Successor
// 노드 x의 successor란 key[x]보다 크면서 가장 작은 키를 가진 노드
// 모든 키들이 서로 다르다고 가정

Tree_insert(T, z)
{
    y < -null;
    x < -root[T];
    while
        x != null do y < -X if key[z] < key[x] then x < -left[x] else x < -right[x] p[z] < -y if y = NULL //예외처리 원래 tree가 empty일 경우
                                                                                                         then root[T] < -z else if key[z] < key[y] then left[y] < -z else right[y] < -z
}
