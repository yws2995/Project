mergesort와 달리 추가 배열이 필요하지 않다.
이진 힙 자료구조를 사용한다.

Heap은 2가지 조건이 필요하다.
1. Complete binary tree이면서
2. heap property를 만족해야 한다.

힙은 일차원 배열로 표현가능
max_heapify
두 자식들 중 더 큰 쪽이 나보다 크면 exchange한다.

max-heapify(a,i)
{
    if there is no child if a[i]
        return;
    k<- index of the biggest child of  i;
    if a[i] >= a[k]
        return;
    exchange a[i] and a[k];
    max-heapify(a,k);
}

max-heapify(a,i)
{
    while a[i] has a child do
  
    k<- index of the biggest child of i;
    if a[i]>= a[k]
        return;
    exchange a[i] and a[k];
    i=k;
    end.
}

1.주어진 데이터를 힙으로 만든다.
2. 힙에서 최대값(루트)를 가장 마지막 값과 바꾼다.
3. 힙의 크기가 1줄어든 것으로 간주한다. 즉, 가장 마지막 값은 힙의 일부가 아닌 것으로 간주한다.
4. 루트 노드에 대해서 heapify(1)을 한다.
5. 2~4번을 반복한다.